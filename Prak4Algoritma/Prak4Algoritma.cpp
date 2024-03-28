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
}