#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x0, y0, r1, r2, x, y,R1,R2;
    float L;
    cout << "Input coordinates of circle's center (X0, Y0): ";
    cin >> x0 >> y0;
    cout << "Input circle radiuses R1 and R2: ";
    cin >> r1 >> r2;
    if(r1<0)
    {
        cout<<"Erorrrrrrr1";
        return 0;
    }
    if(r2<0)
    {
        cout<<"Erorrrrrrr2";
        return 0;
    }
    if(r1>r2)
    {
        cout<<"Erorrrrrrr3";
        return 0;
    }
    cout << "Input point coordinates (X, Y): ";
    cin >> x >> y;
    L = sqrt(pow(x - x0, 2) + pow(y - y0, 2));
    if ((r1 < L) && (L < r2))
    {
        cout << "This point is situated inside the circle.\n";
    }
    else
    {
        cout << "This point is not situated inside the circle.\n";
    }
    return 0;
}
