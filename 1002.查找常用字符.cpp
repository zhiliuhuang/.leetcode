/*
 * @lc app=leetcode.cn id=1002 lang=cpp
 *
 * [1002] 查找常用字符
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
  vector<int> minfreq(26, INT_MAX);
        vector<int> freq(26);
        for (const string& word: A) {
            fill(freq.begin(), freq.end(), 0);
            for (char ch: word) {
                ++freq[ch - 'a'];
            }
            for (int i = 0; i < 26; ++i) {
                minfreq[i] = min(minfreq[i], freq[i]);
            }
        }

        vector<string> ans;
        for (int i = 0; i < 26; ++i) {
            for (int j = 0; j < minfreq[i]; ++j) {
                ans.emplace_back(1, i + 'a');
            }
        }
        return ans;
    }
};
// @lc code=end

