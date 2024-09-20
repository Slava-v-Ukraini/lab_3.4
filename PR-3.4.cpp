// Lab_03_4.cpp
// <Голуб Мирослав >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 5
#include <iostream>
#include <Windows.h>
#include <cmath>


using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр

	cout << "Введіть значення x = "; cin >> x;
	cout << "Введіть значення y = "; cin >> y;
	cout << "Введіть значення R = "; cin >> R;

	// розгалуження в повній формі
	if (((x * x + y * y <= R * R) && x >= 0 && y >= 0) || (y <= 0 && (x * x + y * y <= R * R)))
		cout << "Точка входить в зафарбовану ділянку графіка" << endl;
	else
		cout << "Точка не входить в зафарбовану ділянку" << endl;
	cin.get();
	return 0;
}