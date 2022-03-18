#include <iostream>
#include <list>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;
    inputFile.open("input.txt");

    list <int> numbers;
    int summa = 0;
    while (!inputFile.eof())
    {
        int num;
        inputFile >> num;
        summa += num;
        numbers.push_back(num);
    }

    numbers.sort();
    float sred = (float)summa / numbers.size();

    for (int i : numbers)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << sred << endl;
    return 0;
}