#pragma once
#include <fstream>
#include <string>

using namespace std;

struct QNode {
	string data;
	QNode* next;
	QNode(string str = "") {
		data = str;
		next = nullptr;
	}
};

class Queue {
private:
	QNode* root;
	int count;
public:
	Queue() {
		root = nullptr;
		count = 0;
	}
	void insert(string str) {
		QNode* newNode = new QNode(str);
		count++;
		if (count > 10) { deleteQ(); }
		if (root == nullptr) {
			root = newNode;
		}
		else {
			QNode* temp = root;
			while (temp->next != nullptr) {
				temp = temp->next;
			}
			temp->next = newNode;
		}
	}

	void deleteQ() {
		if (root == nullptr) { return; }
		QNode* temp = root;
		root = root->next;
		delete temp;
	}
	string* getSuggestions() {
		string* arr = new string[10];
		//for (int i = 0; i < 10; i++) { arr[i] = " "; }
		int j = 0;
		QNode* temp = root;
		if (root = nullptr) { return arr; }
		while (temp != nullptr) {
			arr[j] = temp->data;
			temp = temp->next;
			j++;
		}
		return arr;
	}
};

Queue suggestions;

void getWord_And_Desp(string line, string& word, string& des);

//Linked List
struct Node {
	string defination;
	Node* next;
	Node(string str) {
		defination = str;
		next = nullptr;
	}
};

class LinkedList {
private:
	Node* head;
	int totalDefinations;
public:
	LinkedList() {
		head = nullptr;
		totalDefinations = 0;
	}
	void Insert(string defination) {
		Node* newNode = new Node(defination);
		totalDefinations++;
		if (head == nullptr) {
			head = newNode;
		}
		else {
			Node* temp = head;
			while (temp->next != nullptr) {
				temp = temp->next;
			}
			temp->next = newNode;
		}
	}
	string getDefination(int i) {
		//zero base, 0 = first defination
		if (i == 0 && head != nullptr) {
			return head->defination;
		}
		Node* temp = head;
		while (temp != nullptr && i > 0) {
			i--;
			temp = temp->next;
		}
		if (temp == nullptr) { return "nil"; }
		return temp->defination;
	}
	void deleteDefination(string defination) {
		if (head != nullptr && head->defination == defination) {
			Node* temp = head;
			head = head->next;
			delete temp;
			totalDefinations--;
			//deination found and deleted!
			return;
		}
		Node* curr = head;
		Node* prev = head;

		while (curr != nullptr && curr->defination != defination) {
			prev = curr;
			curr = curr->next;
		}
		if (curr != nullptr) {
			//Found that defination
			totalDefinations--;
			prev->next = curr->next;
			delete curr;
			curr = nullptr;
			return;
		}
		//No such defination found
	}
	int getTotalDefinations() {
		return totalDefinations;
	}
	//void print() {
	//	Node* ptr = head;
	//	while (ptr != nullptr) {
	//		if (ptr->next == nullptr) {
	//			cout << ptr->defination;
	//		}
	//		else {
	//			cout << ptr->defination << "->";
	//		}
	//		ptr = ptr->next;
	//	}
	//	cout << endl;
	//}
	~LinkedList() {
		while (head != nullptr) {
			Node* temp = head;
			head = head->next;
		}
	}
};

//AVL Tree
struct AVL_Node {
	string word;
	int height;
	LinkedList* definations;

	AVL_Node* left;
	AVL_Node* right;

	AVL_Node(string word) {
		definations = new LinkedList;
		this->word = word;
		height = -1;
		left = nullptr;
		right = nullptr;
	}
};

class AVL_Tree {
private:
	AVL_Node* root;
	/*---------------------Functions---------------------*/
	int height(AVL_Node* node) {
		if (node == nullptr) {
			return -1;
		}
		return 1 + max(height(node->left), height(node->right));
	}

