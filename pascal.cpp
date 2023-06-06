#include <bits/stdc++.h>
#define ll long long
vector<vector<long long int>> printPascal(int n) 
{
   vector<vector<ll>>ans(n);
       for(ll i =0;i<n;i++){
           ans[i].resize(i+1);
           ans[i][0] = ans[i][i] = 1;
           for(ll j =1;j<i;j++){
               ans[i][j] = ans[i-1][j-1] +  ans[i-1][j];
               //1
               //1 1  one is i-1, j-1 and other is i-1,j   
           }
       }
        return ans;
}
