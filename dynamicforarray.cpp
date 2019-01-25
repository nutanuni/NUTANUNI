#include <iostream>
using namespace std;

int v1[] = {1,2,3};
int v2[] = {4,5,6};
int v3[] = {7,8,9};
int vv[][3] = {{1,2,3},
               {4,5,6},
               {7,8,9}};
int q[3];

#define VV_ELEMENT_SIZE  (sizeof vv / sizeof *vv)

void fuga(int _d)
{
    int d = _d - 1;
    for(int i = 0; i < VV_ELEMENT_SIZE; i++) {
        q[d] = i;
        if (d == 0){
            for(int x = 0,y = VV_ELEMENT_SIZE - 1; x < VV_ELEMENT_SIZE,y >= 0; x++,y--) 
                cout << vv[x][ q[y] ] << " ";
            cout << endl;
            continue;
        }
        fuga(d);
    }
}

int main() {
	fuga(3);
}
