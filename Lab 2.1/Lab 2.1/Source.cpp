// Main.cpp
// ������� ���������-��������
// ����������� ������ � 2.1
// ������ 6

#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x;	// ������� ��������
	double y;	//��������� ���������� 1-�� ������
	double y1;  //��������� ���������� 2-�� ������

	std::cout << "������ �������� ����� �����(x): "; std::cin >> x;

	y = (std::cos(x) + std::cos(2 * x) + std::cos(6 * x) + std::cos(7 * x));  //cosx + cos2x + cos6x + cos7x

	y1 = 4 * cos(x / 2) * std::cos((5. / 2) * x) * std::cos(4 * x);	 //	z2=4cos(x/2) cos(5/2)x cos4x	

	std::cout << "��������� ������� ������: " << y << std::endl;
	std::cout << "��������� ������� ������: " << y1 << std::endl;
}