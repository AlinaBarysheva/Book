#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int n, k;
	int str = 1;

	cout << "������� ���-�� ����� �� ��������: ";
	cin >> k;
	cout << "������� ����� ������� ������: ";
	cin >> n;


	str = n%k;
	n = (n / k) + 1;

	if (str == 0) {

		str = k;
		n = n - 1;
	}



	cout << "���� �������� " << n << endl;
	cout << "���� ������ " << str << endl;
	
	
	system("pause");
	return 0;

}