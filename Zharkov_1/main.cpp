#include <iostream>

using namespace std;

int count(int r)
{
	int a = 0;
	for (int x = -r; x <= r; x++)
	{
		for (int y = -r; y <= r; y++)
		{
			if (x * x + y * y <= r * r)
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

	cout << "Какой радиус проверить? ";
	int r;
	cin >> r;

	cout << "Круг с радиусом " << r << " имеет " << count(r) << " целых точек\n";

	system("pause");

	return 0;
}
