#include "Order.h"
#include <vector>
#include <iostream>

using namespace std;

void Order(vector<string>& ValueKeeper)
{
    reverse(ValueKeeper.begin(), ValueKeeper.end());//1

    for (string i : ValueKeeper) cout << i << endl;// 2
    cout << endl;//2
}