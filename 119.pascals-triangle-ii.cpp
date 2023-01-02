/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
        
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1, 0);
        ans[0] = 1;
        for(int i = 1; i <= rowIndex; i++) {
            ans[i] =  (long long ) ans[i-1] * (rowIndex-i+1) / i;
        }
        return ans;        
    }
};
// @lc code=end

