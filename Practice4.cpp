#include <iostream>
#include <locale.h>
#include <string>
#include <iterator>
#include <vector>
#include <fstream>
#include "Order.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    string number;//1
    int sizecounter=0;//1
    vector<string> ValueKeeper;//1
    fstream fs;//1
    fs.open("Практика.txt", fstream::in|fstream::out);// 2
    if (!fs.is_open())//3
    {
        cout << "Труба с файлом";//4
    }
    else
    {
        cout << "Файл жив"<<endl;//5
       
       
        while (!fs.eof())//6
        {
            number = "";//7
            fs >> number;//8
            cout << number << endl;//9
            ValueKeeper.push_back(number);//9
            ValueKeeper[sizecounter] = number;//9
            sizecounter++;//9
            
        }
        if(ValueKeeper.size()<2)//10
        { 
            cout << "Меньше двух элементов" << endl << "Труба";//11
        }
        else
        {
            Order(ValueKeeper);//12
            fstream ofs("Практика.txt");//13
            for(int i=0; i<ValueKeeper.size(); i++)//14
            {
                ofs << ValueKeeper[i]<<endl;//15
            }
        }
    }
    fs.close();//16
    return 0;
}