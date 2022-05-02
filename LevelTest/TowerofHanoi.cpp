#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int from, int by, int to)
{
	if (n == 1)
		cout << from << " " << to << endl;
	else
	{
		hanoi(n - 1, from, to, by);
		cout << from << " " << to << endl;
		hanoi(n - 1, by, from, to);
	}
}

int main()
{
	int n;
	cin >> n;
	int k = pow(2, n) - 1;	//�ּ� �̵� Ƚ�� ���
	cout << k << endl;
	hanoi(n, 1, 2, 3);
}
