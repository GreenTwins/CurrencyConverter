#pragma once

namespace CurrCon {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;

	/// <summary>
	/// Summary for Currency
	/// </summary>
	public ref class Currency : public System::Windows::Forms::Form
	{
	public:
		Currency(void)
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
		~Currency()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ CurrencyContainer;
	private: System::Windows::Forms::Label^ AppTitle;
	private: System::Windows::Forms::TextBox^ AmountConverted;
	private: System::Windows::Forms::TextBox^ ToConvert_amount;
	private: System::Windows::Forms::ComboBox^ ConvertTo_cb;

	private: System::Windows::Forms::ComboBox^ ConvertFrom_cb;

	private: System::Windows::Forms::Label^ ConvertTo_Amount;
	private: System::Windows::Forms::Label^ ConvertFrom_Amountlbl;
	private: System::Windows::Forms::Label^ ConvertToLabel;
	private: System::Windows::Forms::Label^ ConvertFromLabel;
	private: System::Windows::Forms::Button^ Convertbtn;

	protected:


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
			this->CurrencyContainer = (gcnew System::Windows::Forms::Panel());
			this->Convertbtn = (gcnew System::Windows::Forms::Button());
			this->AmountConverted = (gcnew System::Windows::Forms::TextBox());
			this->ToConvert_amount = (gcnew System::Windows::Forms::TextBox());
			this->ConvertTo_cb = (gcnew System::Windows::Forms::ComboBox());
			this->ConvertFrom_cb = (gcnew System::Windows::Forms::ComboBox());
			this->ConvertTo_Amount = (gcnew System::Windows::Forms::Label());
			this->ConvertFrom_Amountlbl = (gcnew System::Windows::Forms::Label());
			this->ConvertToLabel = (gcnew System::Windows::Forms::Label());
			this->ConvertFromLabel = (gcnew System::Windows::Forms::Label());
			this->AppTitle = (gcnew System::Windows::Forms::Label());
			this->CurrencyContainer->SuspendLayout();
			this->SuspendLayout();
			// 
			// CurrencyContainer
			// 
			this->CurrencyContainer->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CurrencyContainer->Controls->Add(this->Convertbtn);
			this->CurrencyContainer->Controls->Add(this->AmountConverted);
			this->CurrencyContainer->Controls->Add(this->ToConvert_amount);
			this->CurrencyContainer->Controls->Add(this->ConvertTo_cb);
			this->CurrencyContainer->Controls->Add(this->ConvertFrom_cb);
			this->CurrencyContainer->Controls->Add(this->ConvertTo_Amount);
			this->CurrencyContainer->Controls->Add(this->ConvertFrom_Amountlbl);
			this->CurrencyContainer->Controls->Add(this->ConvertToLabel);
			this->CurrencyContainer->Controls->Add(this->ConvertFromLabel);
			this->CurrencyContainer->Location = System::Drawing::Point(12, 36);
			this->CurrencyContainer->Name = L"CurrencyContainer";
			this->CurrencyContainer->Size = System::Drawing::Size(261, 182);
			this->CurrencyContainer->TabIndex = 0;
			// 
			// Convertbtn
			// 
			this->Convertbtn->Location = System::Drawing::Point(87, 147);
			this->Convertbtn->Name = L"Convertbtn";
			this->Convertbtn->Size = System::Drawing::Size(82, 30);
			this->Convertbtn->TabIndex = 9;
			this->Convertbtn->Text = L"Convert";
			this->Convertbtn->UseVisualStyleBackColor = true;
			this->Convertbtn->Click += gcnew System::EventHandler(this, &Currency::Convertbtn_Click);
			// 
			// AmountConverted
			// 
			this->AmountConverted->Location = System::Drawing::Point(112, 108);
			this->AmountConverted->Name = L"AmountConverted";
			this->AmountConverted->Size = System::Drawing::Size(121, 20);
			this->AmountConverted->TabIndex = 8;
			// 
			// ToConvert_amount
			// 
			this->ToConvert_amount->Location = System::Drawing::Point(112, 37);
			this->ToConvert_amount->Name = L"ToConvert_amount";
			this->ToConvert_amount->Size = System::Drawing::Size(121, 20);
			this->ToConvert_amount->TabIndex = 7;
			// 
			// ConvertTo_cb
			// 
			this->ConvertTo_cb->FormattingEnabled = true;
			this->ConvertTo_cb->Items->AddRange(gcnew cli::array< System::Object^  >(63) {
				L"US Dollar", L"Euro", L"British Pound", L"Indian Rupee\t",
					L"Australian Dollar\t", L"Canadian Dollar\t", L"Singapore Dollar\t", L"Swiss Franc\t", L"Malaysian Ringgit\t", L"Japanese Yen\t",
					L"Chinese Yuan Renminbi", L"Australian Dollar\t", L"Argentine Peso\t\t", L"Bahraini Dinar\t\t", L"Botswana Pula\t\t", L"Brazilian Real\t\t",
					L"British Pound\t\t", L"Bruneian Dollar\t\t", L"Bulgarian Lev\t\t", L"Canadian Dollar\t\t", L"Chilean Peso\t\t", L"Chinese Yuan Renminbi\t",
					L"Colombian Peso\t\t", L"Czech Koruna\t\t", L"Danish Krone\t\t", L"Emirati Dirham\t\t", L"Euro\t0.918832\t", L"Hong Kong Dollar\t",
					L"Icelandic Krona\t\t", L"Hungarian Forint\t", L"Indian Rupee\t\t", L"Indonesian Rupiah\t", L"Iranian Rial\t\t", L"Israeli Shekel\t\t",
					L"Japanese Yen\t\t", L"Kazakhstani Tenge\t", L"Kuwaiti Dinar\t\t", L"Libyan Dinar\t\t", L"Malaysian Ringgit\t", L"Mauritian Rupee\t\t",
					L"Mexican Peso\t\t", L"Nepalese Rupee\t\t", L"New Zealand Dollar\t", L"Norwegian Krone\t\t", L"Omani Rial\t\t \t", L"Pakistani Rupee\t\t",
					L"Philippine Peso\t\t", L"Polish Zloty\t\t", L"Qatari Riyal\t\t", L"Romanian New Leu\t", L"Russian Ruble\t\t", L"Saudi Arabian Riyal\t",
					L"Singapore Dollar\t", L"South African Rand\t", L"South Korean Won\t", L"Sri Lankan Rupee\t", L"Swedish Krona\t\t", L"Swiss Franc\t\t\t",
					L"Taiwan New Dollar\t", L"Thai Baht\t\t\t", L"Trinidadian Dollar\t", L"Turkish Lira\t\t", L"Venezuelan Bolivar\t"
			});
			this->ConvertTo_cb->Location = System::Drawing::Point(112, 73);
			this->ConvertTo_cb->Name = L"ConvertTo_cb";
			this->ConvertTo_cb->Size = System::Drawing::Size(121, 21);
			this->ConvertTo_cb->TabIndex = 6;
			// 
			// ConvertFrom_cb
			// 
			this->ConvertFrom_cb->FormattingEnabled = true;
			this->ConvertFrom_cb->Items->AddRange(gcnew cli::array< System::Object^  >(63) {
				L"US Dollar", L"Euro", L"British Pound", L"Indian Rupee\t",
					L"Australian Dollar\t", L"Canadian Dollar\t", L"Singapore Dollar\t", L"Swiss Franc\t", L"Malaysian Ringgit\t", L"Japanese Yen\t",
					L"Chinese Yuan Renminbi", L"Australian Dollar\t", L"Argentine Peso\t\t", L"Bahraini Dinar\t\t", L"Botswana Pula\t\t", L"Brazilian Real\t\t",
					L"British Pound\t\t", L"Bruneian Dollar\t\t", L"Bulgarian Lev\t\t", L"Canadian Dollar\t\t", L"Chilean Peso\t\t", L"Chinese Yuan Renminbi\t",
					L"Colombian Peso\t\t", L"Czech Koruna\t\t", L"Danish Krone\t\t", L"Emirati Dirham\t\t", L"Euro\t0.918832\t", L"Hong Kong Dollar\t",
					L"Icelandic Krona\t\t", L"Hungarian Forint\t", L"Indian Rupee\t\t", L"Indonesian Rupiah\t", L"Iranian Rial\t\t", L"Israeli Shekel\t\t",
					L"Japanese Yen\t\t", L"Kazakhstani Tenge\t", L"Kuwaiti Dinar\t\t", L"Libyan Dinar\t\t", L"Malaysian Ringgit\t", L"Mauritian Rupee\t\t",
					L"Mexican Peso\t\t", L"Nepalese Rupee\t\t", L"New Zealand Dollar\t", L"Norwegian Krone\t\t", L"Omani Rial\t\t \t", L"Pakistani Rupee\t\t",
					L"Philippine Peso\t\t", L"Polish Zloty\t\t", L"Qatari Riyal\t\t", L"Romanian New Leu\t", L"Russian Ruble\t\t", L"Saudi Arabian Riyal\t",
					L"Singapore Dollar\t", L"South African Rand\t", L"South Korean Won\t", L"Sri Lankan Rupee\t", L"Swedish Krona\t\t", L"Swiss Franc\t\t\t",
					L"Taiwan New Dollar\t", L"Thai Baht\t\t\t", L"Trinidadian Dollar\t", L"Turkish Lira\t\t", L"Venezuelan Bolivar\t"
			});
			this->ConvertFrom_cb->Location = System::Drawing::Point(112, 6);
			this->ConvertFrom_cb->Name = L"ConvertFrom_cb";
			this->ConvertFrom_cb->Size = System::Drawing::Size(121, 21);
			this->ConvertFrom_cb->TabIndex = 5;
			// 
			// ConvertTo_Amount
			// 
			this->ConvertTo_Amount->AutoSize = true;
			this->ConvertTo_Amount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConvertTo_Amount->Location = System::Drawing::Point(3, 108);
			this->ConvertTo_Amount->Name = L"ConvertTo_Amount";
			this->ConvertTo_Amount->Size = System::Drawing::Size(69, 20);
			this->ConvertTo_Amount->TabIndex = 4;
			this->ConvertTo_Amount->Text = L"Amount:";
			// 
			// ConvertFrom_Amountlbl
			// 
			this->ConvertFrom_Amountlbl->AutoSize = true;
			this->ConvertFrom_Amountlbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ConvertFrom_Amountlbl->Location = System::Drawing::Point(3, 37);
			this->ConvertFrom_Amountlbl->Name = L"ConvertFrom_Amountlbl";
			this->ConvertFrom_Amountlbl->Size = System::Drawing::Size(69, 20);
			this->ConvertFrom_Amountlbl->TabIndex = 3;
			this->ConvertFrom_Amountlbl->Text = L"Amount:";
			// 
			// ConvertToLabel
			// 
			this->ConvertToLabel->AutoSize = true;
			this->ConvertToLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConvertToLabel->Location = System::Drawing::Point(3, 74);
			this->ConvertToLabel->Name = L"ConvertToLabel";
			this->ConvertToLabel->Size = System::Drawing::Size(90, 20);
			this->ConvertToLabel->TabIndex = 2;
			this->ConvertToLabel->Text = L"Convert To:";
			// 
			// ConvertFromLabel
			// 
			this->ConvertFromLabel->AutoSize = true;
			this->ConvertFromLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConvertFromLabel->Location = System::Drawing::Point(3, 7);
			this->ConvertFromLabel->Name = L"ConvertFromLabel";
			this->ConvertFromLabel->Size = System::Drawing::Size(113, 20);
			this->ConvertFromLabel->TabIndex = 1;
			this->ConvertFromLabel->Text = L"Convert From: ";
			// 
			// AppTitle
			// 
			this->AppTitle->AutoSize = true;
			this->AppTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AppTitle->Location = System::Drawing::Point(45, 9);
			this->AppTitle->Name = L"AppTitle";
			this->AppTitle->Size = System::Drawing::Size(192, 24);
			this->AppTitle->TabIndex = 1;
			this->AppTitle->Text = L"Currency Converter";
			this->AppTitle->Click += gcnew System::EventHandler(this, &Currency::label1_Click);
			// 
			// Currency
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(285, 230);
			this->Controls->Add(this->AppTitle);
			this->Controls->Add(this->CurrencyContainer);
			this->Name = L"Currency";
			this->Text = L"Currency";
			this->CurrencyContainer->ResumeLayout(false);
			this->CurrencyContainer->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		/*
			The given data is read in compared to the USD_Standard dollar value($1.00)
			Ex: Euro is 0.97 of USD_Standard, meaning the Euro is worth more than a single USD following FX guidelines
			The data isnt pulled from managed databases so any updates to rates will need to be changed manually in the given file
			Anything commented out as 'MessageBox::Show' is left for testing purposes if data isnt transferred smoothly

			Author: Aaron Fogle
			Date Created: 5/17/2023
			
			Update History: N/A
		*/
		//Global variable for sending and recieving data from outside file
		String^ line;
		String^ searchedCurrencyF = " ";
		String^ searchedCurrencyT = " ";
		String^ fromWord; 
		String^ fromAmount; //place holder to be turned to double later
		String^ toWord;
		String^ toAmount; //palce holder to turn to double later

		//Converted double (int) variables to hold converted data from file
		double f_amount;
		double t_amount;

		//Variables used in the mathematical conversion from requested amount to FX amount
		double difference = 0.00;
		double total = 0.00;


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Convertbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		//The main component that gets the FX process started

		String^ ConvertFrom = ConvertFrom_cb->Text;
		//MessageBox::Show(ConvertFrom);
		String^ ConvertTo = ConvertTo_cb->Text;
		double amount_convert_from = Convert::ToDouble(ToConvert_amount->Text);
		load_data(ConvertFrom, ConvertTo);
		f_amount = Convert::ToDouble(fromAmount);
		t_amount = Convert::ToDouble(toAmount);
		/*MessageBox::Show("" + f_amount);
		MessageBox::Show("" + t_amount);*/
		/*
		MessageBox::Show("" + fromAmount);
		MessageBox::Show("" + toAmount);*/
		find_biggest(f_amount, t_amount);
		//MessageBox::Show(" "+difference);
		total = Convert::ToDouble(ToConvert_amount->Text);
		total *= difference;
		AmountConverted->Text = Convert::ToString(total);
		
		//Clears out data after initial request completed. This is required to allow for multiple useage
		ConvertFrom_cb->Text = " ";
		ConvertTo_cb->Text = " ";
		ToConvert_amount->Text = " ";
		searchedCurrencyF = " ";
		searchedCurrencyT = " ";
		fromWord = " ";
		fromAmount = " ";
		toWord = " ";
		toAmount = " ";
		f_amount = 0.00;
		t_amount = 0.00;
		difference = 0.00;
		total = 0.00;
	}

