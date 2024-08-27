// sort c++ 

#include <iostream>
#include<vector>
#include <algorithm> 

using namespace std; 

int main(){
vector<int>nums={30,20,40,50,10};
sort(nums.begin(),nums.end());
for(int i=0;i<nums.size();i++)
{cout<<nums.at(i);
if(i==nums.size()-1)
break;
cout<<",";}
return 0;
}