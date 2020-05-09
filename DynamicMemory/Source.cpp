#include<iostream>
using namespace std;

template<typename T>
void FillRand(T* arr, T& n);
template<typename T>
void Print(T* arr, T& n);
template<typename T>
void push_back(T*& arr,  T& n, T val);
template<typename T>
void pop_back(T*& arr,  T& n, T val);
template<typename T>
void push_front(T*& arr,  T& n, T val);
template<typename T>
void pop_front(T*& arr,  T& n, T val);
template<typename T>
void insert(T*& arr, T& n, T val, T ind);
template<typename T>
void erase(T*& arr, T& n, T val,T ind);
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Input number of elements: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);
	int value;
	int index;
	cout << "Input value: "; cin >> value;
	//cout << "Input index: "; cin >> index;
	push_back(arr, n, value);
	Print(arr, n);
	delete[] arr;
}
template<typename T>
void FillRand(T* arr,  T& n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
template<typename T>
void Print(T* arr, T& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void push_back(T*& arr, T& n, T value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
	
}
template<typename T>
void pop_back(T*& arr, T& n, T value)
{
	int* buffer = new int[n - 1];
	for (int i = 0; i < n-1; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	n--;
	arr = buffer;
}
template<typename T>
void push_front(T*& arr, T& n, T value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i+1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	
}
template<typename T>
void pop_front(T*& arr, T& n, T value)
{
	int* buffer = new int[n - 1];
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr;
	arr = buffer;
	n--;
}
template<typename T>
void insert(T*& arr, T& n, T value, T index)
{
	int* buffer = new int[n + 1];
	int temp=index;
	for (int i = 0; i < n; i++)
	{
		i >= index ? buffer[i + 1] = arr[i] : buffer[i] = arr[i];	
	}
	delete[] arr;
	arr = buffer;
	arr[index] = value;
	n++;
	
}
template<typename T>
void erase(T*& arr, T& n, T value, T index)
{
	int* buffer = new int[--n];
	int temp=index;
	for (int i = 0; i < n; i++)
	{
		i >= index ? buffer[i] = arr[i+1] : buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	
}