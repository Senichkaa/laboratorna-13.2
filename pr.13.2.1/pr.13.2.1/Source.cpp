#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
#define z 5

#define inpt(x) cin >> x
#define prnt(str) cout << (str)
#define endl cout << endl
#define sqr(x) ((x)*(x))
#define qb(x) ((x)*(x)*(x))

#define min(x, y) (((x)<(y))?(x):(y))
#define max(x, y) (((x)>(y))?(x):(y))

int main()
{
    double x, y, w;
    prnt("x = "); inpt(x);
    prnt("y = "); inpt(y);
    prnt("z = "); prnt(z); 
    endl;

#if z > 5
    w = sqr(max(x * qb(y), x + z));
#elif z <= 5
    w = min(x - y * z, x * y + z);
#endif
    prnt("w = "); prnt(w); endl;
}