#include <iostream>

using namespace std;

int count(int r)
{
	int a = 0;
	for (int x = -r; x <= r; x++)
	{
		for (int y = -r; y <= r; y++)
		{
			if (sqrt(x * x + y * y) <= r)
			{
				a++;
			}
		}
	}
	return a;
}

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программа выполнил студент Жарков УМЛ - 112\n";
	cout << "Программа определения количества целых точек внутри круга\n";

	//Результаты совпадают с гипотезой Гаусса.
	//https://ru.wikipedia.org/wiki/%D0%9F%D1%80%D0%BE%D0%B1%D0%BB%D0%B5%D0%BC%D0%B0_%D0%BA%D1%80%D1%83%D0%B3%D0%B0_%D0%93%D0%B0%D1%83%D1%81%D1%81%D0%B0

	cout << "Какой радиус проверить? ";
	int r;
	cin >> r;

	cout << "Круг с радиусом " << r << " имеет " << count(r) << " целых точек\n";

	system("pause");

	return 0;
}
