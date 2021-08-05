#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> array;
    for(int i=0; i < n; ++i){
        int tmp;
        cin >> tmp;
        array.push_back(tmp);
    }
}