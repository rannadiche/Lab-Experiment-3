#include <iostream>
using namespace std;

int main()
{
    int temperature[3][7];

    cout << "Enter all temperature for a week of first city and then second city. \n";

    for (int i=1; i<4; ++i)
    {
        for(int j=1; j<8; ++j)
        {
            cout << "Province " << i << ", Day " << j << " : ";
            cin >> temperature[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

    for (int i=1; i<4; ++i)
    {
        for(int j=1; j<8; ++j)
        {
            cout << "Province " << i << ", Day " << j << " = " << temperature[i][j] << endl;
        }
    }

    return 0;
}

