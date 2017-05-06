#define _CRT_SECURE_NO_WARNINGS
#include "menu.h"
#include "Numerics.h"

using namespace Project;
void main(){

	SetConsoleTitle(TEXT("Numerics & Hill"));
	SetSize(80, 25);
	Window().ShowBackground();
	CursorVisible(false);

	Item MenuItem;
	ui main = 0, adition = 0;
	Numerics Calculator;
	Hill_incryption Incrypt;
	
	Menu Main(2, 1, 23, 13, Green, Blue, Blue, LightGray, true);	

	MenuItem.item = "�����������";
	MenuItem.addition = 0;
	MenuItem.main = 1;
	Main.items.Add(MenuItem);
	
	MenuItem.item = "������ ������ �����";
	MenuItem.addition = 1;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "������� ������ �����";
	MenuItem.addition = 1;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "������ ������ �����";
	MenuItem.addition = 1;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "������� ������ �����";
	MenuItem.addition = 1;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "�����������";
	MenuItem.addition = 1;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "������";
	MenuItem.addition = 1;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "��������";
	MenuItem.addition = 1;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "������� ���������";
	MenuItem.addition = 1;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "�����";
	MenuItem.addition = 1;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);


	MenuItem.item = "����� �����";
	MenuItem.addition = 0;
	MenuItem.main = 2;
	Main.items.Add(MenuItem);

	MenuItem.item = "������ ���������";
	MenuItem.addition = 2;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "������ ����";
	MenuItem.addition = 2;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "���������";
	MenuItem.addition = 2;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "�����";
	MenuItem.addition = 2;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "�����";
	MenuItem.addition = 2;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);


	MenuItem.item = "� ����������";
	MenuItem.addition = 0;
	MenuItem.main = 3;
	Main.items.Add(MenuItem);

	MenuItem.item = "�������";
	MenuItem.addition = 3;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "������ � �������";
	MenuItem.addition = 3;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "����������";
	MenuItem.addition = 3;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "����/�����";
	MenuItem.addition = 3;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);
	MenuItem.item = "�����";
	MenuItem.addition = 3;
	MenuItem.main = 0;
	Main.items.Add(MenuItem);	
	
	MenuItem.item = "�����";
	MenuItem.addition = 0;
	MenuItem.main = 4;
	Main.items.Add(MenuItem);
	
	while (true)
	{
		Main.DoMenu();
		main = (Main.GetMain()) ? Main.GetMain() : Main.GetAddition();		
		adition = Main.GetAddition();
		switch (main){
		case 1:
			switch (adition){
			case 1:
				Calculator.Set_Numbers(true, false);				
				break;
			case 2:				
				Calculator.Set_Numbers(true, true);
				break;
			case 3:
				Calculator.Set_Numbers(false, false);
				break;
			case 4:
				Calculator.Set_Numbers(false, true);
				break;
			case 5:
				Calculator.Consider_Sum();
				break;
			case 6:
				Calculator.Consider_Difference();
				break;
			case 7:
				Calculator.Consider_Point();
				break;
			case 8:
				Calculator.Set_System();
				break;
			}
			break;
		case 2:
			Calculator.Clear();
			switch (adition){				
			case 1:
				Incrypt.Set_Incryption_Text(true);
				break;
			case 2:
				Incrypt.Set_Incryption_Text(false);
				break;
			case 3:
				Incrypt.Do_Incryption();
				break;
			case 4:
				Incrypt.ChangeCurrentMode();
				break;
			}
			break;
		case 3:						
			switch (adition){
			case 1:
				Calculator.Show_Information(true);
				break;
			case 2:
				Calculator.Show_Information(false);
				break;					
			case 3:
				Incrypt.Show_Information(true);
				break;
			case 4:
				Incrypt.Show_Information(false);
				break;
			}	
			break;	
		default:			
			return;
		}
	}
};