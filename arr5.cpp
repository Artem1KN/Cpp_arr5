#include <iostream>
using namespace std;

int main() {
	int n, k, m;
	cin >> n;
	k = 0;
	m = 0;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << "***" << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << " " << endl;
	cout << "***" << endl;

	m = arr[0];

	for (int i = 0; i < n; i++) {
		for (int j = arr[i + 1]; j < n; j++) {
			if (arr[i] > 0) {
				k = arr[j];
				if (k >= 0 and k != arr[0] and arr[j] < arr[0]) {
					m = j;
				}
			}
		}
	}
	cout << m + 1;
	/*for (int i = 0; arr[i] <= m + 1; i++) {
		m += arr[i];
	}
	cout << m + 1;
	while (k != n, arr[k + 1] <= m + 1) {
		m = m + arr[k + 1];
		k = k + 1;
	}
	cout << m+1;*/

	return 0;
}