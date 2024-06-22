#include <iostream>
using namespace std;
void insert(int b[], int i)
{
	if (i <= 0)
		return;
	insert(b, i - 1);
	cin >> b[i - 1];
}
void show(int b[], int i)
{
	if (i <= 0)
		return;
	show(b, i - 1);
	cout << b[i - 1] << "\t";
}
void main()
{
	int a[5];
	insert(a, 5);
	show(a, 5);
	system("pause");
}
