#pragma once

namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ display;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;


	private: System::Windows::Forms::Button^ buttonDivision;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	protected:

	protected:







	private: System::Windows::Forms::Button^ buttonMultiply;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;







	private: System::Windows::Forms::Button^ buttonRemains;





	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ buttonSign;


	private: System::Windows::Forms::Button^ buttonPoint;

	private: System::Windows::Forms::Button^ buttonSum;

	private: System::Windows::Forms::Button^ buttonClearEntry;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Button^ buttonResult;







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
			this->display = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->buttonDivision = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->buttonRemains = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonSign = (gcnew System::Windows::Forms::Button());
			this->buttonPoint = (gcnew System::Windows::Forms::Button());
			this->buttonSum = (gcnew System::Windows::Forms::Button());
			this->buttonClearEntry = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonResult = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// display
			// 
			this->display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->display->Location = System::Drawing::Point(12, 12);
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(178, 31);
			this->display->TabIndex = 0;
			this->display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 112);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(40, 40);
			this->button7->TabIndex = 1;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainWindow::Button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(59, 112);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(40, 40);
			this->button8->TabIndex = 2;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainWindow::Button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(104, 112);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(40, 40);
			this->button9->TabIndex = 3;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainWindow::Button9_Click);
			// 
			// buttonDivision
			// 
			this->buttonDivision->Location = System::Drawing::Point(150, 112);
			this->buttonDivision->Name = L"buttonDivision";
			this->buttonDivision->Size = System::Drawing::Size(40, 40);
			this->buttonDivision->TabIndex = 4;
			this->buttonDivision->Text = L"/";
			this->buttonDivision->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 158);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 40);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainWindow::Button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(58, 158);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 40);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainWindow::Button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(104, 158);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(40, 40);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainWindow::Button6_Click);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->Location = System::Drawing::Point(150, 158);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(40, 40);
			this->buttonMultiply->TabIndex = 8;
			this->buttonMultiply->Text = L"*";
			this->buttonMultiply->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 204);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 40);
			this->button1->TabIndex = 9;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::Button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(58, 204);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 40);
			this->button2->TabIndex = 10;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::Button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(104, 205);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 40);
			this->button3->TabIndex = 11;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainWindow::Button3_Click);
			// 
			// buttonRemains
			// 
			this->buttonRemains->Location = System::Drawing::Point(150, 205);
			this->buttonRemains->Name = L"buttonRemains";
			this->buttonRemains->Size = System::Drawing::Size(40, 40);
			this->buttonRemains->TabIndex = 12;
			this->buttonRemains->Text = L"-";
			this->buttonRemains->UseVisualStyleBackColor = true;
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(12, 250);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(40, 40);
			this->button0->TabIndex = 13;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MainWindow::Button0_Click);
			// 
			// buttonSign
			// 
			this->buttonSign->Location = System::Drawing::Point(58, 250);
			this->buttonSign->Name = L"buttonSign";
			this->buttonSign->Size = System::Drawing::Size(40, 40);
			this->buttonSign->TabIndex = 14;
			this->buttonSign->Text = L"+/-";
			this->buttonSign->UseVisualStyleBackColor = true;
			// 
			// buttonPoint
			// 
			this->buttonPoint->Location = System::Drawing::Point(104, 251);
			this->buttonPoint->Name = L"buttonPoint";
			this->buttonPoint->Size = System::Drawing::Size(40, 40);
			this->buttonPoint->TabIndex = 15;
			this->buttonPoint->Text = L".";
			this->buttonPoint->UseVisualStyleBackColor = true;
			// 
			// buttonSum
			// 
			this->buttonSum->Location = System::Drawing::Point(150, 250);
			this->buttonSum->Name = L"buttonSum";
			this->buttonSum->Size = System::Drawing::Size(40, 40);
			this->buttonSum->TabIndex = 16;
			this->buttonSum->Text = L"+";
			this->buttonSum->UseVisualStyleBackColor = true;
			// 
			// buttonClearEntry
			// 
			this->buttonClearEntry->Location = System::Drawing::Point(12, 66);
			this->buttonClearEntry->Name = L"buttonClearEntry";
			this->buttonClearEntry->Size = System::Drawing::Size(40, 40);
			this->buttonClearEntry->TabIndex = 17;
			this->buttonClearEntry->Text = L"CE";
			this->buttonClearEntry->UseVisualStyleBackColor = true;
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(58, 66);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(40, 40);
			this->buttonClear->TabIndex = 18;
			this->buttonClear->Text = L"C";
			this->buttonClear->UseVisualStyleBackColor = true;
			// 
			// buttonResult
			// 
			this->buttonResult->Location = System::Drawing::Point(105, 66);
			this->buttonResult->Name = L"buttonResult";
			this->buttonResult->Size = System::Drawing::Size(85, 40);
			this->buttonResult->TabIndex = 19;
			this->buttonResult->Text = L"=";
			this->buttonResult->UseVisualStyleBackColor = true;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(200, 301);
			this->Controls->Add(this->buttonResult);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonClearEntry);
			this->Controls->Add(this->buttonSum);
			this->Controls->Add(this->buttonPoint);
			this->Controls->Add(this->buttonSign);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->buttonRemains);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonMultiply);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->buttonDivision);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->display);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion

		private: System::Void Button0_Click(System::Object^ sender, System::EventArgs^ e) {
			this->display->Text = this->display->Text + "0";
		}

		private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
			this->display->Text = this->display->Text + "1";
		}

		private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->display->Text = this->display->Text + "2";
		}

		private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
			this->display->Text = this->display->Text + "3";
		}

		private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
			this->display->Text = this->display->Text + "4";
		}

		private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
			this->display->Text = this->display->Text + "5";
		}

		private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
			this->display->Text = this->display->Text + "6";
		}

		private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
			this->display->Text = this->display->Text + "7";
		}

		private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e) {
			this->display->Text = this->display->Text + "8";
		}

		private: System::Void Button9_Click(System::Object^ sender, System::EventArgs^ e) {
			this->display->Text = this->display->Text + "9";
		}
	};
}
