#include <iostream>
#include <string>
#include <cmath>
using namespace std;
template <class A>
class Info {
public:
	void info_print() {
		cout << тип << endl;
		cout << размер << endl;
		double диапазон = pow(2, (размер * 8));
		cout << "от " << -диапазон / 2 << " до " << диапазон / 2 - 1 << endl;
	}
	Info(A переменная) {
		тип = typeid(переменная).name();
		размер = sizeof(переменная);
	}
private:
	string тип;
	int размер;
};
int main() {
	setlocale(LC_ALL, "rus");
	int a = 10;
	Info<int> объект(a);
	объект.info_print();
}
