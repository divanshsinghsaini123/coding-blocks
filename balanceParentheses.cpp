// If N=2 , means their must be 2 opening and 2 closing brackets 
   // you can not place a closing at 1st place 
   // you have two cases 
        // place a opening if no. of opening less then N
        // place a closing if no. of closing less then opening ;
// we have to print the all possible combinations
#include<iostream>
using namespace std;
int noOfparenthese(int i,int o,int c , int n){
    // base case 
    int t;
    if (i==2*n)
    {
        // t=t+1;
        return 1;
    }
        
        // cout<<"hello"<<endl;
    // recursive case
    if (o<n)
    {
        t= t+noOfparenthese(i+1,o+1,c,n);
    }
    if (o>c)
    {
         t=t+ noOfparenthese(i+1,o,c+1,n);
    }
    return t;
   
}

int main(){
    int n;
    cin>>n;
    char a[]={};
    parentheses(a,0,0,0,n);
    
    // but if I want to calculate the total number of possible balanced parentheses 
    cout<<noOfparenthese(0,0,0,n);



    return 0;
}
