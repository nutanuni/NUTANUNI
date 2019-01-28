#include <iostream>
#include <vector>
using namespace std;

vector<int> v1 = {1,2,3};
vector<int> v2 = {4,5};
vector<int> v3 = {6,7,8};
vector<int> v4 = {9,};
vector<int> v5 = {10,11,12};
vector<vector<int> > vv = {v1,v2,v3,v4,v5};

vector<int> q(vv.size());

void fuga(int _d)
{
    int d = _d - 1;
    for (int i = 0; i < (int)vv[d].size(); i++){
        q[d] = i;
        if (d == 0){
            for(int x = 0; x < (int)vv.size(); x++) 
                cout << vv[x][ q[x] ] << " ";
            cout << endl;
            continue;
        }
        fuga(d);
    }
}

int main() {
	fuga(vv.size());
}
