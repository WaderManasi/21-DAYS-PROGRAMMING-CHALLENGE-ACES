#include <bits/stdc++.h>
#define lli long long int
using namespace std;
/*
    Tabulation method: Bottom Up
    Time complexity  : O(n)
*/
long long findNthFibonacci(int number)
{
    long long int fd[number-1];
    fd[0]=0;
    fd[1]=1;
    fd[2]=1;
    if(number ==1 || number==0 || number==2)
    return fd[number];
    for(int i=3;i<=number;i++)
    {
        fd[i]=fd[i-1]+fd[i-2];
    }
    return fd[number];
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int no;
    cin>>no;
    cout<<findNthFibonacci(no);
	return 0;
}
