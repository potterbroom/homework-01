#include<iostream>
using namespace std;
int main()
{
	float a, b, c, sum;
	cin >> a >> b >> c;
	sum = a + b + c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || a == c || b == c)
		{
			cout << "���������ǵ���������" << endl;

			cout << "�������ܳ�= " << sum << endl;
		}
		else
		{
			cout << "�������β��ǵ���������" << endl;

			cout << "�������ܳ�= " << sum << endl;
		}
	}
	else
		cout << "�������β��Ϸ�" << endl;
	return 0;
}
