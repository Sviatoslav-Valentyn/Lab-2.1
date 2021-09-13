// Main.cpp
// Гвоздик Святослав-Валентин
// Лабораторна робота № 2.1
// Варіант 6

#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x;	// вхідний параметр
	double y;	//результат обчислення 1-го виразу
	double y1;  //результат обчислення 2-го виразу

	std::cout << "Введіть значення першої змінної(x): "; std::cin >> x;

	y = (std::cos(x) + std::cos(2 * x) + std::cos(6 * x) + std::cos(7 * x));  //cosx + cos2x + cos6x + cos7x

	y1 = 4 * cos(x / 2) * std::cos((5. / 2) * x) * std::cos(4 * x);	 //	z2=4cos(x/2) cos(5/2)x cos4x	

	std::cout << "Результат першого виразу: " << y << std::endl;
	std::cout << "Результат другого виразу: " << y1 << std::endl;
}