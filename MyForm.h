#pragma once
#include <vector>
using namespace std;
namespace SystemCalculator {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tabPage3;
	protected:
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::TextBox^ fiveFree5;
	private: System::Windows::Forms::TextBox^ fiveKof55;


	private: System::Windows::Forms::TextBox^ fiveKof51;
	private: System::Windows::Forms::TextBox^ fiveKof52;
	private: System::Windows::Forms::TextBox^ fiveKof54;



	private: System::Windows::Forms::TextBox^ fiveKof53;

	private: System::Windows::Forms::TextBox^ fiveFree4;

	private: System::Windows::Forms::TextBox^ fiveFree1;
	private: System::Windows::Forms::TextBox^ fiveFree3;


	private: System::Windows::Forms::TextBox^ fiveFree2;
	private: System::Windows::Forms::TextBox^ fiveKof45;


	private: System::Windows::Forms::TextBox^ fiveKof41;
	private: System::Windows::Forms::TextBox^ fiveKof42;
	private: System::Windows::Forms::TextBox^ fiveKof44;



	private: System::Windows::Forms::TextBox^ fiveKof43;

	private: System::Windows::Forms::TextBox^ fiveKof15;
	private: System::Windows::Forms::TextBox^ fiveKof35;


	private: System::Windows::Forms::TextBox^ fiveKof25;

	private: System::Windows::Forms::TextBox^ fiveKof12;
	private: System::Windows::Forms::TextBox^ fiveKof21;
	private: System::Windows::Forms::TextBox^ fiveKof22;
	private: System::Windows::Forms::TextBox^ fiveKof31;
	private: System::Windows::Forms::TextBox^ fiveKof32;





	private: System::Windows::Forms::TextBox^ fiveKof13;
	private: System::Windows::Forms::TextBox^ fiveKof14;
	private: System::Windows::Forms::TextBox^ fiveKof34;



	private: System::Windows::Forms::TextBox^ fiveKof24;
	private: System::Windows::Forms::TextBox^ fiveKof33;


	private: System::Windows::Forms::TextBox^ fiveKof23;

	private: System::Windows::Forms::TextBox^ fiveKof11;

	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Button^ fiveClear;
private: System::Windows::Forms::Button^ fiveFind;


	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::TextBox^ fourFree4;

	private: System::Windows::Forms::TextBox^ fourKof41;
	private: System::Windows::Forms::TextBox^ fourKof42;
	private: System::Windows::Forms::TextBox^ fourKof44;



	private: System::Windows::Forms::TextBox^ fourKof43;

	private: System::Windows::Forms::TextBox^ fourFree1;
	private: System::Windows::Forms::TextBox^ fourFree3;


	private: System::Windows::Forms::TextBox^ fourFree2;

	private: System::Windows::Forms::TextBox^ fourKof12;
	private: System::Windows::Forms::TextBox^ fourKof21;
	private: System::Windows::Forms::TextBox^ fourKof22;
	private: System::Windows::Forms::TextBox^ fourKof31;
	private: System::Windows::Forms::TextBox^ fourKof32;





	private: System::Windows::Forms::TextBox^ fourKof13;
	private: System::Windows::Forms::TextBox^ fourKof14;
private: System::Windows::Forms::TextBox^ fourKof34;



private: System::Windows::Forms::TextBox^ fourKof24;
private: System::Windows::Forms::TextBox^ fourKof33;


private: System::Windows::Forms::TextBox^ fourKof23;

private: System::Windows::Forms::TextBox^ fourKof11;


	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Button^ fourClear;
private: System::Windows::Forms::Button^ fourFind;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::Button^ threeClear;

private: System::Windows::Forms::Button^ threeFind;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ threeKof12;
	private: System::Windows::Forms::TextBox^ threeKof21;
	private: System::Windows::Forms::TextBox^ threeKof22;
	private: System::Windows::Forms::TextBox^ threeKof31;
	private: System::Windows::Forms::TextBox^ threeKof32;
	private: System::Windows::Forms::TextBox^ threeKof13;
	private: System::Windows::Forms::TextBox^ threeFree1;
	private: System::Windows::Forms::TextBox^ threeFree3;
	private: System::Windows::Forms::TextBox^ threeFree2;
	private: System::Windows::Forms::TextBox^ threeKof33;
	private: System::Windows::Forms::TextBox^ threeKof23;
	private: System::Windows::Forms::TextBox^ threeKof11;
	private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::TextBox^ fiveX4;
private: System::Windows::Forms::TextBox^ fiveX5;


private: System::Windows::Forms::TextBox^ fiveX2;
private: System::Windows::Forms::TextBox^ fiveX3;


private: System::Windows::Forms::TextBox^ fiveX1;

private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::TextBox^ fourX4;

private: System::Windows::Forms::TextBox^ fourX2;
private: System::Windows::Forms::TextBox^ fourX3;


private: System::Windows::Forms::TextBox^ fourX1;

private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::TextBox^ threeX2;
private: System::Windows::Forms::TextBox^ threeX3;


private: System::Windows::Forms::TextBox^ threeX1;


