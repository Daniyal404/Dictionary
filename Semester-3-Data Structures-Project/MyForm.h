#pragma once
#include "Dictionary.h"

Dictionary dictionary;

namespace $safeprojectname$ {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			{
				//Disable Buttons on startin'

				AddBtn->Enabled = false;
				AddBtn->Visible = false;

				searchBtn->Enabled = false;
				searchBtn->Visible = false;

				UpdBtn->Enabled = false;
				UpdBtn->Visible = false;

				delmenubtn->Enabled = false;
				delmenubtn->Visible = false;


				Dictionarytxt->Enabled = false;
				Dictionarytxt->Visible = false;

				groupBox2->Location.X = 19;
				groupBox2->Location.Y = 19;
				groupBox1->Location.X = 19;
				groupBox1->Location.Y = 19;



				groupBox2->Parent = groupBox1;
				SearchBox->Parent = groupBox1;
				DelPage->Parent = groupBox1;
				Updpage->Parent = groupBox1;
				Loadingtxt->Parent = groupBox1;
				Taskdoneadd->Parent = groupBox2;
				Taskdonebox->Parent = DelPage;
				Taskdoneupdbox->Parent = Updpage;



				DelPage->Visible = false;
				DelPage->Enabled = false;

				Updpage->Visible = false;
				Updpage->Enabled = false;

				//620, 350
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ startBtn;
	private: System::Windows::Forms::Button^ AddBtn;

	private: System::Windows::Forms::Button^ searchBtn;
	private: System::Windows::Forms::Button^ UpdBtn;
	private: System::Windows::Forms::Button^ delmenubtn;



	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ BackAddbtn;

	private: System::Windows::Forms::Label^ Meanlbl;
	private: System::Windows::Forms::TextBox^ Addmeantxt;



	private: System::Windows::Forms::Button^ addwordbtn;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Addwordtxt;

	private: System::Windows::Forms::GroupBox^ SearchBox;
	private: System::Windows::Forms::Button^ searchBackBtn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ dissearch;

	private: System::Windows::Forms::Button^ searchWBtn;
	private: System::Windows::Forms::TextBox^ searchTxt;
	private: System::Windows::Forms::GroupBox^ DelPage;
	private: System::Windows::Forms::Button^ Deletebackbtn;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ delmeantxt;
	private: System::Windows::Forms::Button^ Delwordbtn;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ delwordtxt;

	private: System::Windows::Forms::GroupBox^ Updpage;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Updmeantxt;

	private: System::Windows::Forms::Button^ Updwordbtn;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Updwordtxt;
	private: System::Windows::Forms::Button^ Backupdbtn;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ Dictionarytxt;

	private: System::Windows::Forms::TextBox^ Taskdonebox;
	private: System::Windows::Forms::TextBox^ Taskdoneadd;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ newmeaningtxt;
	private: System::Windows::Forms::TextBox^ Taskdoneupdbox;
	private: System::Windows::Forms::Button^ Endprogrambtn;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ Suggestedtxt;
	private: System::Windows::Forms::TextBox^ Loadingtxt;




















































	protected:

