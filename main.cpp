#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int no = 0;
    string g , u;
    g.clear();

    for (int x = 0; x < 6; x++) {
        //cout << char((a[x] % 25) +  97) << endl;
        g[x] += char(rand() % 25 +  65);
    }
    g[7]= '\0';
    cout << g;
    cin >> u;
    if (g == u) {
        cout << "Correct guess!";
        return 0;
    }

    else {
        for (int z = 0; z < 6; z++) {
            if (u[z] == g[z]) {
                    no++;
                    cout << u[z] << " is correct\n";
            }
            else if (u[z] != g[z]){
                cout << u[z] << " is not correct\n";
            }
        }
    }
}
