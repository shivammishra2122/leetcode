#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string A, string s = {}) {
        for (auto c: A)
            if      (c == '(') s.push_back(')');
            else if (c == '[') s.push_back(']');
            else if (c == '{') s.push_back('}');
            else if (s.empty() || c != s.back())
                return false;
            else
                s.pop_back();
        return s.empty();
    }
};

int main() {
    Solution sol;
    string input;
    cin >> input;
    if (sol.isValid(input))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}


