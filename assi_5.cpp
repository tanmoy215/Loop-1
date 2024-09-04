#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=3;i<=pow(12,n-1);i*=4){
        cout<<i<<" ";
    }
    return 0;
}