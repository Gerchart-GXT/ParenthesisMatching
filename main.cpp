#include "Check.h"

int main()
{
    std::string s;
    puts("Please input your sequenc:");
    std::cin >> s;
    if (check(s))
        puts("Yes");
    else
        puts("No");
    return 0;
}