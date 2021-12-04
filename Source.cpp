#include <iostream>
using namespace std;

int main() {
	int n,k,m;
	cin >> n;
	k = 0;
	m = 0;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << "***"<< endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << " " << endl;
	cout << "***" << endl;

	for (int i = 0; arr[i] <= m + 1; i++) {
		m += arr[i];
	}
	cout << m + 1;
	/*while (k != n, arr[k + 1] <= m + 1) {
		m = m + arr[k + 1];
		k = k + 1;
	}
	cout << m+1;*/

	return 0;
}