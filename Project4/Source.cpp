#include <iostream>
using namespace std;

int main()
{
	int n;
	double x = 1.0;

	cout << "Enter n: ";
	cin >> n;

	while(n > 0)
	{
		x *= ((n + (n - 1.0)) / n);
		n--;
	}

	cout << "x = " << x << endl;

	system("Pause");
	return 0;
}