	protected:

	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void enableMenuButtons() {
			Taskdonebox->Enabled = false;
			Taskdonebox->Visible = false;

			Taskdoneadd->Enabled = false;
			Taskdoneadd->Visible = false;

			Taskdoneupdbox->Enabled = false;
			Taskdoneupdbox->Visible = false;

			AddBtn->Enabled = true;
			AddBtn->Visible = true;

			Endprogrambtn->Visible = true;
			Endprogrambtn->Enabled = true;


			searchBtn->Enabled = true;
			searchBtn->Visible = true;

			UpdBtn->Enabled = true;
			UpdBtn->Visible = true;

			delmenubtn->Enabled = true;
			delmenubtn->Visible = true;

			Dictionarytxt->Visible = true;
		}
		void disableMenuButtons() {
			AddBtn->Enabled = false;
			AddBtn->Visible = false;

			searchBtn->Enabled = false;
			searchBtn->Visible = false;

			Endprogrambtn->Visible = false;
			Endprogrambtn->Enabled = false;

			UpdBtn->Enabled = false;
			UpdBtn->Visible = false;

			delmenubtn->Visible = false;
			delmenubtn->Visible = false;

			Dictionarytxt->Visible = false;
		}
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Dictionarytxt = (gcnew System::Windows::Forms::TextBox());
			this->UpdBtn = (gcnew System::Windows::Forms::Button());
			this->delmenubtn = (gcnew System::Windows::Forms::Button());
			this->AddBtn = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->Endprogrambtn = (gcnew System::Windows::Forms::Button());
			this->DelPage = (gcnew System::Windows::Forms::GroupBox());
			this->Taskdonebox = (gcnew System::Windows::Forms::TextBox());
			this->Taskdoneadd = (gcnew System::Windows::Forms::TextBox());
			this->Deletebackbtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->delmeantxt = (gcnew System::Windows::Forms::TextBox());
			this->Delwordbtn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->delwordtxt = (gcnew System::Windows::Forms::TextBox());
			this->Updpage = (gcnew System::Windows::Forms::GroupBox());
			this->Loadingtxt = (gcnew System::Windows::Forms::TextBox());
			this->Taskdoneupdbox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->newmeaningtxt = (gcnew System::Windows::Forms::TextBox());
			this->Backupdbtn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Updmeantxt = (gcnew System::Windows::Forms::TextBox());
			this->Updwordbtn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Updwordtxt = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->BackAddbtn = (gcnew System::Windows::Forms::Button());
			this->Meanlbl = (gcnew System::Windows::Forms::Label());
			this->Addmeantxt = (gcnew System::Windows::Forms::TextBox());
			this->addwordbtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Addwordtxt = (gcnew System::Windows::Forms::TextBox());
			this->SearchBox = (gcnew System::Windows::Forms::GroupBox());
			this->Suggestedtxt = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->searchBackBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dissearch = (gcnew System::Windows::Forms::TextBox());
			this->searchWBtn = (gcnew System::Windows::Forms::Button());
			this->searchTxt = (gcnew System::Windows::Forms::TextBox());
			this->startBtn = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->DelPage->SuspendLayout();
			this->Updpage->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SearchBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->AutoSize = true;
			this->groupBox1->BackColor = System::Drawing::Color::Wheat;
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->Dictionarytxt);
			this->groupBox1->Controls->Add(this->UpdBtn);
			this->groupBox1->Controls->Add(this->delmenubtn);
			this->groupBox1->Controls->Add(this->AddBtn);
			this->groupBox1->Controls->Add(this->searchBtn);
			this->groupBox1->Controls->Add(this->Endprogrambtn);
			this->groupBox1->Controls->Add(this->startBtn);
			this->groupBox1->Controls->Add(this->DelPage);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->SearchBox);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->ForeColor = System::Drawing::Color::IndianRed;
			this->groupBox1->Location = System::Drawing::Point(-6, -7);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox1->Size = System::Drawing::Size(1260, 763);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// Dictionarytxt
			// 
			this->Dictionarytxt->BackColor = System::Drawing::Color::Wheat;
			this->Dictionarytxt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 42, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dictionarytxt->ForeColor = System::Drawing::Color::Brown;
			this->Dictionarytxt->Location = System::Drawing::Point(152, 43);
			this->Dictionarytxt->Margin = System::Windows::Forms::Padding(0);
			this->Dictionarytxt->Multiline = true;
			this->Dictionarytxt->Name = L"Dictionarytxt";
			this->Dictionarytxt->Size = System::Drawing::Size(337, 77);
			this->Dictionarytxt->TabIndex = 7;
			this->Dictionarytxt->Text = L"Dictionary";
			this->Dictionarytxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Dictionarytxt->Visible = false;
			// 
			// UpdBtn
			// 
			this->UpdBtn->AutoSize = true;
			this->UpdBtn->BackColor = System::Drawing::Color::Tan;
			this->UpdBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->UpdBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdBtn->ForeColor = System::Drawing::Color::Maroon;
			this->UpdBtn->Location = System::Drawing::Point(413, 256);
			this->UpdBtn->Margin = System::Windows::Forms::Padding(0);
			this->UpdBtn->Name = L"UpdBtn";
			this->UpdBtn->Size = System::Drawing::Size(128, 47);
			this->UpdBtn->TabIndex = 4;
			this->UpdBtn->Text = L"Update Word";
			this->UpdBtn->UseVisualStyleBackColor = false;
			this->UpdBtn->Click += gcnew System::EventHandler(this, &MyForm::UpdBtn_Click);
			// 
			// delmenubtn
			// 
			this->delmenubtn->AutoSize = true;
			this->delmenubtn->BackColor = System::Drawing::Color::Tan;
			this->delmenubtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->delmenubtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delmenubtn->ForeColor = System::Drawing::Color::Maroon;
			this->delmenubtn->Location = System::Drawing::Point(280, 256);
			this->delmenubtn->Margin = System::Windows::Forms::Padding(0);
			this->delmenubtn->Name = L"delmenubtn";
			this->delmenubtn->Size = System::Drawing::Size(128, 47);
			this->delmenubtn->TabIndex = 3;
			this->delmenubtn->Text = L"Delete Word";
			this->delmenubtn->UseVisualStyleBackColor = false;
			this->delmenubtn->Click += gcnew System::EventHandler(this, &MyForm::DelBtn_Click);
			// 
			// AddBtn
			// 
			this->AddBtn->AutoSize = true;
			this->AddBtn->BackColor = System::Drawing::Color::Tan;
			this->AddBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->AddBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddBtn->ForeColor = System::Drawing::Color::Maroon;
			this->AddBtn->Location = System::Drawing::Point(147, 256);
			this->AddBtn->Margin = System::Windows::Forms::Padding(0);
			this->AddBtn->Name = L"AddBtn";
			this->AddBtn->Size = System::Drawing::Size(128, 47);
			this->AddBtn->TabIndex = 2;
			this->AddBtn->Text = L"Add Word";
			this->AddBtn->UseVisualStyleBackColor = false;
			this->AddBtn->Click += gcnew System::EventHandler(this, &MyForm::AddBtn_Click);
			// 
			// searchBtn
			// 
			this->searchBtn->AutoSize = true;
			this->searchBtn->BackColor = System::Drawing::Color::Tan;
			this->searchBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->searchBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchBtn->ForeColor = System::Drawing::Color::Maroon;
			this->searchBtn->Location = System::Drawing::Point(13, 256);
			this->searchBtn->Margin = System::Windows::Forms::Padding(0);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(128, 47);
			this->searchBtn->TabIndex = 1;
			this->searchBtn->Text = L"Search";
			this->searchBtn->UseVisualStyleBackColor = false;
			this->searchBtn->Click += gcnew System::EventHandler(this, &MyForm::searchBtn_Click);
			// 
			// Endprogrambtn
			// 
			this->Endprogrambtn->AutoSize = true;
			this->Endprogrambtn->BackColor = System::Drawing::Color::Tan;
			this->Endprogrambtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Endprogrambtn->Enabled = false;
			this->Endprogrambtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Endprogrambtn->ForeColor = System::Drawing::Color::Maroon;
			this->Endprogrambtn->Location = System::Drawing::Point(546, 256);
			this->Endprogrambtn->Margin = System::Windows::Forms::Padding(0);
			this->Endprogrambtn->Name = L"Endprogrambtn";
			this->Endprogrambtn->Size = System::Drawing::Size(128, 47);
			this->Endprogrambtn->TabIndex = 9;
			this->Endprogrambtn->Text = L"End Program";
			this->Endprogrambtn->UseVisualStyleBackColor = false;
			this->Endprogrambtn->Visible = false;
			this->Endprogrambtn->Click += gcnew System::EventHandler(this, &MyForm::Endprogrambtn_Click);
			// 
			// DelPage
			// 
			this->DelPage->Controls->Add(this->Taskdonebox);
			this->DelPage->Controls->Add(this->Taskdoneadd);
			this->DelPage->Controls->Add(this->Deletebackbtn);
			this->DelPage->Controls->Add(this->label3);
			this->DelPage->Controls->Add(this->delmeantxt);
			this->DelPage->Controls->Add(this->Delwordbtn);
			this->DelPage->Controls->Add(this->label4);
			this->DelPage->Controls->Add(this->delwordtxt);
			this->DelPage->Controls->Add(this->Updpage);
			this->DelPage->Location = System::Drawing::Point(19, 19);
			this->DelPage->Name = L"DelPage";
			this->DelPage->Size = System::Drawing::Size(610, 372);
			this->DelPage->TabIndex = 8;
			this->DelPage->TabStop = false;
			this->DelPage->Text = L"Delete page";
			// 
			// Taskdonebox
			// 
			this->Taskdonebox->BackColor = System::Drawing::Color::Wheat;
			this->Taskdonebox->Enabled = false;
			this->Taskdonebox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Taskdonebox->ForeColor = System::Drawing::Color::Brown;
			this->Taskdonebox->Location = System::Drawing::Point(134, 175);
			this->Taskdonebox->Margin = System::Windows::Forms::Padding(0);
			this->Taskdonebox->Multiline = true;
			this->Taskdonebox->Name = L"Taskdonebox";
			this->Taskdonebox->ReadOnly = true;
			this->Taskdonebox->Size = System::Drawing::Size(337, 40);
			this->Taskdonebox->TabIndex = 9;
			this->Taskdonebox->Text = L"Task done..";
			this->Taskdonebox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Taskdonebox->Visible = false;
			// 
			// Taskdoneadd
			// 
			this->Taskdoneadd->BackColor = System::Drawing::Color::Wheat;
			this->Taskdoneadd->Enabled = false;
			this->Taskdoneadd->Font = (gcnew System::Drawing::Font(L"Times New Roman", 42, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Taskdoneadd->ForeColor = System::Drawing::Color::Brown;
			this->Taskdoneadd->Location = System::Drawing::Point(137, 183);
			this->Taskdoneadd->Margin = System::Windows::Forms::Padding(0);
			this->Taskdoneadd->Multiline = true;
			this->Taskdoneadd->Name = L"Taskdoneadd";
			this->Taskdoneadd->Size = System::Drawing::Size(337, 77);
			this->Taskdoneadd->TabIndex = 10;
			this->Taskdoneadd->Text = L"Task done..";
			this->Taskdoneadd->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Taskdoneadd->Visible = false;
			// 
			// Deletebackbtn
			// 
			this->Deletebackbtn->Location = System::Drawing::Point(-1, 306);
			this->Deletebackbtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Deletebackbtn->Name = L"Deletebackbtn";
			this->Deletebackbtn->Size = System::Drawing::Size(92, 27);
			this->Deletebackbtn->TabIndex = 7;
			this->Deletebackbtn->Text = L"<== BACK";
			this->Deletebackbtn->UseVisualStyleBackColor = true;
			this->Deletebackbtn->Click += gcnew System::EventHandler(this, &MyForm::Deletebackbtn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Teal;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::AliceBlue;
			this->label3->Location = System::Drawing::Point(280, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Enter meaning";
			// 
			// delmeantxt
			// 
			this->delmeantxt->Location = System::Drawing::Point(395, 40);
			this->delmeantxt->Name = L"delmeantxt";
			this->delmeantxt->Size = System::Drawing::Size(133, 22);
			this->delmeantxt->TabIndex = 1;
			// 
			// Delwordbtn
			// 
			this->Delwordbtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delwordbtn->Location = System::Drawing::Point(207, 92);
			this->Delwordbtn->Name = L"Delwordbtn";
			this->Delwordbtn->Size = System::Drawing::Size(142, 40);
			this->Delwordbtn->TabIndex = 2;
			this->Delwordbtn->Text = L"Delete a word";
			this->Delwordbtn->UseVisualStyleBackColor = true;
			this->Delwordbtn->Click += gcnew System::EventHandler(this, &MyForm::Delwordbtn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Teal;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::AliceBlue;
			this->label4->Location = System::Drawing::Point(4, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 19);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Enter word";
			// 
			// delwordtxt
			// 
			this->delwordtxt->Location = System::Drawing::Point(89, 40);
			this->delwordtxt->Name = L"delwordtxt";
			this->delwordtxt->Size = System::Drawing::Size(133, 22);
			this->delwordtxt->TabIndex = 0;
			// 
			// Updpage
			// 
			this->Updpage->Controls->Add(this->Loadingtxt);
			this->Updpage->Controls->Add(this->Taskdoneupdbox);
			this->Updpage->Controls->Add(this->label8);
			this->Updpage->Controls->Add(this->newmeaningtxt);
			this->Updpage->Controls->Add(this->Backupdbtn);
			this->Updpage->Controls->Add(this->label5);
			this->Updpage->Controls->Add(this->Updmeantxt);
			this->Updpage->Controls->Add(this->Updwordbtn);
			this->Updpage->Controls->Add(this->label6);
			this->Updpage->Controls->Add(this->Updwordtxt);
			this->Updpage->Location = System::Drawing::Point(19, 19);
			this->Updpage->Name = L"Updpage";
			this->Updpage->Size = System::Drawing::Size(620, 350);
			this->Updpage->TabIndex = 8;
			this->Updpage->TabStop = false;
			this->Updpage->Text = L"Update Word";
			// 
			// Loadingtxt
			// 
			this->Loadingtxt->BackColor = System::Drawing::Color::Wheat;
			this->Loadingtxt->Enabled = false;
			this->Loadingtxt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 42, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Loadingtxt->ForeColor = System::Drawing::Color::Brown;
			this->Loadingtxt->Location = System::Drawing::Point(118, 162);
			this->Loadingtxt->Margin = System::Windows::Forms::Padding(0);
			this->Loadingtxt->Multiline = true;
			this->Loadingtxt->Name = L"Loadingtxt";
			this->Loadingtxt->Size = System::Drawing::Size(337, 77);
			this->Loadingtxt->TabIndex = 10;
			this->Loadingtxt->Text = L"Loading..";
			this->Loadingtxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Loadingtxt->UseWaitCursor = true;
			this->Loadingtxt->Visible = false;
			// 
			// Taskdoneupdbox
			// 
			this->Taskdoneupdbox->BackColor = System::Drawing::Color::Wheat;
			this->Taskdoneupdbox->Enabled = false;
			this->Taskdoneupdbox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 42, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Taskdoneupdbox->ForeColor = System::Drawing::Color::Brown;
			this->Taskdoneupdbox->Location = System::Drawing::Point(145, 202);
			this->Taskdoneupdbox->Margin = System::Windows::Forms::Padding(0);
			this->Taskdoneupdbox->Multiline = true;
			this->Taskdoneupdbox->Name = L"Taskdoneupdbox";
			this->Taskdoneupdbox->Size = System::Drawing::Size(337, 77);
			this->Taskdoneupdbox->TabIndex = 9;
			this->Taskdoneupdbox->Text = L"Task Done";
			this->Taskdoneupdbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Taskdoneupdbox->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Teal;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::AliceBlue;
			this->label8->Location = System::Drawing::Point(258, 89);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(136, 19);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Enter new meaning";
			// 
			// newmeaningtxt
			// 
			this->newmeaningtxt->Location = System::Drawing::Point(403, 87);
			this->newmeaningtxt->Name = L"newmeaningtxt";
			this->newmeaningtxt->Size = System::Drawing::Size(133, 22);
			this->newmeaningtxt->TabIndex = 2;
			// 
			// Backupdbtn
			// 
			this->Backupdbtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Backupdbtn->Location = System::Drawing::Point(12, 314);
			this->Backupdbtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Backupdbtn->Name = L"Backupdbtn";
			this->Backupdbtn->Size = System::Drawing::Size(92, 27);
			this->Backupdbtn->TabIndex = 10;
			this->Backupdbtn->Text = L"<== BACK";
			this->Backupdbtn->UseVisualStyleBackColor = true;
			this->Backupdbtn->Click += gcnew System::EventHandler(this, &MyForm::Backupdbtn_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Teal;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::AliceBlue;
			this->label5->Location = System::Drawing::Point(258, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 19);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Enter old meaning";
			// 
			// Updmeantxt
			// 
			this->Updmeantxt->Location = System::Drawing::Point(400, 51);
			this->Updmeantxt->Name = L"Updmeantxt";
			this->Updmeantxt->Size = System::Drawing::Size(133, 22);
			this->Updmeantxt->TabIndex = 1;
			// 
			// Updwordbtn
			// 
			this->Updwordbtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Updwordbtn->Location = System::Drawing::Point(231, 119);
			this->Updwordbtn->Name = L"Updwordbtn";
			this->Updwordbtn->Size = System::Drawing::Size(113, 40);
			this->Updwordbtn->TabIndex = 8;
			this->Updwordbtn->Text = L"Update word";
			this->Updwordbtn->UseVisualStyleBackColor = true;
			this->Updwordbtn->Click += gcnew System::EventHandler(this, &MyForm::Updwordbtn_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Teal;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::AliceBlue;
			this->label6->Location = System::Drawing::Point(20, 53);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 19);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Enter word";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Updwordtxt
			// 
			this->Updwordtxt->Location = System::Drawing::Point(113, 51);
			this->Updwordtxt->Name = L"Updwordtxt";
			this->Updwordtxt->Size = System::Drawing::Size(133, 22);
			this->Updwordtxt->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->AutoSize = true;
			this->groupBox2->Controls->Add(this->BackAddbtn);
			this->groupBox2->Controls->Add(this->Meanlbl);
			this->groupBox2->Controls->Add(this->Addmeantxt);
			this->groupBox2->Controls->Add(this->addwordbtn);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->Addwordtxt);
			this->groupBox2->Enabled = false;
			this->groupBox2->Location = System::Drawing::Point(19, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(620, 372);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Add Page";
			this->groupBox2->Visible = false;
			// 
			// BackAddbtn
			// 
			this->BackAddbtn->Location = System::Drawing::Point(2, 324);
			this->BackAddbtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->BackAddbtn->Name = L"BackAddbtn";
			this->BackAddbtn->Size = System::Drawing::Size(92, 27);
			this->BackAddbtn->TabIndex = 7;
			this->BackAddbtn->Text = L"<== BACK";
			this->BackAddbtn->UseVisualStyleBackColor = true;
			this->BackAddbtn->Click += gcnew System::EventHandler(this, &MyForm::BackAddbtn_Click);
			// 
			// Meanlbl
			// 
			this->Meanlbl->AutoSize = true;
			this->Meanlbl->BackColor = System::Drawing::Color::Teal;
			this->Meanlbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Meanlbl->ForeColor = System::Drawing::Color::AliceBlue;
			this->Meanlbl->Location = System::Drawing::Point(287, 60);
			this->Meanlbl->Name = L"Meanlbl";
			this->Meanlbl->Size = System::Drawing::Size(106, 19);
			this->Meanlbl->TabIndex = 4;
			this->Meanlbl->Text = L"Enter meaning";
			// 
			// Addmeantxt
			// 
			this->Addmeantxt->Location = System::Drawing::Point(398, 58);
			this->Addmeantxt->Name = L"Addmeantxt";
			this->Addmeantxt->Size = System::Drawing::Size(133, 22);
			this->Addmeantxt->TabIndex = 1;
			// 
			// addwordbtn
			// 
			this->addwordbtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addwordbtn->Location = System::Drawing::Point(210, 110);
			this->addwordbtn->Name = L"addwordbtn";
			this->addwordbtn->Size = System::Drawing::Size(113, 40);
			this->addwordbtn->TabIndex = 2;
			this->addwordbtn->Text = L"Add a word";
			this->addwordbtn->UseVisualStyleBackColor = true;
			this->addwordbtn->Click += gcnew System::EventHandler(this, &MyForm::addwordbtn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Teal;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::AliceBlue;
			this->label2->Location = System::Drawing::Point(4, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter word";
			// 
			// Addwordtxt
			// 
			this->Addwordtxt->Location = System::Drawing::Point(92, 58);
			this->Addwordtxt->Name = L"Addwordtxt";
			this->Addwordtxt->Size = System::Drawing::Size(133, 22);
			this->Addwordtxt->TabIndex = 0;
			// 
			// SearchBox
			// 
			this->SearchBox->BackColor = System::Drawing::Color::Wheat;
			this->SearchBox->Controls->Add(this->Suggestedtxt);
			this->SearchBox->Controls->Add(this->label9);
			this->SearchBox->Controls->Add(this->label7);
			this->SearchBox->Controls->Add(this->searchBackBtn);
			this->SearchBox->Controls->Add(this->label1);
			this->SearchBox->Controls->Add(this->dissearch);
			this->SearchBox->Controls->Add(this->searchWBtn);
			this->SearchBox->Controls->Add(this->searchTxt);
			this->SearchBox->Location = System::Drawing::Point(19, 19);
			this->SearchBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->SearchBox->Name = L"SearchBox";
			this->SearchBox->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->SearchBox->Size = System::Drawing::Size(620, 350);
			this->SearchBox->TabIndex = 6;
			this->SearchBox->TabStop = false;
			this->SearchBox->Text = L"SearchBox";
			this->SearchBox->Visible = false;
			// 
			// Suggestedtxt
			// 
			this->Suggestedtxt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Suggestedtxt->Location = System::Drawing::Point(11, 163);
			this->Suggestedtxt->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Suggestedtxt->Multiline = true;
			this->Suggestedtxt->Name = L"Suggestedtxt";
			this->Suggestedtxt->ReadOnly = true;
			this->Suggestedtxt->Size = System::Drawing::Size(221, 22);
			this->Suggestedtxt->TabIndex = 11;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(10, 127);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(152, 22);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Suggested Words";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Teal;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::AliceBlue;
			this->label7->Location = System::Drawing::Point(7, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 19);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Enter word";
			// 
			// searchBackBtn
			// 
			this->searchBackBtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchBackBtn->Location = System::Drawing::Point(14, 320);
			this->searchBackBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->searchBackBtn->Name = L"searchBackBtn";
			this->searchBackBtn->Size = System::Drawing::Size(92, 27);
			this->searchBackBtn->TabIndex = 5;
			this->searchBackBtn->Text = L"<== BACK";
			this->searchBackBtn->UseVisualStyleBackColor = true;
			this->searchBackBtn->Click += gcnew System::EventHandler(this, &MyForm::searchBackBtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(321, 25);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Defination(s)";
			// 
			// dissearch
			// 
			this->dissearch->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dissearch->Location = System::Drawing::Point(326, 54);
			this->dissearch->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dissearch->Multiline = true;
			this->dissearch->Name = L"dissearch";
			this->dissearch->ReadOnly = true;
			this->dissearch->Size = System::Drawing::Size(221, 22);
			this->dissearch->TabIndex = 3;
			// 
			// searchWBtn
			// 
			this->searchWBtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchWBtn->Location = System::Drawing::Point(10, 93);
			this->searchWBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->searchWBtn->Name = L"searchWBtn";
			this->searchWBtn->Size = System::Drawing::Size(107, 27);
			this->searchWBtn->TabIndex = 2;
			this->searchWBtn->Text = L"Search Word";
			this->searchWBtn->UseVisualStyleBackColor = true;
			this->searchWBtn->Click += gcnew System::EventHandler(this, &MyForm::searchWBtn_Click_1);
			// 
			// searchTxt
			// 
			this->searchTxt->Location = System::Drawing::Point(95, 56);
			this->searchTxt->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->searchTxt->Name = L"searchTxt";
			this->searchTxt->Size = System::Drawing::Size(165, 22);
			this->searchTxt->TabIndex = 0;
			// 
			// startBtn
			// 
			this->startBtn->BackColor = System::Drawing::Color::Tan;
			this->startBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->startBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->startBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startBtn->ForeColor = System::Drawing::Color::Maroon;
			this->startBtn->Location = System::Drawing::Point(250, 157);
			this->startBtn->Margin = System::Windows::Forms::Padding(0);
			this->startBtn->Name = L"startBtn";
			this->startBtn->Size = System::Drawing::Size(147, 57);
			this->startBtn->TabIndex = 0;
			this->startBtn->Text = L"Start";
			this->startBtn->UseVisualStyleBackColor = false;
			this->startBtn->Click += gcnew System::EventHandler(this, &MyForm::startBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 402);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dictionary";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->DelPage->ResumeLayout(false);
			this->DelPage->PerformLayout();
			this->Updpage->ResumeLayout(false);
			this->Updpage->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->SearchBox->ResumeLayout(false);
			this->SearchBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		//Enabled = false;

	}

	private: System::Void startBtn_Click(System::Object^ sender, System::EventArgs^ e) {


		startBtn->Enabled = false;
		startBtn->Visible = false;
		startBtn->UseWaitCursor = true;
		dictionary.loadDictionary();

		enableMenuButtons();
	}
	private: System::Void searchBackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		SearchBox->Enabled = false;
		SearchBox->Visible = false;
		enableMenuButtons();
		Suggestedtxt->Text = "";
		dissearch->Text = "";
		searchTxt->Text = "";
	}
	private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		disableMenuButtons();
		SearchBox->Visible = true;
		SearchBox->Enabled = true;
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AddBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		disableMenuButtons();
		groupBox2->Enabled = true;
		groupBox2->Visible = true;



	}
	private: System::Void BackAddbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		enableMenuButtons();
		groupBox2->Enabled = false;
		groupBox2->Visible = false;
		Addwordtxt->Text = "";
		Addmeantxt->Text = "";
	}

	private: System::Void Deletebackbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		enableMenuButtons();
		DelPage->Enabled = false;
		DelPage->Visible = false;

		delwordtxt->Text = "";
		delmeantxt->Text = "";

	}
	private: System::Void DelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		disableMenuButtons();
		DelPage->Enabled = true;
		DelPage->Visible = true;
	}

	private: System::Void Backupdbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		enableMenuButtons();
		Updpage->Enabled = false;
		Updpage->Visible = false;
		Updwordtxt->Text = "";
		Updmeantxt->Text = "";
		newmeaningtxt->Text = "";
	}
	private: System::Void UpdBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		disableMenuButtons();
		Updpage->Enabled = true;
		Updpage->Visible = true;
	}
	private: System::Void searchWBtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
		dissearch->Size.Width = 190;
		String^ temp = searchTxt->Text;
		string str7;
		for (int i = 0; i < temp->Length; i++) {
			str7 += temp[i];
		}
		dissearch->Text = "";
		AVL_Node word = dictionary.getWord(str7);
		if (word.word != "") {
			dissearch->Height = 20 * (word.definations->getTotalDefinations() + 1);
			for (int i = 0; i < word.definations->getTotalDefinations(); i++) {
				dissearch->Text += gcnew String(word.definations->getDefination(i).c_str());
				dissearch->Text += "\r\n";
			}
		}
		else {
			dissearch->Text += "Word not found \r\n";
		}

		string* str = suggestions.getSuggestions();
		Suggestedtxt->Text = "";
		Suggestedtxt->Height = 20 * 7;
		for (int i = 0; i < 10; i++) {
			Suggestedtxt->Text += gcnew String(str[i].c_str());
			Suggestedtxt->Text += "\r\n";
		}

	}

	private: System::Void Delwordbtn_Click(System::Object^ sender, System::EventArgs^ e) {

		if (delwordtxt->Text != "" && delmeantxt->Text != "") {
			String^ temp = delwordtxt->Text;
			string str7, str6;
			for (int i = 0; i < temp->Length; i++) {
				str7 += temp[i];	//word
			}
			String^ temp1 = delmeantxt->Text;
			for (int i = 0; i < temp1->Length; i++) {
				str6 += temp1[i];	//defination
			}

			AVL_Node word = dictionary.getWord(str7);

			if (word.word == "") {
				Taskdonebox->Text = "Word Not Found!";

				Taskdonebox->Enabled = true;
				Taskdonebox->Visible = true;
			}
			else {
				dictionary.deleteWordDefination(str7, str6);

				Taskdonebox->Text = "Word's Defination Deleted.";

				Taskdonebox->Enabled = true;
				Taskdonebox->Visible = true;
			}

		}
		else if (delwordtxt->Text != "" && delmeantxt->Text == "") {
			String^ temp = delwordtxt->Text;
			string str7, str6;

			for (int i = 0; i < temp->Length; i++) {
				str7 += temp[i];
			}

			AVL_Node word = dictionary.getWord(str7);

			if (word.word == "") {
				Taskdonebox->Text = "Word Not Found!";

				Taskdonebox->Enabled = true;
				Taskdonebox->Visible = true;
			}
			else {
				Taskdonebox->Text = "Word Deleted.";

				Taskdonebox->Enabled = true;
				Taskdonebox->Visible = true;
			}

		}
		else {
			Taskdonebox->Text = "Enter a Word/Defination.";

			Taskdonebox->Enabled = true;
			Taskdonebox->Visible = true;
		}
	}
	private: System::Void addwordbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Addwordtxt->Text != "" && Addmeantxt->Text != "") {
			String^ temp = Addwordtxt->Text;
			string str7, str6;
			for (int i = 0; i < temp->Length; i++) {
				str7 += temp[i];
			}
			String^ temp1 = Addmeantxt->Text;
			for (int i = 0; i < temp1->Length; i++) {
				str6 += temp1[i];
			}
			dictionary.InsertToDictionary(str7, str6);
			Taskdoneadd->Enabled = true;
			Taskdoneadd->Visible = true;
		}
	}

	private: System::Void Updwordbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Updwordtxt->Text != "" && Updmeantxt->Text != "" && newmeaningtxt->Text != "") {
			String^ temp = Updwordtxt->Text;
			string str7, str6, str5;
			for (int i = 0; i < temp->Length; i++) {
				str7 += temp[i];
			}
			String^ temp1 = newmeaningtxt->Text;
			for (int i = 0; i < temp1->Length; i++) {
				str6 += temp1[i];
			}
			String^ temp2 = Updmeantxt->Text;
			for (int i = 0; i < temp2->Length; i++) {
				str5 += temp2[i];
			}
			//not updating
			dictionary.changeWordDefination(str7, str5, str6);
			Taskdoneupdbox->Text = "Task Done";

			Taskdoneupdbox->Enabled = true;
			Taskdoneupdbox->Visible = true;
		}
		else {
			Taskdoneupdbox->Text = "Task Failed";

			Taskdoneupdbox->Enabled = true;
			Taskdoneupdbox->Visible = true;
		}
	}
	private: System::Void Endprogrambtn_Click(System::Object^ sender, System::EventArgs^ e) {
		dictionary.saveDictionary();
		this->Close();
	}
	};
}
