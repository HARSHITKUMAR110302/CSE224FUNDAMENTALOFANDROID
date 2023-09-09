#include <iostream>
#include <unordered_map>
using namespace std;
class Solution{
    public :
        void check()
        {
            unordered_map<int,bool> u;
            for(int i=0;i<10;i++)
                cout<<u[i]<<endl;
        }
};

int main()
{
    Solution ob;
    ob.check();
    return 0;
}