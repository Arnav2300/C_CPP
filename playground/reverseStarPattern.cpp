//https://www.codechef.com/CCSTART2/problems/REVSTRPT
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        
        cout<<"\n";
    }
    return 0;
}