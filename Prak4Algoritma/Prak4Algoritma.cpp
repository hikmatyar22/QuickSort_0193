#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int nov_count = 0;
int n;

void input() {
	while (true) 
	{
		cout << "Masukan Panjang Element Array : ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum Panjang Array adalah 20" << endl;
	}
	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}