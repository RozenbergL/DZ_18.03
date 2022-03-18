#include <iostream>
#include <list>

using namespace std;

int main()
{
    list <int> numbers;

    int summa = 0;
    for (int i = 0; i < 10000; ++i) {
        int num = rand() % 200 - 100;
        summa += num;
        numbers.push_back(num);
    }

    float sred = summa / numbers.size();
    //
    for (int i : numbers)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << sred << endl;
    return 0;
}