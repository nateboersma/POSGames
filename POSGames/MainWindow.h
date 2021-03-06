#pragma once

namespace POSGames {

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(254, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(426, 79);
			this->label1->TabIndex = 0;
			this->label1->Text = L"POS Games";
			this->label1->Click += gcnew System::EventHandler(this, &MainWindow::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(477, 317);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(291, 103);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Game #1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(477, 179);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(291, 103);
			this->button2->TabIndex = 2;
			this->button2->Text = L"GO!";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(133, 307);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(291, 103);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Memory";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainWindow::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(133, 452);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(291, 103);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Three Card Monte";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainWindow::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(133, 179);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(291, 103);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Space Invaders";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(477, 452);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(291, 103);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Pong";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainWindow::button6_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(949, 686);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainWindow";
			this->Text = L"POS GAMES MAIN WINDOW";
			this->ResumeLayout(false);
			this->PerformLayout();
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide(); 
		POSGames::Game1 Game1WindowObject;
		Game1WindowObject.StartPosition = System::Windows::Forms::FormStartPosition::Manual;
		Game1WindowObject.Location = this->Location; 
		Game1WindowObject.ShowDialog();
		this->Location = Game1WindowObject.Location; 
		this->Show(); 
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		POSGames::GoGame GoGameWindowObject;
		GoGameWindowObject.StartPosition = System::Windows::Forms::FormStartPosition::Manual;
		GoGameWindowObject.Location = this->Location;
		GoGameWindowObject.ShowDialog();
		this->Location = GoGameWindowObject.Location;
		this->Show();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		POSGames::Memory MemoryWindowObject;
		MemoryWindowObject.StartPosition = System::Windows::Forms::FormStartPosition::Manual;
		MemoryWindowObject.Location = this->Location;
		MemoryWindowObject.ShowDialog();
		this->Location = MemoryWindowObject.Location; 
		this->Show();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		POSGames::ThreeCardMonte ThreeCardMonteWindowObject;
		ThreeCardMonteWindowObject.StartPosition = System::Windows::Forms::FormStartPosition::Manual;
		ThreeCardMonteWindowObject.Location = this->Location;
		ThreeCardMonteWindowObject.ShowDialog();
		this->Location = ThreeCardMonteWindowObject.Location;
		this->Show();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		POSGames::SpaceInvaders SpaceInvadersWindowObject;
		SpaceInvadersWindowObject.StartPosition = System::Windows::Forms::FormStartPosition::Manual;
		SpaceInvadersWindowObject.Location = this->Location;
		SpaceInvadersWindowObject.ShowDialog();
		this->Location = SpaceInvadersWindowObject.Location;
		this->Show();
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		POSGames::Pong PongWindowObject;
		PongWindowObject.StartPosition = System::Windows::Forms::FormStartPosition::Manual;
		PongWindowObject.Location = this->Location;
		PongWindowObject.ShowDialog();
		this->Location = PongWindowObject.Location;
		this->Show();
}
};
}
