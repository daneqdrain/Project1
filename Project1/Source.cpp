#include <iostream>
#include <Windows.h>
int main()
{
	setlocale(LC_ALL, "ru");

	/* 
	
		��������������: + - / * % =-������������� 
		�������������: > < == <= >= !=
		����������: && ||
	   
	*/

	double one, two;
	char simvol;

	one = 0;
	two = 0;

	std::cout << "������� ������ �����: ";
	std::cin >> one;
	std::cout << "������� + ��� - , ��� * , ��� / ";
	std::cin >> simvol;
	std::cout << "������� ������ �����: ";
	std::cin >> two;

	if (simvol == '+')
	{
		std::cout << "�����: " << one + two;
	}
	else if (simvol == '-')
	{
		std::cout << "��������: " << one - two;
	}
	else if (simvol == '*')
	{
		std::cout << "���������: " << one * two;
	}
	else if (simvol == '/')
	{
		if (two == 0)
		{
			std::cout << "������� �� 0 ������!";
			return 0;
		}
		std::cout << "�������: " << one / two;
	}
	else
	{
		std::cout << "�������� ������!";
	}

	/*int agra = 0;

	std::cout << "������� ����� >> ";
	std::cin >> agra;
	
	if (agra > 0) std::cout << "������";

	else if (agra < 0) std::cout << "����";

	else std::cout << "�����";*/

	return 0;
}