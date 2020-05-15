#include<iostream>
#include<vector>
using namespace std;


int main()
{
  int ia[]={1,2,3,4,5};
  vector<int>vec(ia,ia+5);
  for (auto v:vec)
  cout<<v<<" ";
  cout<<endl;
  return 0;
}