	AVL_Node* AVL_Insert(AVL_Node* node, string word, string defination) {
		if (node == nullptr) {
			AVL_Node* newNode = new AVL_Node(word);
			if (defination != "") {
				newNode->definations->Insert(defination);
			}
			return newNode;
		}

		if (word < node->word) {
			node->left = AVL_Insert(node->left, word, defination);
		}
		else if (word > node->word) {
			node->right = AVL_Insert(node->right, word, defination);
		}
		else {
			//Word Already Exists!
			//Adding Another Defination for it
			node->definations->Insert(defination);
			return node;
		}

		node->height = max(height(node->left), height(node->right));

		int BF = BalanceFactor(node);

		if (BF > 1 && node->left->word > word) {	//Left Heavy & word was inserted into Left->left atleast
			//cout << "Single Rotate Right" << endl;
			return SingleRotateRight(node);
		}
		if (BF < -1 && node->right->word < word) {	//Right Heavy & word was inserted into right->right atleast
			//	cout << "Single Rotate Left" << endl;
			return SingleRotateLeft(node);
		}
		if (BF > 1 && node->left->word < word) {	//Left Heavy & word was inserted into left->right atleast (< shape)
			//cout << "Double Rotate Right" << endl;
			return DoubleRotateRight(node);
		}
		if (BF < -1 && node->right->word > word) {	//Right Heavy & word was inserted into right->left atleast (> shape)
			//cout << "Double Rotate Left" << endl;
			return DoubleRotateLeft(node);
		}

		return node;
	}

	AVL_Node* AVL_Delete(AVL_Node* node, string word) {
		if (node == nullptr) {
			return node;
		}

		if (word < node->word) {
			node->left = AVL_Delete(node->left, word);
		}
		else if (word > node->word) {
			node->right = AVL_Delete(node->right, word);
		}
		else {
			//word == node->word
			if (node->left == nullptr && node->right == nullptr) {
				AVL_Node* tempNode = node;
				delete tempNode;
				node = nullptr;
			}
			else if (node->left == nullptr) {
				AVL_Node* tempNode = node;
				node = node->right;
				delete tempNode;
			}
			else if (node->right == nullptr) {
				AVL_Node* tempNode = node;
				node = node->right;
				delete tempNode;
			}
			else {
				//two child case
				AVL_Node* tempNode = findMin(node->right);	//find predec
				node->word = tempNode->word;
				node->right = AVL_Delete(node->right, tempNode->word);
			}
		}

		if (node == nullptr) { return node; }

		node->height = max(height(node->left), height(node->right));

		int BF = height(node->left) - height(node->right);

		if (BF > 1 && BalanceFactor(node->left) >= 0) {	//AVL_Node left Heavy, Left balanced or Left Heavy
			return SingleRotateRight(node);
		}
		if (BF < -1 && BalanceFactor(node->right) <= 0) {	//AVL_Node Right Heavy, Right balanced or Right Heavy
			return SingleRotateLeft(node);
		}
		if (BF > 1 && BalanceFactor(node->left) < 0) { //AVL_Node left Heavy, Left: Right Heavy
			return DoubleRotateRight(node);
		}
		if (BF < -1 && BalanceFactor(node->right) > 0) {	//AVL_Node Right Heavy, Right: Left Heavy
			return DoubleRotateLeft(node);
		}

		return node;
	}

	AVL_Node* findMin(AVL_Node* ptr) {
		while (ptr->left != nullptr) {
			ptr = ptr->left;
		}
		return ptr;
	}

	int BalanceFactor(AVL_Node* ptr) {
		int bal;
		bal = height(ptr->left) - height(ptr->right);
		return bal;
	}

	//void Inorder_Traversal(AVL_Node* node) {
	//	if (node == nullptr) {
	//		return;
	//	}
	//	Inorder_Traversal(node->left);
	//	cout << node->word << " | ";
	//	node->definations->print();
	//	cout << " ";
	//	Inorder_Traversal(node->right);
	//}

	void deleteADefination(AVL_Node* node, string fromWord, string theDefination) {
		if (node == nullptr) {
			//No Such Word Found
			return;
		}

		if (fromWord == node->word) {
			node->definations->deleteDefination(theDefination);
		}
		else if (fromWord < node->word) {
			deleteADefination(node->left, fromWord, theDefination);
		}
		else if (fromWord > node->word) {
			deleteADefination(node->right, fromWord, theDefination);
		}
	}

