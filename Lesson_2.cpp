#include <iostream>
using namespace std;
int* arr_number(int begin, int end, int n) {
	int j,k;
	int* arr = new int[n];
	int* random = new int[end - begin];
	arr[0] = begin;
	for (int i = 1; i < end - begin; i++)
		random[i] = random[i - 1] + 1;
	for (int i = 0; i < end - begin; i++) {
		j = rand() % (end - begin);
		k = random[i];
		random[i] = random[j];
		random[j] = k;
	}
	for (int i = 0; i < n; i++)
		arr[i] = random[i];
	return arr;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int begin, end, n;
	cout << "Введите нижнюю границу генератора: ";
	cin >> begin;
	cout << "Введите верхнюю границу генератора: ";
	cin >> end;
	cout << "Введите сколько членов последовательности нужно сгенерировать: ";
	cin >> n;
	int* create_arr = arr_number(begin, end, n);
	cout << "Последовательность чисел: ";
	for (int i = 0; i < n; i++)
		cout << create_arr[i] << " ";
	cout << endl;
	delete[] create_arr;
	return 0;
}