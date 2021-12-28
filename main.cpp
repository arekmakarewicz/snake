#include <iostream>

using namespace std;

#define width 20
#define height 20

int main()
{
    cout << "Hello, it's Snake Game!" << endl;

    char tab[width][height];

    for(int i = 0; i < width; i++)
        for( int j= 0; j < height; j++)
            tab[i][j] = '*';

    for(int i = 0; i < width; i++)
    {
        for( int j= 0; j < height; j++)
        {
            cout << tab[i][j];
        }
        cout << endl;
    }

    return 0;
}
