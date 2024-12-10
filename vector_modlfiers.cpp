#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4};

    v.erase(v.begin()+1, v.begin()+3);
    // vector<int> v2={100,200,300};

    // v.insert(v.begin()+2,v2.begin(),v2.end()); // multipule valaue insert


    // v.insert(v.begin()+2,50);
    // v.pop_back(); //   last number delete 
    // v.push_back(5000);  last number add

    // vector<int> v2=v; //   value copu bh assine kora ...
    // for(int i=0; i<v2.size(); i++)
    // {
    //     cout<<v2[i]<<" ";
    // }
 
    for(int x:v)
    {
        cout<<x<<" ";
    }
 
    return 0;
}