#include <iostream>

using namespace std;

void main() 
{
	setlocale(LC_ALL,"");
	/*
	int a;
	int b;
	char c;
	double d;
	cout << "Введите выражение: ";
	cin >> a;
	cin >> c;
	cin >> b;

	switch (c) 
	{
	case '+': d = a+b;
		break;
	case '-': d = a - b;
		break;
	case '/': d = (double)a / b;
		break;
	case '*': d = a * b;
		break;
	default:
		cout << "не знак";

	}
	cout << a << c << b << "=" << d;
	*/

	int n;
	cout << "Введите число: ";
	cin >> n;
	int reverse = 0;
	int boofer = n;
	while (boofer!=0) 
	{
		reverse = (boofer%10) + reverse*10;
		boofer = boofer / 10;
	}
	 bool rez =reverse == n;
	 if (rez == true) 
	 {
		 cout << "ПОЛИНДРОМ";
	 }
	 else 
	 {
		 cout << "не полиндром";
	 }
}