// Lab_03_4.cpp
// <����� �������� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 5
#include <iostream>
#include <Windows.h>
#include <cmath>


using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������

	cout << "������ �������� x = "; cin >> x;
	cout << "������ �������� y = "; cin >> y;
	cout << "������ �������� R = "; cin >> R;

	// ������������ � ����� ����
	if (((x * x + y * y <= R * R) && x >= 0 && y >= 0) || (y <= 0 && (x * x + y * y <= R * R)))
		cout << "����� ������� � ����������� ������ �������" << endl;
	else
		cout << "����� �� ������� � ����������� ������" << endl;
	cin.get();
	return 0;
}