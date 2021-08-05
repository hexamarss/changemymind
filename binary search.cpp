#include <iostream>

using namespace std;

int main(void){
    float x1 = 1;
    float x2 = 99;
    int k,c;
    float y;
    cout << "Insert K" << endl;
    cin >> k;
    cout << "insert C" << endl;
    cin >> c;

    while((x2 - x1) > 0.001){
        float avgx = (x1 + x2) / 2;
        y = k*avgx*avgx + c;
        if (y > 0){
            x2 = (x1 + x2) / 2
        }
        if (y < 0){
            x1 = (x1 + x2) / 2
        }
    }
    cout << x1;
}