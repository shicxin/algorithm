#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;
        // vector<int> dp(n + 1);
        // dp[1] = 1, dp[2] = 2;
        // for(int i = 3; i <= n; i++)
        // {
        //     dp[i] = dp[i - 1] + dp[i - 2];
        // }
        int ans = 0, dp1 = 1, dp2 = 2;
        for(int i = 3; i <= n; i++)
        {
            ans = dp1 + dp2;
            dp1 = dp2, dp2 = ans;
        }
        return ans;
    }
};

int main(void)
{
    int n; cin >> n;
    if(n <= 2) cout << n << endl;
    else {
        int dp[n + 1] = {0, 1, 2};
        for(int i = 3; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        cout << dp[n] << endl;
    }
    return 0;
}