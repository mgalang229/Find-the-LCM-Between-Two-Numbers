#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	int m = max(a, b);
	do {
		if(m % a == 0 && m % b == 0) {
			cout << m;
			break;
		}
		else {
			++m;
		}
	} while(1);
	cout << "\n";
	return 0;
}
