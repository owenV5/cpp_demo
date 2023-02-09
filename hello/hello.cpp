#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 4;
    int result = a + b;
    for (int i = 0; i < 99; i++)
        result = result + i;
    
    int* pc = &result;

    cout << result << std::endl;
    cout << pc << std::endl;
    cout << *pc << std::endl;
}