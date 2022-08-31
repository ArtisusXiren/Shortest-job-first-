#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main()

{ int k=2;
    vector<int> A;
 int x,n,z,m;
 cin>>n;
  for (int i=0;i<n;i++){
        cin>>z;
    A.push_back(z);
  } sort(A.begin(),A.end());

    for(auto x:A){
        cout<<x<<" ";
    }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){

        if(A[j]-A[i]<A[k]-A[i])
        {
         x=A[j]-A[i];
        }

    }

  }
  cout<<x<<endl;


    return 0;
}
