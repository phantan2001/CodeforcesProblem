#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,a;
    cin >> n;
    
        for(int i = 0; i < n; i++){
            cin >> a;
            int d = 0;
            while(a % 6 == 0){
                d += 1;
                a /= 6;
            }
            while(a % 3 == 0){
                    d += 2;
                    a /= 3;
            }
                if(a == 1) cout << d << "\n";
                else cout << -1 << "\n";
        }
 
    
    return 0;
}