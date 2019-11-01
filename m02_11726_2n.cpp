#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	int t;
	cin >> t;

	int dp[100001];
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i < t + 1; i++) {
		dp[i] = dp[i - 1] % 10007 + dp[i - 2] % 10007;
	}

	cout << '\n'<<dp[t] % 10007;

	return 0;
}