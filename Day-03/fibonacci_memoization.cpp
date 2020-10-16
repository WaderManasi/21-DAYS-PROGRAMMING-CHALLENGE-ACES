#include<bits/stdc++.h>
using namespace std;
/*
    Memoization method: Top-Down
    Time complexity   : O(n)
*/
long long findNthFibonacci(int,int[]);
long long findNthFibonacci(int number,long long int dp[])
{
   if(dp[number]>0)
   return dp[number];
   
   dp[number]=findNthFibonacci(number-1,dp)+findNthFibonacci(number-2,dp);
   return dp[number];
}
int main()
{
    int number;
    //empty array initialized with zero
    long long dp[100]={0};

    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    cin>>number;
    cout<<findNthFibonacci(number,dp);
    return 0;
}