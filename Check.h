#include <algorithm>
#include <iostream>
#include <string>
const int N = 2e5 + 10;
char stack[N];
int top = 0;
bool check(std::string s)
{
    int ps = 0;
    int len = s.length();
    bool flag = false;
    while (ps < len) {
        if (ps < len && s[ps] == '(')
            stack[++top] = s[ps++];
        if (ps < len && s[ps] == ')') {
            if (top > 0)
                top--;
            else {
                return false;
            }
            ps++;
        }
        if (ps < len && (s[ps] != '(' && s[ps] != ')'))
            ps++;
    }
    return top <= 0;
}