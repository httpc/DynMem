#include <iostream>
using namespace std;

void FillRand(int** arr, const int m, const int n);

void main()
{
	int n, m;
	cout << "Input number of rows: "; cin >> m;
	cout << "Input number of cols: "; cin >> n;

	int** arr = new int* [m];
		for (int i = 0; i < m; ++i)
		{
			arr[i] = new int [n]
			{

			};
		}
		FillRand(arr, m, n);
		
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << arr[i][j] << "\t";
			}
			cout << "\n";
		}
		for (int i = 0; i < m; ++i)
		{
			delete[] arr[i];
		}
}

void FillRand(int** arr, const int m, const int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			arr[i][j] = rand() % 100;
		}
	}
}