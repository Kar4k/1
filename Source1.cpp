#include <iostream>
#include <string>
#include <cmath>
using namespace std;
template <class A>
class Info {
public:
	void info_print() {
		cout << ��� << endl;
		cout << ������ << endl;
		double �������� = pow(2, (������ * 8));
		cout << "�� " << -�������� / 2 << " �� " << �������� / 2 - 1 << endl;
	}
	Info(A ����������) {
		��� = typeid(����������).name();
		������ = sizeof(����������);
	}
private:
	string ���;
	int ������;
};
int main() {
	setlocale(LC_ALL, "rus");
	int a = 10;
	Info<int> ������(a);
	������.info_print();
}
