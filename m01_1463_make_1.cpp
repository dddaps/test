// bottom-up
#include <iostream>
using namespace std;

#define MIN(a,b) (a < b ? a : b)
int dp[1000001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;

	dp[0] = 0;
	dp[1] = 0;
	for (int i = 2; i <= t; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0)  dp[i] = MIN(dp[i / 2] + 1, dp[i]);
		if (i % 3 == 0)  dp[i] = MIN(dp[i / 3] + 1, dp[i]);
	}

	cout << dp[t] << '\n';

	return 0;
}