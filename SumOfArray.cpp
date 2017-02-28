

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//https://www.hackerrank.com/challenges/a-very-big-sum?h_r=next-challenge&h_v=zen

int main(){
   int count,elmnt;
   vector<long> arr;
   cin>>count;
   for(int i=0;i<count;i++)
   {
       cin>>elmnt;
       arr.push_back(elmnt);  
   }
   long sum=0;
   for(auto it:arr)
       sum=sum+it;
    cout<<sum;
}
