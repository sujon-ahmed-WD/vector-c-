#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 2, 8, 2};
    
    // replace(v.begin()+8,v.end(),2,500);// Replace Pannerl ...
    // vector<int>:: iterator i =find(v.begin(),v.end(),200);
    auto it=find(v.begin(),v.end(),5);

    if(it ==v.end())
    {
        cout<<"notfound"; // 0(1) 
    }
    else
    {
        cout<<"found";
    }
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }
    return 0;
    /*  Replace functon find founcton */
}