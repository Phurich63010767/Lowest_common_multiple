#include<iostream>
using namespace std;

int main()
{
	int x, y , i;
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;
	cout << endl;
	if (x > y)
	{
		i = x;
		LOOP:
		if ((i % x == 0) && (i % y == 0))
		{
			cout << "Lowest common multiple: "<< i;
		}
		else
		{
			i++;
			goto LOOP;
		}
	}
	if (y > x)
	{
		i = y;
	LOOP1:
		if ((i % y == 0) && (i % x == 0))
		{
			cout << "Lowest common multiple: "<< i;
		}
		else
		{
			i++;
			goto LOOP1;
		}
	}
	if (x == y)
	{
		cout << "Lowest common multiple: "<< x;
	}
	cout << endl;
	system("pause");
	return 0;
}