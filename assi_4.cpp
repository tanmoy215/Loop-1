#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=4;i<=3*n-1;i+=3){
        cout<<i<<" ";
    }
    return 0;
}
// 4,7,10,13,16.. upto ‘n’