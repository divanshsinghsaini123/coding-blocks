// Take as input str, a string.
//  Assume that value of a=1, b=2, c=3, d=4, …. z=26.
//   Write a recursive function (return type Arraylist)
//   to print all possible codes for the string.
//   E.g. for “1123” possible codes are aabc, kbc, alc, aaw, kw.

#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int y =0;
string final[1000];
void convert(char *inp, char *out, char* alpha, int i, int j)
{   // base case
    if (inp[i] == '\0')
    {
        out[j] = '\0';
        final[y++]=out;
        // cout << "answer --" << out; cout << endl;
        return;
    }
    // recursive case
    out[j] = alpha[(int)inp[i]-48];
    convert(inp, out, alpha , i + 1, j + 1);
    if (inp[i + 1] != '\0')
    {

        out[j] =alpha[(((int)inp[i]) -48) * 10 + (((int)inp[i + 1]) -48)];
        convert(inp, out, alpha, i + 2, j + 1);
    }
}
int main()
{
    char *inp = new char[100];
    char *out = new char[100];
     char*alpha= new char[100];
    int x=97;
    for(int i =1; i< 27 ; i++){
        alpha[i]=x++;
    }
    cin >> inp;

    convert(inp, out, alpha, 0, 0);
      cout<<"[";
      cout<<final[0];
    for (int i = 1; i < y; i++)
    {
    cout<<", "<<final[i];   
    }
    cout<<"]"<<endl;
    return 0;
}