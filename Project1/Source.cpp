#include <iostream>
#include <Windows.h>
int main()
{
	setlocale(LC_ALL, "ru");

	/* 
	
		Математические: + - / * % =-присваиватель 
		Сравнительные: > < == <= >= !=
		Логические: && ||
	   
	*/

	double one, two;
	char simvol;

	one = 0;
	two = 0;

	std::cout << "Введите первое число: ";
	std::cin >> one;
	std::cout << "Введите + или - , или * , или / ";
	std::cin >> simvol;
	std::cout << "Введите второе число: ";
	std::cin >> two;

	if (simvol == '+')
	{
		std::cout << "Сумма: " << one + two;
	}
	else if (simvol == '-')
	{
		std::cout << "Разность: " << one - two;
	}
	else if (simvol == '*')
	{
		std::cout << "Умножение: " << one * two;
	}
	else if (simvol == '/')
	{
		if (two == 0)
		{
			std::cout << "Деление на 0 нельзя!";
			return 0;
		}
		std::cout << "Деление: " << one / two;
	}
	else
	{
		std::cout << "Неверный символ!";
	}

	/*int agra = 0;

	std::cout << "Введите число >> ";
	std::cin >> agra;
	
	if (agra > 0) std::cout << "Привет";

	else if (agra < 0) std::cout << "Пока";

	else std::cout << "Повар";*/

	return 0;
}