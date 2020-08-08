#include <iostream>
#include <deque>

using namespace std;

void DrawNet(){
    for (int i = 1; i <= 100; i++)
    {
        cout << "#";
    }

    cout << endl;

    for (int j = 2; j < 20; j++)
    {
        for (int i = 1; i <= 100; i++)
        {
            if (i == 1 || i == 100) cout << "#";
            else cout << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= 100; i++)
    {
        cout << "#";
    }

}
void Game(){}
int main()
{
    DrawNet();
}

