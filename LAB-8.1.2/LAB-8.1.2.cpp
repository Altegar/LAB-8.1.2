// LAB-8.1.2.cpp
// Сушинський Ігор
// Лабораторна робота №8.1
// Пошук та заміна символів у літерному рядку.
// Варіант 20
// 1 завдання
// Рекурсивний спосіб

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* str, int i)
{
	if (strlen(str) < 3)
		return 0;

	if (str[i + 1] != 0)
		if (str[i - 1] == ',' && str[i + 1] == '-')
			return 1 + Count(str, i + 1);
		else
			return Count(str, i + 1);
	else
		return 0;
}

int main()
{
	setlocale(LC_ALL, "Ukrainian");

	char str[101];

	cout << "Ввести лiтерний рядок:" << endl;
	cin.getline(str, 100);

	cout << "Лiтерний рядок мiстить " << Count(str, 1) << " групи ', -'" << endl;

	return 0;
}