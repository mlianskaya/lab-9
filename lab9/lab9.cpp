#include <iostream>
#include <string>
using namespace std;

template <typename T>
T sum(T* arr, int size)
{
	T sum = arr[0];
	for (int i = 1; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int main()
{
	int arrInt[] = { 1,2,3,4,5 };
	double arrDouble[] = { 1.1,1.2,1.3,1.4,1.5 };
	string arrString[] = { "Hello", " ", "world", "!" };

	cout << "Sum of integers: " << sum(arrInt, 5) << endl;
	cout << "Sum of doubles: " << sum(arrDouble, 5) << endl;
	cout << "Concatenated string: " << sum(arrString, 4) << endl;

	return 0;
}