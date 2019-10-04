// Name: Joseph Loiseau
// Intro into Cs
// Period 1
// Mr.Williams
// 2019-10-4-Classwork

#include <iostream>
using namespace std;

int main()
{
	// 3
	float pi = 4 * (1.0 - (1 / 3.0) + (1 / 5.0) - (1 / 7.0) + (1 / 9.0) - (1 / 11.0));
	float pi2 = 4 * (1.0 - (1 / 3.0) + (1 / 5.0) - (1 / 7.0) + (1 / 9.0) - (1 / 11.0) + (1 / 13.0));
	cout << "Pi = " << pi << endl;
	cout << "Pi2 = " << pi2 << endl;

	//4
	float c;
	cout << "Enter a degree in celsius";
	cin >> c;
	float f = (9 / 5.0) * c + 32;
	cout << c << " in Fahrenheit is " << f << endl;

	//Homework
	// Circle
	float perimeter = 2 * 5.5 * pi;
	float area = 5.5 * 5.5 * pi;
	cout << "perimeter = " << perimeter << endl;
	cout << "area = " << area << endl;
	//Rectangle
	float perimeter2 = (2 * 4.5) + (2 * 7.9);
		float area2 = 4.5 * 7.9;
		cout << "perimeter2 =" << perimeter2 << endl;
		cout << "area2 = " << area2 << endl;
}