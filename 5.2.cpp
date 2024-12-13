#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Podaj rozmiar tablicy: ";
	cin >> n;

	if (n <= 0) {
		cout << "Rozmiar tablicy musi byc wiekszy od zera.";
		return 1;
	}
	int* tablica = new int[n];

	cout << "Podaj " << n << " liczb calkowitych: ";
	for (int i = 0; i < n; ++i) {
		cin >> tablica[i];
	}
	cout << "Elementy tablicy to: ";
	for (int i = 0; i < n; ++i) {
		cout << tablica[i] << " ";
	}

	int left = 0, right = n - 1;
	while (left < right) {
		swap(tablica[left], tablica[right]);

		left++;
		right--;
	}
	cout << "Tablica po zamianie miejscami: ";
	for (int i = 0; i < n; ++i) {
		cout << tablica[i] << " ";

	}
	cout << endl;
	return 0;
}