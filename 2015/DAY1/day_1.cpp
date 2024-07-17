#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[])
{
    char direction;
    int floor = 0;
    int step = 1;
    int count =0;
    ifstream day_1_input ("day_1_input.txt");
    while (day_1_input >> noskipws >> direction)
    {
        if (direction == '(')
        {
            floor++;
        }
        else if (direction == ')')
        {
            floor--;
        }
        if (floor != -1 && count == 0)
        {
            step++;
        }
        else {
            count++;
        }
        
    
        
    }
    cout << floor<< "\n";
    cout << step;
    
    return 0;
}