	int getTotalDefinations(AVL_Node* node, string fromWord) {
		if (node == nullptr) {
			return -1;
		}

		if (node->word == fromWord) {
			return node->definations->getTotalDefinations();
		}
		else if (node->word < fromWord) {
			return getTotalDefinations(node->left, fromWord);
		}
		else if (node->word > fromWord) {
			return getTotalDefinations(node->right, fromWord);
		}
	}

	string getWordDefination(AVL_Node* node, string fromWord, int indexOfDef) {
		if (node == nullptr) {
			return "";
		}

		if (node->word == fromWord) {
			return node->definations->getDefination(indexOfDef);
		}
		else if (node->word < fromWord) {
			return getWordDefination(node->left, fromWord, indexOfDef);
		}
		else if (node->word > fromWord) {
			return getWordDefination(node->right, fromWord, indexOfDef);
		}

	}

	AVL_Node getWord(AVL_Node* node, string STR) {
		if (node == nullptr) {
			return AVL_Node("");
		}
		if (node->word == STR) {
			return *node;
		}
		else if (node->word > STR) {
			suggestions.insert(node->word);
			return getWord(node->left, STR);
		}
		else if (node->word < STR) {
			suggestions.insert(node->word);
			return getWord(node->right, STR);
		}
	}

	//Nodes Rotations
	AVL_Node* SingleRotateLeft(AVL_Node* node) {	//LL
		AVL_Node* subRight = node->right;
		node->right = subRight->left;
		subRight->left = node;

		node->height = max(height(node->left), height(node->right)) + 1;
		subRight->height = max(height(subRight->left), height(subRight->right)) + 1;
		return subRight; /* New root */
	}

	AVL_Node* SingleRotateRight(AVL_Node* node) {	//RR
		AVL_Node* subLeft = node->left;
		node->left = subLeft->right;
		subLeft->right = node;

		node->height = max(height(node->left), height(node->right)) + 1;
		subLeft->height = max(height(subLeft->left), height(subLeft->right)) + 1;
		return subLeft; /* New root */
	}

	AVL_Node* DoubleRotateLeft(AVL_Node* node) {	//LR
		node->right = SingleRotateRight(node->right);
		return SingleRotateLeft(node);
	}

	AVL_Node* DoubleRotateRight(AVL_Node* node) {	//RL
		node->left = SingleRotateLeft(node->left);
		return SingleRotateRight(node);
	}

public:
	AVL_Tree() { root = nullptr; }
	void Insert(string word, string defination) {
		root = AVL_Insert(root, word, defination);
	}
	void Delete(string word) {
		root = AVL_Delete(root, word);
	}
	void deleteADefination(string fromWord, string theDefination) {
		deleteADefination(root, fromWord, theDefination);
	}
	int getTotalDefinations(string fromWord) {
		//-1 represents that word doesn't exists
		return getTotalDefinations(root, fromWord);
	}
	string getWordDefination(string fromWord, int indexOfDefination) {
		//the word ("") represents that the word doesn't exists
		return getWordDefination(root, fromWord, indexOfDefination);
	}
	AVL_Node getWord(string str) {
		return getWord(root, str);
	}
	//void Print() {
	//	Inorder_Traversal(root);
	//	cout << endl << endl;
	//}
	friend class Dictionary;
};

class Dictionary {
private:
	char* charList;
	AVL_Tree* AVLList;

	int getAVLIndex(string word) {
		//pass a lowerCase word
		char ch = word[0];
		int indexToInsert;
		if (ch >= 'a' && ch <= 'z') {
			indexToInsert = ch - 'a';
			//cout << indexToInsert << endl;
		}
		else {
			indexToInsert = 26;
		}
		return indexToInsert;
	}
public:
	Dictionary() {
		charList = new char[27];
		AVLList = new AVL_Tree[27];
		for (int i = 0; i < 26; i++) {
			charList[i] = 'a' + i;
		}
		charList[26] = '#';
	}

