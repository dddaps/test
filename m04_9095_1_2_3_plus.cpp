#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	int t;
	cin >> t;

	int dp[100001];
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	while (t--) {
		int s;
		cin >> s;
		for (int i = 4; i <= s; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		cout << dp[s] << '\n';
	}

	return 0;
}