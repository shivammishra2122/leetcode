/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=__INT_MAX__;
        int b,c = 0;
         for(int i = 0; i < prices.size(); i++){
            if(prices[i] < a){
                a = prices[i];
            }
            b = prices[i] -a;
            if(c < b){
                c = b;
            }
        }
        return c;
        
    }
};
// @lc code=end

