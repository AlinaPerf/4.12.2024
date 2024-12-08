

#include <iostream>
#include <cmath>

int main()
{
	setlocale(0, "ru");

	int a;
	int b;
	int c;
	double D;
	double x;
	double y;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	D = (b * b) - (4 * a * c);

	if (D > 0)
	{
		x = (-b + sqrt(D)) / (2 * a);
		y = (-b + sqrt(D)) / (2 * a);
		std::cout << x << "\n" << y << "\n";
	}
	else if (D == 0)
	{
		x = (-b + sqrt(D)) / (2 * a);
		std::cout << x << "\n";
	}
	else
	{
		std::cout << "Нет решений" << "\n";
	}
}

