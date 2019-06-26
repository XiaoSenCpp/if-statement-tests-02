#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	int num;
	string number[10]{ "零", "一" ,"二", "三", "四", "五", "六", "七", "八","九" };

	cout << "请输入[0-9]的数字:";
	cin >> num;
	if (num >= 0 && num <= 9) {
		cout << number[num] << endl;
	}

	system("pause");
	return 0;
}