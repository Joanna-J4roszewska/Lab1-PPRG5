#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cout << "Podaj liczbe elementow wektora: ";
	cin >> n;

	vector<double> wektor(n);

	for (int i = 0; i < n; ++i) {
		cout << "Podaj " << i + 1 << "-szy element wektora:";
		cin >> wektor[i];
	}
	double max_wartosc = wektor[0];
	int max_indeks = 0;

	for (int i = 1; i < n; ++i) {
		if (wektor[i] > max_wartosc) {

			max_wartosc = wektor[i];
			max_indeks = i;
		}
	}
	cout << "Wartosc maksymalna: " << max_wartosc << endl;
	cout << "Indeks elementu maksymalnego: " << max_indeks << endl;
	return 0;
}