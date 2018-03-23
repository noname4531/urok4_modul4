#include<iostream>
#include<locale.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	cout << "Ведите номер задание :" << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		//Написать программу поиска чисел, лежащих в интервале от - 5 до 5, в последовательности чисел, 
		//вводимых с клавиатуры, предшествующих первому введенному нулю.
		//Контрольный пример : 1, 10, -4, 5, -16, -5, 0.

		int num;
		for (int i = -5; i <= 5; i++)
		{
			cin >> num;
		}
	}break;
	case 2:
	{
		//Вычислить сумму чисел от 1 до N, возведенных в степень M.
		//Возведение в степень оформить как многократное умножение

		int sum = 0, n, m;
		cin >> n >> m;
		n++;
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				i *= i;
			sum += i;
		}
		cout << "summa=" << sum << endl;

	}break;
	case 3:
	{
		//Дано натуральное число n(n<9999) и число m.Найти сумму m - последних цифр числа n.
		int sum = 0;
		int n; cin >> n;
		int m; cin >> m;

		while (m--)
		{
			sum += n % 10;
			n / 10;
		}
		cout << sum << endl;

	}break;
	case 4:
	{
		//У студента имеются накопления S тенге.Ежемесячная стипендия составляет А тенге, 
		//а расходы на проживание превышают ее и составляют B тенге.
		//в месяц Рост цен ежемесячно увеличивает расходы на 3 % .
		//Определить, сколько месяцев сможет прожить студент, используя только накопления и стипендию.
		int nak, step, ras, sum, g, proc_ras;
		int mes;
		cout << "накопления=";
		cin >> nak;
		cout << "степендия=";
		cin >> step;
		cout << "расходы=";
		cin >> ras;
		for (int i = 1; i <= 12; i++)
		{
			sum = nak + step;
			g = (ras * 3) / 100;
			proc_ras = g + ras;


		}

		cout << "sum=" << sum << endl;
		cout << "3% =" << g << endl;
		cout << "ras+g=" << proc_ras << endl;



	}break;
	case 5:
	{
		//Натуральное число из n цифр является число Армстронга, если сумма его цифр возведенных 
		//в n - ую степень равна самому числу.Получите все  эти числа состоящие из
		//трех и четырех цифр(пример 1³ + 5³ + 3³ = 153).
		double sum = 0;
		int count = 0, max, temp;
		cin >> max;
		for (int i = 0; i < max; i++)
		{
			temp = i;
			while (temp != 0)
			{
				temp = temp / 10;
				++count;
			}
			temp = i;
			while (temp)
			{
				sum += pow(temp % 10, count);
				temp = temp / 10;
			}
			if (sum == i) cout << i << endl;
			sum = 0; count = 0;
		}
	}
	break;
	case 6:
	{
		//Найти все числа кратные семи, и сумма цифр которых также кратна семи
		int sum = 0;
		for (int i = 7; i < 99; i++)
		{
			sum = sum + i;
			if ((i % 7 == 0) && ((sum % 7) == 0))
			{
				cout << "числа =" << i << endl;

			}

		}
		cout << "cумма=" << sum << endl;


	}break;
	case 7:
	{
		//Перевести целое число из десятичной системы счисления в восьмеричную, используя алгоритм деления на 8.
		int n;
		cin >> n;
		int s, d;
		s = n / 8;
		d = n % 8;
		cout << s << d;
		while (s > 8);


	}break;
	}
}
