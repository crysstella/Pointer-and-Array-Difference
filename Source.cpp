#include <iostream>

using namespace std;
 
int main()
{
    int array[3];
    int *ptr;
    ptr = array;
    cout << "ptr earlier:" << ptr << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the value #" << i + 1 << ": ";
        cin >> *ptr;
        cout << "address: " << ptr << endl;             // Make sure the address is the same to the bottom one.
        ptr++;
    }
    
    ptr -= 3;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter a number " << *ptr << endl;
        ptr++;
    }

    ptr -= 3;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << " is at address " << ptr << endl;
        ptr++;
    }

    return 0;
}