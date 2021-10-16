#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int n, count = 0;
	double min, ymnoj = 1, minn = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		double x;
		cin >> x;
		min = x;
		if (x < 0 && x != int(x))
		{
			if (min < minn)
			{
				minn = min;
			}
			ymnoj = ymnoj * x;
			count = i;
			
		}
	}
	count += 1;

	cout << ymnoj<< endl;
	cout << minn  << endl;
	cout << count << endl;

	return 0;
}