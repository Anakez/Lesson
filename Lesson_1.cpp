#include <iostream>
using namespace std;
int* arr_number(int begin, int end, int n){
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = begin + rand() % (end - begin + 1);
		end = end - 1;

	}
	return arr;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int begin, end, n;
	cout << "������� ������ ������� ����������: ";
	cin >> begin;
	cout << "������� ������� ������� ����������: ";
	cin >> end;
	cout << "������� ������� ������ ������������������ ����� �������������: ";
	cin >> n;
	int* create_arr = arr_number(begin, end, n);
	cout << "������������������ �����: ";
	for (int i = 0; i < n; i++)
		cout << create_arr[i] << " ";
	cout << endl;
	delete[] create_arr;
	return 0;
}