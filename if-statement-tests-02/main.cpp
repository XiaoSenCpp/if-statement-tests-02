#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	int num;
	string number[10]{ "��", "һ" ,"��", "��", "��", "��", "��", "��", "��","��" };

	cout << "������[0-9]������:";
	cin >> num;
	if (num >= 0 && num <= 9) {
		cout << number[num] << endl;
	}

	system("pause");
	return 0;
}