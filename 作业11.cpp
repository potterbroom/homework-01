#include<iostream>
using namespace std;
int main()
{
	int a, b,p,q ;
	cout << "����������" << endl;
	cin >> a >> b;
	p = a; q = b;
	while (a % b != 0)
	{
		int c = a % b;
		a = b;
		b = c;
	}
	cout << "��С��������" << b << endl;
	cout << "��󹫱�����" << (p*q) / b<< endl;
	return 0;
}

