#include<bits/stdc++.h>
using namespace std;
int main(){
    // cout<<"hello world";
    int n,rem,rev=0;
    cin>>n;
    while(n!=0){
      rem=n%10;
      rev=rev*10+rem;
      rev/=10;
    }
    cout<<rev;
    return 0;
}