	protected:







































































































































































	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->fiveX4 = (gcnew System::Windows::Forms::TextBox());
			this->fiveX5 = (gcnew System::Windows::Forms::TextBox());
			this->fiveX2 = (gcnew System::Windows::Forms::TextBox());
			this->fiveX3 = (gcnew System::Windows::Forms::TextBox());
			this->fiveX1 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->fiveFree5 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof55 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof51 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof52 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof54 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof53 = (gcnew System::Windows::Forms::TextBox());
			this->fiveFree4 = (gcnew System::Windows::Forms::TextBox());
			this->fiveFree1 = (gcnew System::Windows::Forms::TextBox());
			this->fiveFree3 = (gcnew System::Windows::Forms::TextBox());
			this->fiveFree2 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof45 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof41 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof42 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof44 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof43 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof15 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof35 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof25 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof12 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof21 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof22 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof31 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof32 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof13 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof14 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof34 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof24 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof33 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof23 = (gcnew System::Windows::Forms::TextBox());
			this->fiveKof11 = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->fiveClear = (gcnew System::Windows::Forms::Button());
			this->fiveFind = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->fourX4 = (gcnew System::Windows::Forms::TextBox());
			this->fourX2 = (gcnew System::Windows::Forms::TextBox());
			this->fourX3 = (gcnew System::Windows::Forms::TextBox());
			this->fourX1 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->fourFree4 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof41 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof42 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof44 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof43 = (gcnew System::Windows::Forms::TextBox());
			this->fourFree1 = (gcnew System::Windows::Forms::TextBox());
			this->fourFree3 = (gcnew System::Windows::Forms::TextBox());
			this->fourFree2 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof12 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof21 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof22 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof31 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof32 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof13 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof14 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof34 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof24 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof33 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof23 = (gcnew System::Windows::Forms::TextBox());
			this->fourKof11 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->fourClear = (gcnew System::Windows::Forms::Button());
			this->fourFind = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->threeX2 = (gcnew System::Windows::Forms::TextBox());
			this->threeX3 = (gcnew System::Windows::Forms::TextBox());
			this->threeX1 = (gcnew System::Windows::Forms::TextBox());
			this->threeClear = (gcnew System::Windows::Forms::Button());
			this->threeFind = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->threeKof12 = (gcnew System::Windows::Forms::TextBox());
			this->threeKof21 = (gcnew System::Windows::Forms::TextBox());
			this->threeKof22 = (gcnew System::Windows::Forms::TextBox());
			this->threeKof31 = (gcnew System::Windows::Forms::TextBox());
			this->threeKof32 = (gcnew System::Windows::Forms::TextBox());
			this->threeKof13 = (gcnew System::Windows::Forms::TextBox());
			this->threeFree1 = (gcnew System::Windows::Forms::TextBox());
			this->threeFree3 = (gcnew System::Windows::Forms::TextBox());
			this->threeFree2 = (gcnew System::Windows::Forms::TextBox());
			this->threeKof33 = (gcnew System::Windows::Forms::TextBox());
			this->threeKof23 = (gcnew System::Windows::Forms::TextBox());
			this->threeKof11 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Silver;
			this->tabPage3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage3->Controls->Add(this->label55);
			this->tabPage3->Controls->Add(this->label54);
			this->tabPage3->Controls->Add(this->label53);
			this->tabPage3->Controls->Add(this->label52);
			this->tabPage3->Controls->Add(this->label51);
			this->tabPage3->Controls->Add(this->fiveX4);
			this->tabPage3->Controls->Add(this->fiveX5);
			this->tabPage3->Controls->Add(this->fiveX2);
			this->tabPage3->Controls->Add(this->fiveX3);
			this->tabPage3->Controls->Add(this->fiveX1);
			this->tabPage3->Controls->Add(this->label46);
			this->tabPage3->Controls->Add(this->fiveFree5);
			this->tabPage3->Controls->Add(this->fiveKof55);
			this->tabPage3->Controls->Add(this->fiveKof51);
			this->tabPage3->Controls->Add(this->fiveKof52);
			this->tabPage3->Controls->Add(this->fiveKof54);
			this->tabPage3->Controls->Add(this->fiveKof53);
			this->tabPage3->Controls->Add(this->fiveFree4);
			this->tabPage3->Controls->Add(this->fiveFree1);
			this->tabPage3->Controls->Add(this->fiveFree3);
			this->tabPage3->Controls->Add(this->fiveFree2);
			this->tabPage3->Controls->Add(this->fiveKof45);
			this->tabPage3->Controls->Add(this->fiveKof41);
			this->tabPage3->Controls->Add(this->fiveKof42);
			this->tabPage3->Controls->Add(this->fiveKof44);
			this->tabPage3->Controls->Add(this->fiveKof43);
			this->tabPage3->Controls->Add(this->fiveKof15);
			this->tabPage3->Controls->Add(this->fiveKof35);
			this->tabPage3->Controls->Add(this->fiveKof25);
			this->tabPage3->Controls->Add(this->fiveKof12);
			this->tabPage3->Controls->Add(this->fiveKof21);
			this->tabPage3->Controls->Add(this->fiveKof22);
			this->tabPage3->Controls->Add(this->fiveKof31);
			this->tabPage3->Controls->Add(this->fiveKof32);
			this->tabPage3->Controls->Add(this->fiveKof13);
			this->tabPage3->Controls->Add(this->fiveKof14);
			this->tabPage3->Controls->Add(this->fiveKof34);
			this->tabPage3->Controls->Add(this->fiveKof24);
			this->tabPage3->Controls->Add(this->fiveKof33);
			this->tabPage3->Controls->Add(this->fiveKof23);
			this->tabPage3->Controls->Add(this->fiveKof11);
			this->tabPage3->Controls->Add(this->label47);
			this->tabPage3->Controls->Add(this->label48);
			this->tabPage3->Controls->Add(this->label49);
			this->tabPage3->Controls->Add(this->label50);
			this->tabPage3->Controls->Add(this->label35);
			this->tabPage3->Controls->Add(this->label36);
			this->tabPage3->Controls->Add(this->label44);
			this->tabPage3->Controls->Add(this->label45);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->label25);
			this->tabPage3->Controls->Add(this->label26);
			this->tabPage3->Controls->Add(this->label27);
			this->tabPage3->Controls->Add(this->label28);
			this->tabPage3->Controls->Add(this->label29);
			this->tabPage3->Controls->Add(this->label30);
			this->tabPage3->Controls->Add(this->label31);
			this->tabPage3->Controls->Add(this->label32);
			this->tabPage3->Controls->Add(this->label33);
			this->tabPage3->Controls->Add(this->label34);
			this->tabPage3->Controls->Add(this->fiveClear);
			this->tabPage3->Controls->Add(this->fiveFind);
			this->tabPage3->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(752, 511);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Пять переменных";
			// 
			// label55
			// 
			this->label55->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(6, 340);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(27, 13);
			this->label55->TabIndex = 125;
			this->label55->Text = L"x4 =";
			// 
			// label54
			// 
			this->label54->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(6, 366);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(27, 13);
			this->label54->TabIndex = 124;
			this->label54->Text = L"x5 =";
			// 
			// label53
			// 
			this->label53->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(6, 314);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(27, 13);
			this->label53->TabIndex = 123;
			this->label53->Text = L"x3 =";
			// 
			// label52
			// 
			this->label52->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(6, 288);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(27, 13);
			this->label52->TabIndex = 122;
			this->label52->Text = L"x2 =";
			// 
			// label51
			// 
			this->label51->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(6, 262);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(27, 13);
			this->label51->TabIndex = 121;
			this->label51->Text = L"x1 =";
			// 
			// fiveX4
			// 
			this->fiveX4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fiveX4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveX4->Location = System::Drawing::Point(39, 333);
			this->fiveX4->Name = L"fiveX4";
			this->fiveX4->ReadOnly = true;
			this->fiveX4->Size = System::Drawing::Size(58, 20);
			this->fiveX4->TabIndex = 120;
			// 
			// fiveX5
			// 
			this->fiveX5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fiveX5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveX5->Location = System::Drawing::Point(39, 359);
			this->fiveX5->Name = L"fiveX5";
			this->fiveX5->ReadOnly = true;
			this->fiveX5->Size = System::Drawing::Size(58, 20);
			this->fiveX5->TabIndex = 119;
			// 
			// fiveX2
			// 
			this->fiveX2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fiveX2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveX2->Location = System::Drawing::Point(39, 281);
			this->fiveX2->Name = L"fiveX2";
			this->fiveX2->ReadOnly = true;
			this->fiveX2->Size = System::Drawing::Size(58, 20);
			this->fiveX2->TabIndex = 118;
			// 
			// fiveX3
			// 
			this->fiveX3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fiveX3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveX3->Location = System::Drawing::Point(39, 307);
			this->fiveX3->Name = L"fiveX3";
			this->fiveX3->ReadOnly = true;
			this->fiveX3->Size = System::Drawing::Size(58, 20);
			this->fiveX3->TabIndex = 117;
			// 
			// fiveX1
			// 
			this->fiveX1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fiveX1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveX1->Location = System::Drawing::Point(39, 255);
			this->fiveX1->Name = L"fiveX1";
			this->fiveX1->ReadOnly = true;
			this->fiveX1->Size = System::Drawing::Size(58, 20);
			this->fiveX1->TabIndex = 116;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Cursor = System::Windows::Forms::Cursors::Default;
			this->label46->Location = System::Drawing::Point(458, 117);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(27, 13);
			this->label46->TabIndex = 115;
			this->label46->Text = L"x5 =";
			// 
			// fiveFree5
			// 
			this->fiveFree5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveFree5->Location = System::Drawing::Point(491, 110);
			this->fiveFree5->Name = L"fiveFree5";
			this->fiveFree5->Size = System::Drawing::Size(58, 20);
			this->fiveFree5->TabIndex = 114;
			// 
			// fiveKof55
			// 
			this->fiveKof55->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof55->Location = System::Drawing::Point(394, 110);
			this->fiveKof55->Name = L"fiveKof55";
			this->fiveKof55->Size = System::Drawing::Size(58, 20);
			this->fiveKof55->TabIndex = 112;
			// 
			// fiveKof51
			// 
			this->fiveKof51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof51->Location = System::Drawing::Point(6, 110);
			this->fiveKof51->Name = L"fiveKof51";
			this->fiveKof51->Size = System::Drawing::Size(58, 20);
			this->fiveKof51->TabIndex = 108;
			// 
			// fiveKof52
			// 
			this->fiveKof52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof52->Location = System::Drawing::Point(103, 110);
			this->fiveKof52->Name = L"fiveKof52";
			this->fiveKof52->Size = System::Drawing::Size(58, 20);
			this->fiveKof52->TabIndex = 107;
			// 
			// fiveKof54
			// 
			this->fiveKof54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof54->Location = System::Drawing::Point(297, 110);
			this->fiveKof54->Name = L"fiveKof54";
			this->fiveKof54->Size = System::Drawing::Size(58, 20);
			this->fiveKof54->TabIndex = 106;
			// 
			// fiveKof53
			// 
			this->fiveKof53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof53->Location = System::Drawing::Point(200, 110);
			this->fiveKof53->Name = L"fiveKof53";
			this->fiveKof53->Size = System::Drawing::Size(58, 20);
			this->fiveKof53->TabIndex = 105;
			// 
			// fiveFree4
			// 
			this->fiveFree4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveFree4->Location = System::Drawing::Point(491, 84);
			this->fiveFree4->Name = L"fiveFree4";
			this->fiveFree4->Size = System::Drawing::Size(58, 20);
			this->fiveFree4->TabIndex = 103;
			// 
			// fiveFree1
			// 
			this->fiveFree1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveFree1->Location = System::Drawing::Point(491, 6);
			this->fiveFree1->Name = L"fiveFree1";
			this->fiveFree1->Size = System::Drawing::Size(58, 20);
			this->fiveFree1->TabIndex = 99;
			// 
			// fiveFree3
			// 
			this->fiveFree3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveFree3->Location = System::Drawing::Point(491, 58);
			this->fiveFree3->Name = L"fiveFree3";
			this->fiveFree3->Size = System::Drawing::Size(58, 20);
			this->fiveFree3->TabIndex = 98;
			// 
			// fiveFree2
			// 
			this->fiveFree2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveFree2->Location = System::Drawing::Point(491, 32);
			this->fiveFree2->Name = L"fiveFree2";
			this->fiveFree2->Size = System::Drawing::Size(58, 20);
			this->fiveFree2->TabIndex = 97;
			// 
			// fiveKof45
			// 
			this->fiveKof45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof45->Location = System::Drawing::Point(394, 84);
			this->fiveKof45->Name = L"fiveKof45";
			this->fiveKof45->Size = System::Drawing::Size(58, 20);
			this->fiveKof45->TabIndex = 95;
			// 
			// fiveKof41
			// 
			this->fiveKof41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof41->Location = System::Drawing::Point(6, 84);
			this->fiveKof41->Name = L"fiveKof41";
			this->fiveKof41->Size = System::Drawing::Size(58, 20);
			this->fiveKof41->TabIndex = 91;
			// 
			// fiveKof42
			// 
			this->fiveKof42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof42->Location = System::Drawing::Point(103, 84);
			this->fiveKof42->Name = L"fiveKof42";
			this->fiveKof42->Size = System::Drawing::Size(58, 20);
			this->fiveKof42->TabIndex = 90;
			// 
			// fiveKof44
			// 
			this->fiveKof44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof44->Location = System::Drawing::Point(297, 84);
			this->fiveKof44->Name = L"fiveKof44";
			this->fiveKof44->Size = System::Drawing::Size(58, 20);
			this->fiveKof44->TabIndex = 89;
			// 
			// fiveKof43
			// 
			this->fiveKof43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof43->Location = System::Drawing::Point(200, 84);
			this->fiveKof43->Name = L"fiveKof43";
			this->fiveKof43->Size = System::Drawing::Size(58, 20);
			this->fiveKof43->TabIndex = 88;
			// 
			// fiveKof15
			// 
			this->fiveKof15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof15->Location = System::Drawing::Point(394, 6);
			this->fiveKof15->Name = L"fiveKof15";
			this->fiveKof15->Size = System::Drawing::Size(58, 20);
			this->fiveKof15->TabIndex = 84;
			// 
			// fiveKof35
			// 
			this->fiveKof35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof35->Location = System::Drawing::Point(394, 58);
			this->fiveKof35->Name = L"fiveKof35";
			this->fiveKof35->Size = System::Drawing::Size(58, 20);
			this->fiveKof35->TabIndex = 83;
			// 
			// fiveKof25
			// 
			this->fiveKof25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof25->Location = System::Drawing::Point(394, 32);
			this->fiveKof25->Name = L"fiveKof25";
			this->fiveKof25->Size = System::Drawing::Size(58, 20);
			this->fiveKof25->TabIndex = 82;
			// 
			// fiveKof12
			// 
			this->fiveKof12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof12->Location = System::Drawing::Point(103, 6);
			this->fiveKof12->Name = L"fiveKof12";
			this->fiveKof12->Size = System::Drawing::Size(58, 20);
			this->fiveKof12->TabIndex = 72;
			// 
			// fiveKof21
			// 
			this->fiveKof21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof21->Location = System::Drawing::Point(6, 32);
			this->fiveKof21->Name = L"fiveKof21";
			this->fiveKof21->Size = System::Drawing::Size(58, 20);
			this->fiveKof21->TabIndex = 71;
			// 
			// fiveKof22
			// 
			this->fiveKof22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof22->Location = System::Drawing::Point(103, 32);
			this->fiveKof22->Name = L"fiveKof22";
			this->fiveKof22->Size = System::Drawing::Size(58, 20);
			this->fiveKof22->TabIndex = 70;
			// 
			// fiveKof31
			// 
			this->fiveKof31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof31->Location = System::Drawing::Point(6, 58);
			this->fiveKof31->Name = L"fiveKof31";
			this->fiveKof31->Size = System::Drawing::Size(58, 20);
			this->fiveKof31->TabIndex = 69;
			// 
			// fiveKof32
			// 
			this->fiveKof32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof32->Location = System::Drawing::Point(103, 58);
			this->fiveKof32->Name = L"fiveKof32";
			this->fiveKof32->Size = System::Drawing::Size(58, 20);
			this->fiveKof32->TabIndex = 68;
			// 
			// fiveKof13
			// 
			this->fiveKof13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof13->Location = System::Drawing::Point(200, 6);
			this->fiveKof13->Name = L"fiveKof13";
			this->fiveKof13->Size = System::Drawing::Size(58, 20);
			this->fiveKof13->TabIndex = 67;
			// 
			// fiveKof14
			// 
			this->fiveKof14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof14->Location = System::Drawing::Point(297, 6);
			this->fiveKof14->Name = L"fiveKof14";
			this->fiveKof14->Size = System::Drawing::Size(58, 20);
			this->fiveKof14->TabIndex = 66;
			// 
			// fiveKof34
			// 
			this->fiveKof34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof34->Location = System::Drawing::Point(297, 58);
			this->fiveKof34->Name = L"fiveKof34";
			this->fiveKof34->Size = System::Drawing::Size(58, 20);
			this->fiveKof34->TabIndex = 65;
			// 
			// fiveKof24
			// 
			this->fiveKof24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof24->Location = System::Drawing::Point(297, 32);
			this->fiveKof24->Name = L"fiveKof24";
			this->fiveKof24->Size = System::Drawing::Size(58, 20);
			this->fiveKof24->TabIndex = 64;
			// 
			// fiveKof33
			// 
			this->fiveKof33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof33->Location = System::Drawing::Point(200, 58);
			this->fiveKof33->Name = L"fiveKof33";
			this->fiveKof33->Size = System::Drawing::Size(58, 20);
			this->fiveKof33->TabIndex = 63;
			// 
			// fiveKof23
			// 
			this->fiveKof23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof23->Location = System::Drawing::Point(200, 32);
			this->fiveKof23->Name = L"fiveKof23";
			this->fiveKof23->Size = System::Drawing::Size(58, 20);
			this->fiveKof23->TabIndex = 62;
			// 
			// fiveKof11
			// 
			this->fiveKof11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fiveKof11->Location = System::Drawing::Point(6, 6);
			this->fiveKof11->Name = L"fiveKof11";
			this->fiveKof11->Size = System::Drawing::Size(58, 20);
			this->fiveKof11->TabIndex = 61;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Cursor = System::Windows::Forms::Cursors::Default;
			this->label47->Location = System::Drawing::Point(361, 117);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(27, 13);
			this->label47->TabIndex = 113;
			this->label47->Text = L"x4 +";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Cursor = System::Windows::Forms::Cursors::Default;
			this->label48->Location = System::Drawing::Point(264, 117);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(27, 13);
			this->label48->TabIndex = 111;
			this->label48->Text = L"x3 +";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Cursor = System::Windows::Forms::Cursors::Default;
			this->label49->Location = System::Drawing::Point(167, 117);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(27, 13);
			this->label49->TabIndex = 110;
			this->label49->Text = L"x2 +";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Cursor = System::Windows::Forms::Cursors::Default;
			this->label50->Location = System::Drawing::Point(70, 117);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(27, 13);
			this->label50->TabIndex = 109;
			this->label50->Text = L"x1 +";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Cursor = System::Windows::Forms::Cursors::Default;
			this->label35->Location = System::Drawing::Point(458, 91);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(27, 13);
			this->label35->TabIndex = 104;
			this->label35->Text = L"x5 =";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Cursor = System::Windows::Forms::Cursors::Default;
			this->label36->Location = System::Drawing::Point(458, 39);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(27, 13);
			this->label36->TabIndex = 102;
			this->label36->Text = L"x5 =";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Cursor = System::Windows::Forms::Cursors::Default;
			this->label44->Location = System::Drawing::Point(458, 65);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(27, 13);
			this->label44->TabIndex = 101;
			this->label44->Text = L"x5 =";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Cursor = System::Windows::Forms::Cursors::Default;
			this->label45->Location = System::Drawing::Point(458, 13);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(27, 13);
			this->label45->TabIndex = 100;
			this->label45->Text = L"x5 =";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Cursor = System::Windows::Forms::Cursors::Default;
			this->label19->Location = System::Drawing::Point(361, 91);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(27, 13);
			this->label19->TabIndex = 96;
			this->label19->Text = L"x4 +";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Cursor = System::Windows::Forms::Cursors::Default;
			this->label20->Location = System::Drawing::Point(264, 91);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(27, 13);
			this->label20->TabIndex = 94;
			this->label20->Text = L"x3 +";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Cursor = System::Windows::Forms::Cursors::Default;
			this->label21->Location = System::Drawing::Point(167, 91);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(27, 13);
			this->label21->TabIndex = 93;
			this->label21->Text = L"x2 +";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Cursor = System::Windows::Forms::Cursors::Default;
			this->label22->Location = System::Drawing::Point(70, 91);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(27, 13);
			this->label22->TabIndex = 92;
			this->label22->Text = L"x1 +";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Cursor = System::Windows::Forms::Cursors::Default;
			this->label23->Location = System::Drawing::Point(361, 39);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(27, 13);
			this->label23->TabIndex = 87;
			this->label23->Text = L"x4 +";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Cursor = System::Windows::Forms::Cursors::Default;
			this->label24->Location = System::Drawing::Point(361, 65);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(27, 13);
			this->label24->TabIndex = 86;
			this->label24->Text = L"x4 +";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Cursor = System::Windows::Forms::Cursors::Default;
			this->label25->Location = System::Drawing::Point(361, 13);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(27, 13);
			this->label25->TabIndex = 85;
			this->label25->Text = L"x4 +";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Cursor = System::Windows::Forms::Cursors::Default;
			this->label26->Location = System::Drawing::Point(264, 39);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(27, 13);
			this->label26->TabIndex = 81;
			this->label26->Text = L"x3 +";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Cursor = System::Windows::Forms::Cursors::Default;
			this->label27->Location = System::Drawing::Point(264, 65);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(27, 13);
			this->label27->TabIndex = 80;
			this->label27->Text = L"x3 +";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Cursor = System::Windows::Forms::Cursors::Default;
			this->label28->Location = System::Drawing::Point(264, 13);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(27, 13);
			this->label28->TabIndex = 79;
			this->label28->Text = L"x3 +";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Cursor = System::Windows::Forms::Cursors::Default;
			this->label29->Location = System::Drawing::Point(167, 65);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(27, 13);
			this->label29->TabIndex = 78;
			this->label29->Text = L"x2 +";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Cursor = System::Windows::Forms::Cursors::Default;
			this->label30->Location = System::Drawing::Point(167, 13);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(27, 13);
			this->label30->TabIndex = 77;
			this->label30->Text = L"x2 +";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Cursor = System::Windows::Forms::Cursors::Default;
			this->label31->Location = System::Drawing::Point(167, 39);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(27, 13);
			this->label31->TabIndex = 76;
			this->label31->Text = L"x2 +";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Cursor = System::Windows::Forms::Cursors::Default;
			this->label32->Location = System::Drawing::Point(70, 65);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(27, 13);
			this->label32->TabIndex = 75;
			this->label32->Text = L"x1 +";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Cursor = System::Windows::Forms::Cursors::Default;
			this->label33->Location = System::Drawing::Point(70, 39);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(27, 13);
			this->label33->TabIndex = 74;
			this->label33->Text = L"x1 +";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Cursor = System::Windows::Forms::Cursors::Default;
			this->label34->Location = System::Drawing::Point(70, 13);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(27, 13);
			this->label34->TabIndex = 73;
			this->label34->Text = L"x1 +";
			// 
			// fiveClear
			// 
			this->fiveClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->fiveClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fiveClear->Location = System::Drawing::Point(572, 480);
			this->fiveClear->Name = L"fiveClear";
			this->fiveClear->Size = System::Drawing::Size(75, 23);
			this->fiveClear->TabIndex = 45;
			this->fiveClear->Text = L"Очистить";
			this->fiveClear->UseVisualStyleBackColor = true;
			this->fiveClear->Click += gcnew System::EventHandler(this, &MyForm::fiveClear_Click);
			// 
			// fiveFind
			// 
			this->fiveFind->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->fiveFind->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fiveFind->Location = System::Drawing::Point(653, 480);
			this->fiveFind->Name = L"fiveFind";
			this->fiveFind->Size = System::Drawing::Size(91, 23);
			this->fiveFind->TabIndex = 44;
			this->fiveFind->Text = L"Найти ответ";
			this->fiveFind->UseVisualStyleBackColor = true;
			this->fiveFind->Click += gcnew System::EventHandler(this, &MyForm::fiveFind_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Silver;
			this->tabPage2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage2->Controls->Add(this->label56);
			this->tabPage2->Controls->Add(this->label57);
			this->tabPage2->Controls->Add(this->label58);
			this->tabPage2->Controls->Add(this->label59);
			this->tabPage2->Controls->Add(this->fourX4);
			this->tabPage2->Controls->Add(this->fourX2);
			this->tabPage2->Controls->Add(this->fourX3);
			this->tabPage2->Controls->Add(this->fourX1);
			this->tabPage2->Controls->Add(this->label40);
			this->tabPage2->Controls->Add(this->fourFree4);
			this->tabPage2->Controls->Add(this->fourKof41);
			this->tabPage2->Controls->Add(this->fourKof42);
			this->tabPage2->Controls->Add(this->fourKof44);
			this->tabPage2->Controls->Add(this->fourKof43);
			this->tabPage2->Controls->Add(this->fourFree1);
			this->tabPage2->Controls->Add(this->fourFree3);
			this->tabPage2->Controls->Add(this->fourFree2);
			this->tabPage2->Controls->Add(this->fourKof12);
			this->tabPage2->Controls->Add(this->fourKof21);
			this->tabPage2->Controls->Add(this->fourKof22);
			this->tabPage2->Controls->Add(this->fourKof31);
			this->tabPage2->Controls->Add(this->fourKof32);
			this->tabPage2->Controls->Add(this->fourKof13);
			this->tabPage2->Controls->Add(this->fourKof14);
			this->tabPage2->Controls->Add(this->fourKof34);
			this->tabPage2->Controls->Add(this->fourKof24);
			this->tabPage2->Controls->Add(this->fourKof33);
			this->tabPage2->Controls->Add(this->fourKof23);
			this->tabPage2->Controls->Add(this->fourKof11);
			this->tabPage2->Controls->Add(this->label41);
			this->tabPage2->Controls->Add(this->label42);
			this->tabPage2->Controls->Add(this->label43);
			this->tabPage2->Controls->Add(this->label37);
			this->tabPage2->Controls->Add(this->label38);
			this->tabPage2->Controls->Add(this->label39);
			this->tabPage2->Controls->Add(this->fourClear);
			this->tabPage2->Controls->Add(this->fourFind);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(752, 511);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Четыре переменные";
			// 
			// label56
			// 
			this->label56->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(6, 340);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(27, 13);
			this->label56->TabIndex = 133;
			this->label56->Text = L"x4 =";
			// 
			// label57
			// 
			this->label57->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(6, 314);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(27, 13);
			this->label57->TabIndex = 132;
			this->label57->Text = L"x3 =";
			// 
			// label58
			// 
			this->label58->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(6, 288);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(27, 13);
			this->label58->TabIndex = 131;
			this->label58->Text = L"x2 =";
			// 
			// label59
			// 
			this->label59->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(6, 262);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(27, 13);
			this->label59->TabIndex = 130;
			this->label59->Text = L"x1 =";
			// 
			// fourX4
			// 
			this->fourX4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fourX4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourX4->Location = System::Drawing::Point(39, 333);
			this->fourX4->Name = L"fourX4";
			this->fourX4->ReadOnly = true;
			this->fourX4->Size = System::Drawing::Size(58, 20);
			this->fourX4->TabIndex = 129;
			// 
			// fourX2
			// 
			this->fourX2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fourX2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourX2->Location = System::Drawing::Point(39, 281);
			this->fourX2->Name = L"fourX2";
			this->fourX2->ReadOnly = true;
			this->fourX2->Size = System::Drawing::Size(58, 20);
			this->fourX2->TabIndex = 128;
			// 
			// fourX3
			// 
			this->fourX3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fourX3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourX3->Location = System::Drawing::Point(39, 307);
			this->fourX3->Name = L"fourX3";
			this->fourX3->ReadOnly = true;
			this->fourX3->Size = System::Drawing::Size(58, 20);
			this->fourX3->TabIndex = 127;
			// 
			// fourX1
			// 
			this->fourX1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fourX1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourX1->Location = System::Drawing::Point(39, 255);
			this->fourX1->Name = L"fourX1";
			this->fourX1->ReadOnly = true;
			this->fourX1->Size = System::Drawing::Size(58, 20);
			this->fourX1->TabIndex = 126;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Cursor = System::Windows::Forms::Cursors::Default;
			this->label40->Location = System::Drawing::Point(361, 91);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(27, 13);
			this->label40->TabIndex = 60;
			this->label40->Text = L"x4 =";
			// 
			// fourFree4
			// 
			this->fourFree4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourFree4->Location = System::Drawing::Point(394, 84);
			this->fourFree4->Name = L"fourFree4";
			this->fourFree4->Size = System::Drawing::Size(58, 20);
			this->fourFree4->TabIndex = 59;
			// 
			// fourKof41
			// 
			this->fourKof41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof41->Location = System::Drawing::Point(6, 84);
			this->fourKof41->Name = L"fourKof41";
			this->fourKof41->Size = System::Drawing::Size(58, 20);
			this->fourKof41->TabIndex = 55;
			// 
			// fourKof42
			// 
			this->fourKof42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof42->Location = System::Drawing::Point(103, 84);
			this->fourKof42->Name = L"fourKof42";
			this->fourKof42->Size = System::Drawing::Size(58, 20);
			this->fourKof42->TabIndex = 54;
			// 
			// fourKof44
			// 
			this->fourKof44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof44->Location = System::Drawing::Point(297, 84);
			this->fourKof44->Name = L"fourKof44";
			this->fourKof44->Size = System::Drawing::Size(58, 20);
			this->fourKof44->TabIndex = 53;
			// 
			// fourKof43
			// 
			this->fourKof43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof43->Location = System::Drawing::Point(200, 84);
			this->fourKof43->Name = L"fourKof43";
			this->fourKof43->Size = System::Drawing::Size(58, 20);
			this->fourKof43->TabIndex = 52;
			// 
			// fourFree1
			// 
			this->fourFree1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourFree1->Location = System::Drawing::Point(394, 6);
			this->fourFree1->Name = L"fourFree1";
			this->fourFree1->Size = System::Drawing::Size(58, 20);
			this->fourFree1->TabIndex = 48;
			// 
			// fourFree3
			// 
			this->fourFree3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourFree3->Location = System::Drawing::Point(394, 58);
			this->fourFree3->Name = L"fourFree3";
			this->fourFree3->Size = System::Drawing::Size(58, 20);
			this->fourFree3->TabIndex = 47;
			// 
			// fourFree2
			// 
			this->fourFree2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourFree2->Location = System::Drawing::Point(394, 32);
			this->fourFree2->Name = L"fourFree2";
			this->fourFree2->Size = System::Drawing::Size(58, 20);
			this->fourFree2->TabIndex = 46;
			// 
			// fourKof12
			// 
			this->fourKof12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof12->Location = System::Drawing::Point(103, 6);
			this->fourKof12->Name = L"fourKof12";
			this->fourKof12->Size = System::Drawing::Size(58, 20);
			this->fourKof12->TabIndex = 34;
			// 
			// fourKof21
			// 
			this->fourKof21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof21->Location = System::Drawing::Point(6, 32);
			this->fourKof21->Name = L"fourKof21";
			this->fourKof21->Size = System::Drawing::Size(58, 20);
			this->fourKof21->TabIndex = 33;
			// 
			// fourKof22
			// 
			this->fourKof22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof22->Location = System::Drawing::Point(103, 32);
			this->fourKof22->Name = L"fourKof22";
			this->fourKof22->Size = System::Drawing::Size(58, 20);
			this->fourKof22->TabIndex = 32;
			// 
			// fourKof31
			// 
			this->fourKof31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof31->Location = System::Drawing::Point(6, 58);
			this->fourKof31->Name = L"fourKof31";
			this->fourKof31->Size = System::Drawing::Size(58, 20);
			this->fourKof31->TabIndex = 31;
			// 
			// fourKof32
			// 
			this->fourKof32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof32->Location = System::Drawing::Point(103, 58);
			this->fourKof32->Name = L"fourKof32";
			this->fourKof32->Size = System::Drawing::Size(58, 20);
			this->fourKof32->TabIndex = 30;
			// 
			// fourKof13
			// 
			this->fourKof13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof13->Location = System::Drawing::Point(200, 6);
			this->fourKof13->Name = L"fourKof13";
			this->fourKof13->Size = System::Drawing::Size(58, 20);
			this->fourKof13->TabIndex = 29;
			// 
			// fourKof14
			// 
			this->fourKof14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof14->Location = System::Drawing::Point(297, 6);
			this->fourKof14->Name = L"fourKof14";
			this->fourKof14->Size = System::Drawing::Size(58, 20);
			this->fourKof14->TabIndex = 28;
			// 
			// fourKof34
			// 
			this->fourKof34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof34->Location = System::Drawing::Point(297, 58);
			this->fourKof34->Name = L"fourKof34";
			this->fourKof34->Size = System::Drawing::Size(58, 20);
			this->fourKof34->TabIndex = 27;
			// 
			// fourKof24
			// 
			this->fourKof24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof24->Location = System::Drawing::Point(297, 32);
			this->fourKof24->Name = L"fourKof24";
			this->fourKof24->Size = System::Drawing::Size(58, 20);
			this->fourKof24->TabIndex = 26;
			// 
			// fourKof33
			// 
			this->fourKof33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof33->Location = System::Drawing::Point(200, 58);
			this->fourKof33->Name = L"fourKof33";
			this->fourKof33->Size = System::Drawing::Size(58, 20);
			this->fourKof33->TabIndex = 25;
			// 
			// fourKof23
			// 
			this->fourKof23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof23->Location = System::Drawing::Point(200, 32);
			this->fourKof23->Name = L"fourKof23";
			this->fourKof23->Size = System::Drawing::Size(58, 20);
			this->fourKof23->TabIndex = 24;
			// 
			// fourKof11
			// 
			this->fourKof11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fourKof11->Location = System::Drawing::Point(6, 6);
			this->fourKof11->Name = L"fourKof11";
			this->fourKof11->Size = System::Drawing::Size(58, 20);
			this->fourKof11->TabIndex = 23;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Cursor = System::Windows::Forms::Cursors::Default;
			this->label41->Location = System::Drawing::Point(264, 91);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(27, 13);
			this->label41->TabIndex = 58;
			this->label41->Text = L"x3 +";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Cursor = System::Windows::Forms::Cursors::Default;
			this->label42->Location = System::Drawing::Point(167, 91);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(27, 13);
			this->label42->TabIndex = 57;
			this->label42->Text = L"x2 +";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Cursor = System::Windows::Forms::Cursors::Default;
			this->label43->Location = System::Drawing::Point(70, 91);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(27, 13);
			this->label43->TabIndex = 56;
			this->label43->Text = L"x1 +";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Cursor = System::Windows::Forms::Cursors::Default;
			this->label37->Location = System::Drawing::Point(361, 39);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(27, 13);
			this->label37->TabIndex = 51;
			this->label37->Text = L"x4 =";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Cursor = System::Windows::Forms::Cursors::Default;
			this->label38->Location = System::Drawing::Point(361, 65);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(27, 13);
			this->label38->TabIndex = 50;
			this->label38->Text = L"x4 =";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Cursor = System::Windows::Forms::Cursors::Default;
			this->label39->Location = System::Drawing::Point(361, 13);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(27, 13);
			this->label39->TabIndex = 49;
			this->label39->Text = L"x4 =";
			// 
			// fourClear
			// 
			this->fourClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->fourClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fourClear->Location = System::Drawing::Point(572, 480);
			this->fourClear->Name = L"fourClear";
			this->fourClear->Size = System::Drawing::Size(75, 23);
			this->fourClear->TabIndex = 45;
			this->fourClear->Text = L"Очистить";
			this->fourClear->UseVisualStyleBackColor = true;
			this->fourClear->Click += gcnew System::EventHandler(this, &MyForm::fourClear_Click);
			// 
			// fourFind
			// 
			this->fourFind->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->fourFind->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fourFind->Location = System::Drawing::Point(653, 480);
			this->fourFind->Name = L"fourFind";
			this->fourFind->Size = System::Drawing::Size(91, 23);
			this->fourFind->TabIndex = 44;
			this->fourFind->Text = L"Найти ответ";
			this->fourFind->UseVisualStyleBackColor = true;
			this->fourFind->Click += gcnew System::EventHandler(this, &MyForm::fourFind_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Cursor = System::Windows::Forms::Cursors::Default;
			this->label10->Location = System::Drawing::Point(264, 39);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 13);
			this->label10->TabIndex = 43;
			this->label10->Text = L"x3 +";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Cursor = System::Windows::Forms::Cursors::Default;
			this->label11->Location = System::Drawing::Point(264, 65);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(27, 13);
			this->label11->TabIndex = 42;
			this->label11->Text = L"x3 +";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Cursor = System::Windows::Forms::Cursors::Default;
			this->label12->Location = System::Drawing::Point(264, 13);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(27, 13);
			this->label12->TabIndex = 41;
			this->label12->Text = L"x3 +";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Cursor = System::Windows::Forms::Cursors::Default;
			this->label13->Location = System::Drawing::Point(167, 65);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 13);
			this->label13->TabIndex = 40;
			this->label13->Text = L"x2 +";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Cursor = System::Windows::Forms::Cursors::Default;
			this->label14->Location = System::Drawing::Point(167, 13);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(27, 13);
			this->label14->TabIndex = 39;
			this->label14->Text = L"x2 +";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Cursor = System::Windows::Forms::Cursors::Default;
			this->label15->Location = System::Drawing::Point(167, 39);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(27, 13);
			this->label15->TabIndex = 38;
			this->label15->Text = L"x2 +";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Cursor = System::Windows::Forms::Cursors::Default;
			this->label16->Location = System::Drawing::Point(70, 65);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(27, 13);
			this->label16->TabIndex = 37;
			this->label16->Text = L"x1 +";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Cursor = System::Windows::Forms::Cursors::Default;
			this->label17->Location = System::Drawing::Point(70, 39);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(27, 13);
			this->label17->TabIndex = 36;
			this->label17->Text = L"x1 +";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Cursor = System::Windows::Forms::Cursors::Default;
			this->label18->Location = System::Drawing::Point(70, 13);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(27, 13);
			this->label18->TabIndex = 35;
			this->label18->Text = L"x1 +";
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Silver;
			this->tabPage1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage1->Controls->Add(this->label60);
			this->tabPage1->Controls->Add(this->label61);
			this->tabPage1->Controls->Add(this->label62);
			this->tabPage1->Controls->Add(this->threeX2);
			this->tabPage1->Controls->Add(this->threeX3);
			this->tabPage1->Controls->Add(this->threeX1);
			this->tabPage1->Controls->Add(this->threeClear);
			this->tabPage1->Controls->Add(this->threeFind);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->threeKof12);
			this->tabPage1->Controls->Add(this->threeKof21);
			this->tabPage1->Controls->Add(this->threeKof22);
			this->tabPage1->Controls->Add(this->threeKof31);
			this->tabPage1->Controls->Add(this->threeKof32);
			this->tabPage1->Controls->Add(this->threeKof13);
			this->tabPage1->Controls->Add(this->threeFree1);
			this->tabPage1->Controls->Add(this->threeFree3);
			this->tabPage1->Controls->Add(this->threeFree2);
			this->tabPage1->Controls->Add(this->threeKof33);
			this->tabPage1->Controls->Add(this->threeKof23);
			this->tabPage1->Controls->Add(this->threeKof11);
			this->tabPage1->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(752, 511);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Три переменные";
			// 
			// label60
			// 
			this->label60->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(6, 314);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(27, 13);
			this->label60->TabIndex = 138;
			this->label60->Text = L"x3 =";
			// 
			// label61
			// 
			this->label61->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(6, 288);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(27, 13);
			this->label61->TabIndex = 137;
			this->label61->Text = L"x2 =";
			// 
			// label62
			// 
			this->label62->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(6, 262);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(27, 13);
			this->label62->TabIndex = 136;
			this->label62->Text = L"x1 =";
			// 
			// threeX2
			// 
			this->threeX2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->threeX2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->threeX2->Location = System::Drawing::Point(39, 281);
			this->threeX2->Name = L"threeX2";
			this->threeX2->ReadOnly = true;
			this->threeX2->Size = System::Drawing::Size(58, 20);
			this->threeX2->TabIndex = 135;
			// 
			// threeX3
			// 
			this->threeX3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->threeX3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->threeX3->Location = System::Drawing::Point(39, 307);
			this->threeX3->Name = L"threeX3";
			this->threeX3->ReadOnly = true;
			this->threeX3->Size = System::Drawing::Size(58, 20);
			this->threeX3->TabIndex = 134;
			// 
			// threeX1
			// 
			this->threeX1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->threeX1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->threeX1->Location = System::Drawing::Point(39, 255);
			this->threeX1->Name = L"threeX1";
			this->threeX1->ReadOnly = true;
			this->threeX1->Size = System::Drawing::Size(58, 20);
			this->threeX1->TabIndex = 133;
			// 
			// threeClear
			// 
			this->threeClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->threeClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->threeClear->Location = System::Drawing::Point(572, 480);
			this->threeClear->Name = L"threeClear";
			this->threeClear->Size = System::Drawing::Size(75, 23);
			this->threeClear->TabIndex = 22;
			this->threeClear->Text = L"Очистить";
			this->threeClear->UseVisualStyleBackColor = true;
			this->threeClear->Click += gcnew System::EventHandler(this, &MyForm::threeClear_Click);
			// 
			// threeFind
			// 
			this->threeFind->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->threeFind->BackColor = System::Drawing::Color::Transparent;
			this->threeFind->Cursor = System::Windows::Forms::Cursors::Hand;
			this->threeFind->Location = System::Drawing::Point(653, 480);
			this->threeFind->Name = L"threeFind";
			this->threeFind->Size = System::Drawing::Size(91, 23);
			this->threeFind->TabIndex = 21;
			this->threeFind->Text = L"Найти ответ";
			this->threeFind->UseVisualStyleBackColor = false;
			this->threeFind->Click += gcnew System::EventHandler(this, &MyForm::threeFind_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Cursor = System::Windows::Forms::Cursors::Default;
			this->label9->Location = System::Drawing::Point(264, 39);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"x3 =";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::Default;
			this->label8->Location = System::Drawing::Point(264, 65);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"x3 =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Default;
			this->label7->Location = System::Drawing::Point(264, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"x3 =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Default;
			this->label6->Location = System::Drawing::Point(167, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"x2 +";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Default;
			this->label5->Location = System::Drawing::Point(167, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"x2 +";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Default;
			this->label4->Location = System::Drawing::Point(167, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"x2 +";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Default;
			this->label3->Location = System::Drawing::Point(70, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"x1 +";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Default;
			this->label2->Location = System::Drawing::Point(70, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"x1 +";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Location = System::Drawing::Point(70, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"x1 +";
			// 
			// threeKof12
			// 
			this->threeKof12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->threeKof12->Location = System::Drawing::Point(103, 6);
			this->threeKof12->Name = L"threeKof12";
			this->threeKof12->Size = System::Drawing::Size(58, 20);
			this->threeKof12->TabIndex = 11;
			// 
			// threeKof21
			// 
			this->threeKof21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->threeKof21->Location = System::Drawing::Point(6, 32);
			this->threeKof21->Name = L"threeKof21";
			this->threeKof21->Size = System::Drawing::Size(58, 20);
			this->threeKof21->TabIndex = 10;
			// 
			// threeKof22
			// 
			this->threeKof22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->threeKof22->Location = System::Drawing::Point(103, 32);
			this->threeKof22->Name = L"threeKof22";
			this->threeKof22->Size = System::Drawing::Size(58, 20);
			this->threeKof22->TabIndex = 9;
			// 
			// threeKof31
			// 
			this->threeKof31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->threeKof31->Location = System::Drawing::Point(6, 58);
			this->threeKof31->Name = L"threeKof31";
			this->threeKof31->Size = System::Drawing::Size(58, 20);
			this->threeKof31->TabIndex = 8;
			// 
			// threeKof32
			// 
			this->threeKof32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->threeKof32->Location = System::Drawing::Point(103, 58);
			this->threeKof32->Name = L"threeKof32";
			this->threeKof32->Size = System::Drawing::Size(58, 20);
			this->threeKof32->TabIndex = 7;
			// 
			// threeKof13
			// 
			this->threeKof13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->threeKof13->Location = System::Drawing::Point(200, 6);
			this->threeKof13->Name = L"threeKof13";
			this->threeKof13->Size = System::Drawing::Size(58, 20);
			this->threeKof13->TabIndex = 6;
			// 
			// threeFree1
			// 
			this->threeFree1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->threeFree1->Location = System::Drawing::Point(297, 6);
			this->threeFree1->Name = L"threeFree1";
			this->threeFree1->Size = System::Drawing::Size(58, 20);
			this->threeFree1->TabIndex = 5;
			// 
			// threeFree3
			// 
			this->threeFree3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->threeFree3->Location = System::Drawing::Point(297, 58);
			this->threeFree3->Name = L"threeFree3";
			this->threeFree3->Size = System::Drawing::Size(58, 20);
			this->threeFree3->TabIndex = 4;
			// 
			// threeFree2
			// 
			this->threeFree2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->threeFree2->Location = System::Drawing::Point(297, 32);
			this->threeFree2->Name = L"threeFree2";
			this->threeFree2->Size = System::Drawing::Size(58, 20);
			this->threeFree2->TabIndex = 3;
			// 
			// threeKof33
			// 
			this->threeKof33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->threeKof33->Location = System::Drawing::Point(200, 58);
			this->threeKof33->Name = L"threeKof33";
			this->threeKof33->Size = System::Drawing::Size(58, 20);
			this->threeKof33->TabIndex = 2;
			// 
			// threeKof23
			// 
			this->threeKof23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->threeKof23->Location = System::Drawing::Point(200, 32);
			this->threeKof23->Name = L"threeKof23";
			this->threeKof23->Size = System::Drawing::Size(58, 20);
			this->threeKof23->TabIndex = 1;
			// 
			// threeKof11
			// 
			this->threeKof11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->threeKof11->Location = System::Drawing::Point(6, 6);
			this->threeKof11->Name = L"threeKof11";
			this->threeKof11->Size = System::Drawing::Size(58, 20);
			this->threeKof11->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(760, 537);
			this->tabControl1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->tabControl1);
			this->MinimumSize = System::Drawing::Size(605, 400);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор СЛАУ";
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		double delta(vector<vector<double>> A, int n)
		{
			vector<vector<double>> B;
			double d = 0;
			if (n == 2)
				d = A[0][0] * A[1][1] - A[0][1] * A[1][0];
			else
			{
				double k = 1;
				for (int i = 0; i < n; ++i)
				{
					for (int j = 0; j < n; ++j)
						if (j != i)
						{
							vector<double> C;
							for (int h = 1; h < n; ++h)
								C.push_back(A[j][h]);
							B.push_back(C);
						}
					d += k * A[i][0] * delta(B, n - 1);
					k *= -1;
				}
			}
			return d;
		}
		bool check_input(String^ input)
		{
			if (input->Length == 0)
				return false;
			if (input->Length == 1 && (input[0] == ',' || input[0] == '-'))
				return false;
			for (int i = 0; i < input->Length; ++i)
			{
				if (!(input[i] >= '0' && input[i] <= '9' || input[i] == ',' || input[0] ==  '-' ))
					return false;
				if (i > 0 && input[i] == '-')
					return false;
			}
			if (input[0] == ',' || (input[0] == '-' && input[1] == ','))
				return false;
			int count = 0;
			bool flag = true;
			for (int i = 0; i < input->Length && flag; ++i)
			{
				if (input[i] == ',')
					count += 1;
				if (count > 1)
					flag = false;
			}
			if (!flag)
				return false;
			return true;
		}
		vector<double> gauss(vector<vector<double>> A, int n)
		{
			for (int i = 0; i < n; ++i)
				for (int j = i + 1; j < n; ++j)
					if (j != i)
					{
						double G = A[j][i] / A[i][i];
						for (int k = i; k < n + 1; ++k)
							A[j][k] -= A[i][k] * G;
					}
			vector<double> res(n);
			for (int i = 0; i < n; ++i)
				res[i] = 1;
			res[n - 1] = A[n - 1][n] / A[n - 1][n - 1];
			vector<double> E(n + 1);
			for (int i = n - 2; i > -1; --i)
			{
				for (int j = 0; j < n + 1; ++j)
					E[j] = A[i][j];
				for (int j = 0; j < n; ++j)
					E[j] *= res[j];
				for (int j = i + 1; j < n; ++j)
					E[n] -= E[j];
				res[i] = E[n] / E[i];
			}
			return res;
		}
private: System::Void threeClear_Click(System::Object^ sender, System::EventArgs^ e) {
	threeKof11->Text = "";
	threeKof12->Text = "";
	threeKof13->Text = "";
	threeFree1->Text = "";
	threeKof21->Text = "";
	threeKof22->Text = "";
	threeKof23->Text = "";
	threeFree2->Text = "";
	threeKof31->Text = "";
	threeKof32->Text = "";
	threeKof33->Text = "";
	threeFree3->Text = "";
	threeX1->Text = "";
	threeX2->Text = "";
	threeX3->Text = "";
}
private: System::Void threeFind_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check_input(threeKof11->Text) &&
		check_input(threeKof12->Text) &&
		check_input(threeKof13->Text) &&
		check_input(threeFree1->Text) &&
		check_input(threeKof21->Text) &&
		check_input(threeKof22->Text) &&
		check_input(threeKof23->Text) &&
		check_input(threeFree2->Text) &&
		check_input(threeKof31->Text) &&
		check_input(threeKof32->Text) &&
		check_input(threeKof33->Text) && 
		check_input(threeFree3->Text))
	{
		int n = 3;
		vector<vector<double>> x(n);
		for (int i = 0; i < n; ++i)
			x[i].resize(n + 1);
		x[0][0] = System::Convert::ToDouble(threeKof11->Text);
		x[0][1] = System::Convert::ToDouble(threeKof12->Text);
		x[0][2] = System::Convert::ToDouble(threeKof13->Text);
		x[0][3] = System::Convert::ToDouble(threeFree1->Text);
		x[1][0] = System::Convert::ToDouble(threeKof21->Text);
		x[1][1] = System::Convert::ToDouble(threeKof22->Text);
		x[1][2] = System::Convert::ToDouble(threeKof23->Text);
		x[1][3] = System::Convert::ToDouble(threeFree2->Text);
		x[2][0] = System::Convert::ToDouble(threeKof31->Text);
		x[2][1] = System::Convert::ToDouble(threeKof32->Text);
		x[2][2] = System::Convert::ToDouble(threeKof33->Text);
		x[2][3] = System::Convert::ToDouble(threeFree3->Text);
		if (delta(x, n) != 0)
		{
			vector<double>res = gauss(x, n);
			threeX1->Text = System::Convert::ToString(res[0]);
			threeX2->Text = System::Convert::ToString(res[1]);
			threeX3->Text = System::Convert::ToString(res[2]);
		}
		else
			MessageBox::Show("Система имеет бесконечное количество решений или не имеет вовсе!");
	}
	else
		MessageBox::Show("Введены некорректные данные!");
}
private: System::Void fourClear_Click(System::Object^ sender, System::EventArgs^ e) {
	fourKof11->Text = "";
	fourKof12->Text = "";
	fourKof13->Text = "";
	fourKof14->Text = "";
	fourFree1->Text = "";
	fourKof21->Text = "";
	fourKof22->Text = "";
	fourKof23->Text = "";
	fourKof24->Text = "";
	fourFree2->Text = "";
	fourKof31->Text = "";
	fourKof32->Text = "";
	fourKof33->Text = "";
	fourKof34->Text = "";
	fourFree3->Text = "";
	fourKof41->Text = "";
	fourKof42->Text = "";
	fourKof43->Text = "";
	fourKof44->Text = "";
	fourFree4->Text = "";
	fourX1->Text = "";
	fourX2->Text = "";
	fourX3->Text = "";
	fourX4->Text = "";
}
private: System::Void fourFind_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check_input(fourKof11->Text) &&
		check_input(fourKof12->Text) &&
		check_input(fourKof13->Text) &&
		check_input(fourKof14->Text) &&
		check_input(fourFree1->Text) &&
		check_input(fourKof21->Text) &&
		check_input(fourKof22->Text) &&
		check_input(fourKof23->Text) &&
		check_input(fourKof24->Text) &&
		check_input(fourFree2->Text) &&
		check_input(fourKof31->Text) &&
		check_input(fourKof32->Text) &&
		check_input(fourKof33->Text) &&
		check_input(fourKof34->Text) &&
		check_input(fourFree3->Text) &&
		check_input(fourKof41->Text) &&
		check_input(fourKof42->Text) &&
		check_input(fourKof43->Text) &&
		check_input(fourKof44->Text) &&
		check_input(fourFree4->Text))
	{
		int n = 4;
		vector<vector<double>> x(n);
		for (int i = 0; i < n; ++i)
			x[i].resize(n + 1);
		x[0][0] = System::Convert::ToDouble(fourKof11->Text);
		x[0][1] = System::Convert::ToDouble(fourKof12->Text);
		x[0][2] = System::Convert::ToDouble(fourKof13->Text);
		x[0][3] = System::Convert::ToDouble(fourKof14->Text);
		x[0][4] = System::Convert::ToDouble(fourFree1->Text);
		x[1][0] = System::Convert::ToDouble(fourKof21->Text);
		x[1][1] = System::Convert::ToDouble(fourKof22->Text);
		x[1][2] = System::Convert::ToDouble(fourKof23->Text);
		x[1][3] = System::Convert::ToDouble(fourKof24->Text);
		x[1][4] = System::Convert::ToDouble(fourFree2->Text);
		x[2][0] = System::Convert::ToDouble(fourKof31->Text);
		x[2][1] = System::Convert::ToDouble(fourKof32->Text);
		x[2][2] = System::Convert::ToDouble(fourKof33->Text);
		x[2][3] = System::Convert::ToDouble(fourKof34->Text);
		x[2][4] = System::Convert::ToDouble(fourFree3->Text);
		x[3][0] = System::Convert::ToDouble(fourKof41->Text);
		x[3][1] = System::Convert::ToDouble(fourKof42->Text);
		x[3][2] = System::Convert::ToDouble(fourKof43->Text);
		x[3][3] = System::Convert::ToDouble(fourKof44->Text);
		x[3][4] = System::Convert::ToDouble(fourFree4->Text);
		if (delta(x, n) != 0)
		{
			vector<double>res = gauss(x, n);
			fourX1->Text = System::Convert::ToString(res[0]);
			fourX2->Text = System::Convert::ToString(res[1]);
			fourX3->Text = System::Convert::ToString(res[2]);
			fourX4->Text = System::Convert::ToString(res[3]);
		}
		else
			MessageBox::Show("Система имеет бесконечное количество решений или не имеет вовсе!");
	}
	else
		MessageBox::Show("Введены некорректные данные!");
}
private: System::Void fiveClear_Click(System::Object^ sender, System::EventArgs^ e) {
	fiveKof11->Text = "";
	fiveKof12->Text = "";
	fiveKof13->Text = "";
	fiveKof14->Text = "";
	fiveKof15->Text = "";
	fiveFree1->Text = "";
	fiveKof21->Text = "";
	fiveKof22->Text = "";
	fiveKof23->Text = "";
	fiveKof24->Text = "";
	fiveKof25->Text = "";
	fiveFree2->Text = "";
	fiveKof31->Text = "";
	fiveKof32->Text = "";
	fiveKof33->Text = "";
	fiveKof34->Text = "";
	fiveKof35->Text = "";
	fiveFree3->Text = "";
	fiveKof41->Text = "";
	fiveKof42->Text = "";
	fiveKof43->Text = "";
	fiveKof44->Text = "";
	fiveKof45->Text = "";
	fiveFree4->Text = "";
	fiveKof51->Text = "";
	fiveKof52->Text = "";
	fiveKof53->Text = "";
	fiveKof54->Text = "";
	fiveKof55->Text = "";
	fiveFree5->Text = "";
	fiveX1->Text = "";
	fiveX2->Text = "";
	fiveX3->Text = "";
	fiveX4->Text = "";
	fiveX5->Text = "";
}
private: System::Void fiveFind_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check_input(fiveKof11->Text) &&
		check_input(fiveKof12->Text) &&
		check_input(fiveKof13->Text) &&
		check_input(fiveKof14->Text) &&
		check_input(fiveKof15->Text) &&
		check_input(fiveFree1->Text) &&
		check_input(fiveKof21->Text) &&
		check_input(fiveKof22->Text) &&
		check_input(fiveKof23->Text) &&
		check_input(fiveKof24->Text) &&
		check_input(fiveKof25->Text) &&
		check_input(fiveFree2->Text) &&
		check_input(fiveKof31->Text) &&
		check_input(fiveKof32->Text) &&
		check_input(fiveKof33->Text) &&
		check_input(fiveKof34->Text) &&
		check_input(fiveKof35->Text) &&
		check_input(fiveFree3->Text) &&
		check_input(fiveKof41->Text) &&
		check_input(fiveKof42->Text) &&
		check_input(fiveKof43->Text) &&
		check_input(fiveKof44->Text) &&
		check_input(fiveKof45->Text) &&
		check_input(fiveFree4->Text) &&
		check_input(fiveKof51->Text) &&
		check_input(fiveKof52->Text) &&
		check_input(fiveKof53->Text) &&
		check_input(fiveKof54->Text) &&
		check_input(fiveKof55->Text) &&
		check_input(fiveFree5->Text))
	{
		int n = 5;
		vector<vector<double>> x(n);
		for (int i = 0; i < n; ++i)
			x[i].resize(n + 1);
		x[0][0] = System::Convert::ToDouble(fiveKof11->Text);
		x[0][1] = System::Convert::ToDouble(fiveKof12->Text);
		x[0][2] = System::Convert::ToDouble(fiveKof13->Text);
		x[0][3] = System::Convert::ToDouble(fiveKof14->Text);
		x[0][4] = System::Convert::ToDouble(fiveKof15->Text);
		x[0][5] = System::Convert::ToDouble(fiveFree1->Text);
		x[1][0] = System::Convert::ToDouble(fiveKof21->Text);
		x[1][1] = System::Convert::ToDouble(fiveKof22->Text);
		x[1][2] = System::Convert::ToDouble(fiveKof23->Text);
		x[1][3] = System::Convert::ToDouble(fiveKof24->Text);
		x[1][4] = System::Convert::ToDouble(fiveKof25->Text);
		x[1][5] = System::Convert::ToDouble(fiveFree2->Text);
		x[2][0] = System::Convert::ToDouble(fiveKof31->Text);
		x[2][1] = System::Convert::ToDouble(fiveKof32->Text);
		x[2][2] = System::Convert::ToDouble(fiveKof33->Text);
		x[2][3] = System::Convert::ToDouble(fiveKof34->Text);
		x[2][4] = System::Convert::ToDouble(fiveKof35->Text);
		x[2][5] = System::Convert::ToDouble(fiveFree3->Text);
		x[3][0] = System::Convert::ToDouble(fiveKof41->Text);
		x[3][1] = System::Convert::ToDouble(fiveKof42->Text);
		x[3][2] = System::Convert::ToDouble(fiveKof43->Text);
		x[3][3] = System::Convert::ToDouble(fiveKof44->Text);
		x[3][4] = System::Convert::ToDouble(fiveKof45->Text);
		x[3][5] = System::Convert::ToDouble(fiveFree4->Text);
		x[4][0] = System::Convert::ToDouble(fiveKof51->Text);
		x[4][1] = System::Convert::ToDouble(fiveKof52->Text);
		x[4][2] = System::Convert::ToDouble(fiveKof53->Text);
		x[4][3] = System::Convert::ToDouble(fiveKof54->Text);
		x[4][4] = System::Convert::ToDouble(fiveKof55->Text);
		x[4][5] = System::Convert::ToDouble(fiveFree5->Text);
		if (delta(x, n) != 0)
		{
			vector<double>res = gauss(x, n);
			fiveX1->Text = System::Convert::ToString(res[0]);
			fiveX2->Text = System::Convert::ToString(res[1]);
			fiveX3->Text = System::Convert::ToString(res[2]);
			fiveX4->Text = System::Convert::ToString(res[3]);
			fiveX5->Text = System::Convert::ToString(res[4]);
		}
		else
			MessageBox::Show("Система имеет бесконечное количество решений или не имеет вовсе!");
	}
	else
		MessageBox::Show("Введены некорректные данные!");
}
};
}