#include <iostream>
#include <string>
#include <cctype>
#include <bits/stdc++.h>
using namespace std;
int NumberSearch(string str)
{
    int sum = 0;
    int letterCount = 0;

    for (size_t i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (isdigit(ch))
        {
            sum += ch - '0';
        }
        else if (isalpha(ch))
        {
            letterCount++;
        }
    }

    int temp = round(static_cast<double>(sum) / letterCount);

    return temp;
}

int main()
{
    string input = "Hello6 9World 2, Nic8e D7ayl";
    cout << NumberSearch(input) << endl;
    return 0;
}
