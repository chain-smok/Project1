#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ age;
	private: System::Windows::Forms::TextBox^ textBoxAge;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxSalary;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::Button^ button1;


	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->age = (gcnew System::Windows::Forms::Label());
			this->textBoxAge = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxSalary = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(134, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"徵婚程式";
			// 
			// age
			// 
			this->age->AutoSize = true;
			this->age->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->age->Location = System::Drawing::Point(36, 185);
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(58, 24);
			this->age->TabIndex = 1;
			this->age->Text = L"年齡";
			// 
			// textBoxAge
			// 
			this->textBoxAge->Location = System::Drawing::Point(127, 180);
			this->textBoxAge->Name = L"textBoxAge";
			this->textBoxAge->Size = System::Drawing::Size(188, 29);
			this->textBoxAge->TabIndex = 2;
			this->textBoxAge->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxAge_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label2->Location = System::Drawing::Point(36, 272);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"薪水";
			// 
			// textBoxSalary
			// 
			this->textBoxSalary->Location = System::Drawing::Point(123, 267);
			this->textBoxSalary->Name = L"textBoxSalary";
			this->textBoxSalary->Size = System::Drawing::Size(188, 29);
			this->textBoxSalary->TabIndex = 4;
			this->textBoxSalary->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxSalary_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label3->Location = System::Drawing::Point(36, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"教育";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(127, 230);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(184, 22);
			this->listBox1->TabIndex = 6;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->radioButton2->Location = System::Drawing::Point(342, 176);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(59, 28);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"男";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->radioButton1->Location = System::Drawing::Point(342, 129);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(59, 28);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"女";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label4->Location = System::Drawing::Point(36, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 24);
			this->label4->TabIndex = 10;
			this->label4->Text = L"姓名";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(127, 133);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(188, 29);
			this->textBoxName->TabIndex = 11;
			this->textBoxName->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxName_TextChanged);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(167, 334);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 56);
			this->button1->TabIndex = 12;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(475, 420);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxSalary);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxAge);
			this->Controls->Add(this->age);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBoxName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int^ sex = 0;
}
private: System::Void textBoxAge_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int^ sex = 1;
}
private: System::Void textBoxSalary_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int sex = 2;
	int age = 0;
	if (radioButton2->Checked)
		sex == 1;
	if (radioButton1->Checked)
		sex = 0;
	if (textBoxAge->Text == "")age = 0;
	else
		age = System::Convert::ToInt32(textBoxAge->Text);
	int salary = System::Convert::ToInt32(textBoxAge->Text);
	if (sex == 0 || age <= 16 && age <= 26 && salary >= 12000) {
		String^ msg = "Welcome, " + textBoxName->Text;
		MessageBox::Show(msg);
	}
	else
		MessageBox::Show("Sorry ");
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
