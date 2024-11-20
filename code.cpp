#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "uk_UA");
	int size1;
	int size2;
	cout << "Введіть розмір першого масиву" << ": ";
	cin >> size1;
	cout << "Введіть розмір другого масиву" << ": ";
	cin >> size2;
	int* arr1 = new int[size1];
	int* arr2 = new int[size2];
	cout << "Введіть елементи першого масиву:" << endl;
	for (int i = 0; i < size1; i++) {
		cin >> arr1[i];
	}
	cout << "Введіть елементи другого масиву:" << endl;
	for (int i = 0; i < size2; i++) {
		cin >> arr2[i];
	}
	int* combined = new int[size1 + size2];
	for (int i = 0; i < size1; i++) {
		combined[size1 + i] = arr2[i];
	}
	cout << "Об'єднаний масив:" << endl;
	for (int i = 0; i < size1 + size2; i++) {
		cout << combined[i] << " ";

	}
	cout << endl;
	delete[]arr1;
	delete[]arr2;
	delete[]combined;

	return 0;
}
