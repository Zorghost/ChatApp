#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ Login;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ Register;
	private: System::Windows::Forms::Panel^ Main;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Login = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Register = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Main = (gcnew System::Windows::Forms::Panel());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->Login->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Register->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->Main->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(665, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(304, 501);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// Login
			// 
			this->Login->BackColor = System::Drawing::Color::White;
			this->Login->Controls->Add(this->Register);
			this->Login->Controls->Add(this->label7);
			this->Login->Controls->Add(this->label6);
			this->Login->Controls->Add(this->button1);
			this->Login->Controls->Add(this->textBox2);
			this->Login->Controls->Add(this->textBox1);
			this->Login->Controls->Add(this->label5);
			this->Login->Controls->Add(this->label4);
			this->Login->Controls->Add(this->label3);
			this->Login->Controls->Add(this->label2);
			this->Login->Controls->Add(this->label1);
			this->Login->Controls->Add(this->pictureBox1);
			this->Login->Location = System::Drawing::Point(0, -1);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(972, 501);
			this->Login->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(303, 501);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(443, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(422, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Welcome to ChatApp";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(409, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Please Login to get started";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(422, 375);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"No account \? ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(494, 375);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Register";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(412, 215);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(141, 20);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(412, 264);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(141, 20);
			this->textBox2->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(449, 314);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(409, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Username";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(409, 248);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Password";
			// 
			// Register
			// 
			this->Register->Controls->Add(this->Main);
			this->Register->Controls->Add(this->label12);
			this->Register->Controls->Add(this->label11);
			this->Register->Controls->Add(this->label10);
			this->Register->Controls->Add(this->label9);
			this->Register->Controls->Add(this->label8);
			this->Register->Controls->Add(this->button2);
			this->Register->Controls->Add(this->textBox5);
			this->Register->Controls->Add(this->textBox4);
			this->Register->Controls->Add(this->textBox3);
			this->Register->Controls->Add(this->pictureBox3);
			this->Register->Controls->Add(this->pictureBox2);
			this->Register->Location = System::Drawing::Point(0, 0);
			this->Register->Name = L"Register";
			this->Register->Size = System::Drawing::Size(972, 504);
			this->Register->TabIndex = 12;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(290, 501);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(412, 189);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(141, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(412, 238);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(141, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(412, 288);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(141, 20);
			this->textBox5->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(449, 343);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(412, 170);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Username";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(412, 221);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 13);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Password";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(412, 270);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(91, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Confirm Password";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label11->Location = System::Drawing::Point(419, 44);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(124, 31);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Register";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(385, 124);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(209, 18);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Enter the new aaccount details";
			// 
			// Main
			// 
			this->Main->BackColor = System::Drawing::Color::LightGray;
			this->Main->Controls->Add(this->button4);
			this->Main->Controls->Add(this->label14);
			this->Main->Controls->Add(this->label13);
			this->Main->Controls->Add(this->listBox3);
			this->Main->Controls->Add(this->button3);
			this->Main->Controls->Add(this->listBox2);
			this->Main->Controls->Add(this->listBox1);
			this->Main->Location = System::Drawing::Point(0, 0);
			this->Main->Name = L"Main";
			this->Main->Size = System::Drawing::Size(972, 504);
			this->Main->TabIndex = 11;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::White;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(309, 13);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(642, 381);
			this->listBox1->TabIndex = 0;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(481, 421);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(480, 69);
			this->listBox2->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(327, 421);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"send";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// listBox3
			// 
			this->listBox3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(12, 57);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(260, 433);
			this->listBox3->TabIndex = 3;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(12, 29);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(80, 18);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Welcome ,";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(99, 29);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 18);
			this->label14->TabIndex = 5;
			this->label14->Text = L"label14";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(327, 450);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"upload";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(973, 501);
			this->Controls->Add(this->Login);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->Login->ResumeLayout(false);
			this->Login->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Register->ResumeLayout(false);
			this->Register->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->Main->ResumeLayout(false);
			this->Main->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
