#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost);
        // if(dp.size() <= 2) return min(dp[dp.size() - 1], dp[dp.size() - 2]);
        // 因为使用cost初始化dp，所以不用检查元素也行
        for(int i = 2; i < dp.size(); i++)
        {
            dp[i] += min(dp[i - 1], dp[i - 2]);
        }
        return min(dp[dp.size() - 1], dp[dp.size() - 2]);
    }
};

int main(void)
{
    return 0;
}