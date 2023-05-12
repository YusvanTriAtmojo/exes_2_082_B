#include <iostream>
using namespace std;

int yusfan[114];
int i;
int n;

void input()
{
	while (true)
	{
		cout << "=============";
		cout << "\nPanjang Array";
		cout << "\n=============";
		cout << "\nMasukan panjang dari jumlah array = ";
		cin >> n;

		if ((n > 0) && (n <= 114))
			break;
		else
			cout << "\nPanjang array mainimal satu dan maksimal 114!\n";
	}
	cout << "=====================";
	cout << "\nMasukkan elemen array";
	cout << "\n=====================";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> yusfan[i];
	}
}

void binnarysearch()
{
	int yusvan;
	int atmojo;
	int item;
	int mid;

	cout << "===================";
	cout << "\nElement yang dicari";
	cout << "\n===================";
	cout << "\nMasukan elemen yang ingin dicari = ";
	cin >> item;

	yusvan = 0;
	atmojo = n - 1;

	while (yusvan <= atmojo)
	{
		mid = (yusvan + atmojo) / 2;
		if (yusfan[mid] == item)
		{
			cout << item << "\n(Found) Ditemukan di posisi " << (mid + 1) << "\n" << endl;
			return;
		}
		else if (yusfan[mid] > item)
		{
			atmojo = mid - 1;
		}
		else
		{
			yusvan = mid + 1;
		}
	}
	if (yusvan > atmojo)
	{
		cout << "\nNot Found\n";
	}
}

int main()
{
	input();
	binnarysearch();
	return 0;
}
