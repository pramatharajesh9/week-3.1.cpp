#include <iostream>
#include <vector>
using namespace std;
int main () 
{
    vector <int> v;
    int n,x,i,y;
    cout<<"Enter the no. of elements: "<<endl;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1  <<endl;
        cin >> x ;
        v.push_back(x);
    }
    cout<<"Vector elements are: " <<endl;
    for(vector<int>::iterator it=v.begin();  
it<v.end(); //we can replace vector<int>::iterator  by   auto   also
it++)
{
cout << *it << " ";
}
return 1;
}
/*
1.insertion 
function:push_back()
         insert()
     ex: v.insert(v.begin()+y,10) where y is position
         v.insert(v.begin(),3,10) this inserts 3 times 10 at the starting
         */

/*
2.deletion
function:pop_back()
the deletion is possible from last we cant do in middle or first 
*/

/*
3.Accessing elements ]
function:[]
         at()
         front(),back()
*/       

/*
4.Traversal operations

traversal using range based loops 
 for(auto x:v)

*/

/*
5.Searching operations

Linear search:find()
              find(v.begin(),v.end(),10);

binary search:binary_search()
              binary_search(v.begin(),v.end(),10)       
*/

/*
6.sorting operations
sort in ascending order:sort()
                        sort(v.begin(),v.end());
sort in descending order:sort()
                        sort(v.begin(),v.end(),greater<int>());
                                               
*/
