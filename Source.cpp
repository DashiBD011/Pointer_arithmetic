#include<iostream>

using std::cout;
using std::endl;

int Sum(int n, int value, ...)
{
	int sum = 0;
	int* start = &value;
	for (int i = 0; i < n; i++)
		sum += *start++;
	return sum;
}

int Mul(int value, ...)
{
	int product = 1;
	int* start = &value;
	while (*start != int())
		product *= *start++;
	return product;
}

void main()
{

	setlocale(LC_ALL, "");
	cout<< "Функции с произвольным кол-вом аргументов" << endl;
	cout << "Сумма: " << Sum(5, 3, 5, 8, 11, 14) << endl;
	cout << "Произведение: " << Mul( 5, 8, 11, 14, 0) << endl;
}

