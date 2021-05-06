#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, x;
		cin >> n >> x;
		vector<int> w(n);
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> w[i];
			sum += w[i];
		}
		// if the sum is x, we cannot avoid the explosion
		if (sum == x) {
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
		// otherwise, the answer always exists
		// we will keep adding elements from left to right
		// if we can't add element i, we add element i + 1 first by swapping the two
		for (int i = 0; i < n; i++) {
			if (x == w[i]) {
				// i + 1 will always be less than n because otherwise, the total sum would be x
				swap(w[i], w[i + 1]);
			}
			cout << w[i] << " ";
			x -= w[i];
		}
		cout << '\n';
	}
	return 0;
}