	void load_data(String^ from, String^ to) {
		//read data from currency file
		try {
			StreamReader^ sr = gcnew StreamReader(Application::StartupPath+"\\CurrencyConversion.txt");
			while ((line = sr->ReadLine()) != nullptr) {
				if (line->Contains(from)) {
					searchedCurrencyF=line;
				}
				if (line->Contains(to)) {
					searchedCurrencyT = line;
				}
				
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed due to: "+e->Message);
		}
		//parse each line FROM file searching for requested FX and rate
		for (int i = 0; i < searchedCurrencyF->Length; i++) {
			if ((Char::IsDigit(searchedCurrencyF[i])||(searchedCurrencyF[i]=='.'))) {
				fromAmount += searchedCurrencyF[i];
			}
			if (Char::IsLetter(searchedCurrencyF[i])) {
				fromWord += searchedCurrencyF[i];
			}
		}

		for (int i = 0; i < searchedCurrencyT->Length; i++) {
			if ((Char::IsDigit(searchedCurrencyT[i]) || (searchedCurrencyT[i] == '.'))) {
				toAmount += searchedCurrencyT[i];
			}
			if (Char::IsLetter(searchedCurrencyT[i])) {
				toWord += searchedCurrencyT[i];
			}
		}
	}


	void find_biggest(const double fa, const double ta) {
		double smallest;
		double biggest;

		smallest =Math::Min(fa, ta);  //fa > ta ? fa : ta;
		biggest = Math::Max(fa, ta); // fa < ta ? fa : ta;
		// remember biggest means worth less
		if (biggest == fa) {
			difference =(Math::Round((smallest / biggest),3,MidpointRounding::ToEven));
		}
		else {
			difference =(Math::Round((biggest / smallest),3,MidpointRounding::ToEven));
		}
		
	}
};
}
