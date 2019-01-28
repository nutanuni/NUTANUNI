#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<string> > A = { {"C"}, {"D"} };
vector<vector<string> > B = { {"D"} };
vector<vector<string> > C = { {"A"}, {"D"} };
vector<vector<string> > E = { {"D"} };
vector<vector<string> > F = { {"D"} };
vector<vector<string> > G = { {"D"} };
vector<vector<vector<string> > > vv = {A,B,C,E,F,G};

vector<int> q(vv.size());

void fuga(int _d)
{
    int d = _d - 1;
    for (int i = 0; i < (int)vv[d].size(); i++){
        q[d] = i;
        if (d == 0){
            cout << "{ " ;
            for(int x = 0; x < (int)vv.size(); x++) {
                cout << "[ ";
                for(vector<string>::iterator it = vv.at(x).at(q[x]).begin(); it != vv.at(x).at(q[x]).end(); it++) 
                    cout << *it << " ";
                cout << "]";
            }
            cout << "}" << endl;
            continue;
        }
        fuga(d);
    }
}

int main() {
	fuga(vv.size());
}
