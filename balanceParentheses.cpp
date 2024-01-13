// If N=2 , means their must be 2 opening and 2 closing brackets
// you can not place a closing at 1st place
// you have two cases
// place a opening if no. of opening less then N
// place a closing if no. of closing less then opening ;
// we have to print the all possible combinations
#include <iostream>
using namespace std;
void parentheses(char *a, int i, int o, int c, int n)
{
    // base case
    if (i == 2 * n)
    {
        a[i] = '\0';
        cout << a << endl;
        return;
    }

    // recursive case
    if (o < n)
    {
        a[i] = '(';
        parentheses(a, i + 1, o + 1, c, n);
    }
    if (o > c)
    {
        a[i] = ')';
        parentheses(a, i + 1, o, c + 1, n);
    }
}
int noOfparenthese(int i, int o, int c, int n)
{
    int t = 0;
    // base case
    if (i == 2 * n)
    {
        // t=t+1;
        return 1;
    }
    // recursive case
    if (o < n)
    {
        t = t + noOfparenthese(i + 1, o + 1, c, n);
    }
    if (o > c)
    {
        t = t + noOfparenthese(i + 1, o, c + 1, n);
    }
    return t;
}
int main()
{
    int n;
    cin >> n;
    char a[] = {};
    parentheses(a, 0, 0, 0, n);
    // but if I want to calculate the total number of possible balanced parentheses
    cout << noOfparenthese(0, 0, 0, n);
    return 0;
}