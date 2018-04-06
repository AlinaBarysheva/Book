#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int n, k;
	int str = 1;

	cout << "Введите кол-во строк на странице: ";
	cin >> k;
	cout << "Введите номер искомой строки: ";
	cin >> n;


	str = n%k;
	n = (n / k) + 1;

	if (str == 0) {

		str = k;
		n = n - 1;
	}



	cout << "Ваша страница " << n << endl;
	cout << "Ваша строка " << str << endl;
	
	
	system("pause");
	return 0;

}
