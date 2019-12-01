#pragma once
#include "Functions.h"
#include <string>

using namespace std;

namespace WinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  n_Text;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;





	private: ZedGraph::ZedGraphControl^  zedGraphControl2;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->n_Text = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-1, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1067, 619);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->n_Text);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1059, 593);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тестовая задача";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(547, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(509, 296);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(547, 308);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(505, 279);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(162, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 60);
			this->button1->TabIndex = 3;
			this->button1->Text = L"СТАРТ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(9, 72);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(532, 515);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"№ узла";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Xi";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"U(Xi)";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"V(Xi)";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"|U(Xi)-V(Xi)|";
			this->Column5->Name = L"Column5";
			// 
			// n_Text
			// 
			this->n_Text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n_Text->Location = System::Drawing::Point(56, 37);
			this->n_Text->Name = L"n_Text";
			this->n_Text->Size = System::Drawing::Size(100, 29);
			this->n_Text->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(18, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"n=";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->zedGraphControl2);
			this->tabPage2->Controls->Add(this->zedGraphControl1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1059, 593);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Графики тестовой задачи";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->IsShowPointValues = false;
			this->zedGraphControl2->Location = System::Drawing::Point(546, 107);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->PointValueFormat = L"G";
			this->zedGraphControl2->Size = System::Drawing::Size(506, 490);
			this->zedGraphControl2->TabIndex = 1;
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->IsShowPointValues = false;
			this->zedGraphControl1->Location = System::Drawing::Point(-4, 6);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->PointValueFormat = L"G";
			this->zedGraphControl1->Size = System::Drawing::Size(544, 591);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(335, 22);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(185, 33);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1067, 622);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		GraphPane^ panel1 = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;

		panel1->CurveList->Clear();
		panel2->CurveList->Clear();

		panel1->Title = "Решения u(x) и v(x)";
		panel1->XAxis->Title = "X";
		panel1->YAxis->Title = "U(x)";

		panel2->Title = "Погрешность |u(x)-v(x)|";
		panel2->XAxis->Title = "X";
		panel2->YAxis->Title = "|U(x)-V(x)|";

		PointPairList^ f1_list = gcnew PointPairList();
		PointPairList^ f2_list = gcnew PointPairList();
		PointPairList^ g_list = gcnew PointPairList();

		int n = Convert::ToInt32(n_Text->Text);
		double h = 1.0 / n;
		double s = h / 2;
		double *x;
		double *fi;
		double *d;
		double *a;
		double *u;
		double *v;
		double *alpha, *beta;
		double Epsilon1 = 0.0;
		double xEpsilon;
		x = new double[n + 1];
		fi = new double[n];
		d = new double[n];
		a = new double[n + 1];
		v = new double[n + 1];
		u = new double[n + 1];
		alpha = new double[n + 1];
		beta = new double[n + 1];
		v[0] = 1.0;
		v[n] = 0.0;
		a[0] = -1.0;
		d[0] = -1.0;
		fi[0] = -1.0;
		alpha[0] = -1.0;
		beta[0] = -1.0;
		alpha[1] = 0.0;
		beta[1] = 1.0;
		string ref = "";
		
		dataGridView1->Rows->Clear();

		for (int i = 0; i <= n; i++)
		{
			x[i] = i*h;
		}
		for (int i = 1; i <= n - 1; i++)
		{
			if (x[i] + s <= 0.3)
			{
				fi[i] = 1;
				d[i] = 0.3;
			}
			else
			{
				if (x[i] - s >= 0.3)
				{
					fi[i] = sin(0.3*M_PI);
					d[i] = 0.09;
				}
				else
				{
					fi[i] = (1 / h)*((0.3 - x[i] - s) + sin(0.3*M_PI)*(x[i] + s - 0.3));
					d[i] = (1 / h)*(0.3*(0.3 - x[i] - s) + 0.09*(x[i] + s - 0.3));
				}
			}
		}
		for (int i = 1; i <= n; i++)
		{
			if (x[i] <= 0.3)
			{
				a[i] = 2.09;
			}
			else
			{
				if (x[i - 1] >= 0.3)
				{
					a[i] = 0.09;
				}
				else
				{
					a[i] = pow((1 / h)*((1 / 2.09)*(0.3 - x[i - 1]) + (1 / 0.09)*(x[i] - 0.3)), -1);
				}
			}
		}

		for (int i = 1; i <= n - 1; i++)
		{
			double Ai = a[i] / (h*h);
			double Bi = a[i + 1] / (h*h);
			double Ci = ((a[i] + a[i + 1]) / (h*h)) + d[i];

			alpha[i + 1] = Bi / (Ci - alpha[i] * Ai);
			beta[i + 1] = (fi[i] + Ai*beta[i]) / (Ci - alpha[i] * Ai);
		}

		for (int i = n - 1; i >= 1; i--)
		{
			v[i] = alpha[i + 1] * v[i + 1] + beta[i + 1];
		}

		for (int i = 0; i <= n ; i++)
		{
			if (x[i] <= 0.3)
			{
				u[i] = u1(x[i]);
			}
			else
			{
				u[i] = u2(x[i]);
			}

			f1_list->Add(x[i], u[i]);
			f2_list->Add(x[i], v[i]);
			g_list->Add(x[i], abs(u[i] - v[i]));

			if (abs(u[i] - v[i]) > Epsilon1)
			{
				Epsilon1 = abs(u[i] - v[i]);
				xEpsilon = x[i];
			}

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x[i];
			dataGridView1->Rows[i]->Cells[2]->Value = u[i];
			dataGridView1->Rows[i]->Cells[3]->Value = v[i];
			dataGridView1->Rows[i]->Cells[4]->Value = abs(u[i] - v[i]);
		}

		LineItem Curve1 = panel1->AddCurve("Точное решение u(x)", f1_list, Color::Red, SymbolType::None);
		LineItem Curve2 = panel1->AddCurve("Численное решение v(x)", f2_list, Color::Black, SymbolType::None);
		LineItem Curve3 = panel2->AddCurve("График погрешности", g_list, Color::Red, SymbolType::None);

		panel1->XAxis->Min = -0.01;
		panel1->XAxis->Max = 1.05;
		panel2->XAxis->Min = -0.05;
		panel2->XAxis->Max = 1.05;

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();

		char str[100];

		ref += "Справка\r\n";
		ref += "«Для решения задачи использована равномерная сетка с числом разбиений n = ";
		sprintf_s(str, "%d", n);
		ref += str;
		ref += "; задача должна быть решена с погрешностью не более E=0.5*10^-6; задача решена с погрешностью E1=";
		sprintf_s(str, "%.5e", Epsilon1);
		ref += str;
		ref += "; максимальное отклонение аналитического и численного решений наблюдается в точке x=";
		sprintf_s(str, "%.6lf", xEpsilon);
		ref += str;
		ref += "\r\n";
		textBox2->Text = gcnew String(ref.c_str());
	}
};
}