	void InsertToDictionary(string word, string defination = "") {
		word = toLower(word);
		defination = toLower(defination);
		int indexToInsert = getAVLIndex(word);
		AVLList[indexToInsert].Insert(word, defination);
	}

	void deleteWord(string word) {
		word = toLower(word);
		int deletionIndex = getAVLIndex(word);
		AVLList[deletionIndex].Delete(word);
	}

	void deleteWordDefination(string word, string defination) {
		word = toLower(word);
		defination = toLower(defination);
		int deletionIndex = getAVLIndex(word);
		AVLList[deletionIndex].deleteADefination(word, defination);
	}

	void changeWord(string fromWord, string toWord) {
		fromWord = toLower(fromWord);
		toWord = toLower(toWord);

		int fromWordIndex = getAVLIndex(fromWord);
		int toWordIndex = getAVLIndex(toWord);

		InsertToDictionary(toWord);
		int tDef = AVLList[fromWordIndex].getTotalDefinations(fromWord);
		for (int i = 0; i < tDef; i++) {
			string def = AVLList[fromWordIndex].getWordDefination(fromWord, i);
			InsertToDictionary(toWord, def);
		}

		deleteWord(fromWord);

	}

	void changeWordDefination(string word, string fromDefination, string toDefination) {
		//Assuming that word exsits (otherwise creates a new instance of that word)
		//Assuming that fromDefination Exists otherwise ignores it and simply adds 
		//the toDefination
		this->deleteWordDefination(word, fromDefination);
		this->InsertToDictionary(word, toDefination);
	}

	AVL_Node getWord(string word) {
		word = toLower(word);
		//cout << word << endl;
		int wordIndex = getAVLIndex(word);
		return AVLList[wordIndex].getWord(word);
	}

	string toLower(string str) {
		string temp = str;
		for (int i = 0; i < str.length(); i++) {
			if (temp[i] >= 'A' && temp[i] <= 'Z') {
				temp[i] = temp[i] - 'A' + 'a';
			}
		}
		return temp;
	}
	//void printCharList() {
	//	for (int i = 0; i < 27; i++) {
	//		cout << charList[i] << " ";
	//	}
	//	cout << endl;
	//}

	void loadDictionary() {
		fstream file("Dictionary.txt", ios::in);
		string str1, str2, line;

		if (!file.is_open()) { return; }

		while (!file.eof()) {
			getline(file, line);
			getWord_And_Desp(line, str1, str2);
			InsertToDictionary(str1, str2);
		}

		file.close();
	}

	void saveDictionary() {
		fstream file("Dictionary.txt", ios::out);

		if (!file.is_open()) { return; }

		for (int i = 0; i <= 26; i++) {
			AVL_Node* temp = AVLList[i].root;
			saveList(temp, file);
		}
		file.close();
	}

	//void Inorder_Traversal(AVL_Node* node) {
	//	if (node == nullptr) {
	//		return;
	//	}
	//	Inorder_Traversal(node->left);
	//	cout << node->word << " | ";
	//	node->definations->print();
	//	cout << " ";
	//	Inorder_Traversal(node->right);
	//}

	void saveList(AVL_Node* node, fstream& file) {
		if (node == nullptr) {
			return;
		}
		saveList(node->left, file);

		for (int i = 0; i < node->definations->getTotalDefinations(); i++) {
			file << node->definations->getDefination(i) << "\t\t\t" << node->word << endl;
		}

		saveList(node->right, file);
	}

};

void getWord_And_Desp(string line, string& word, string& des) {
	word = "";
	des = "";
	bool seperator = false;
	for (int i = 0; i < line.length(); i++) {
		if (!seperator && line[i] != ' ' && line[i] != '	') {
			des += line[i];
		}
		else if (!seperator && (line[i] == ' ' || line[i] == '	')) {
			seperator = true;
		}
		else if (seperator && line[i] != ' ' && line[i] != '	') {
			word += line[i];
		}
	}
}