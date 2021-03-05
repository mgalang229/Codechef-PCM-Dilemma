#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		// just check if string contains 'P', 'C', and 'M'
		cout << (s == "CMP" ? "YES" : "NO") << '\n';
	}
	return 0;
}
