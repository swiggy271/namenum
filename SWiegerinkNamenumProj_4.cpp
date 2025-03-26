/*
ID: stwiege1
TASK: namenum
LANG: C++
*/

using namespace std;

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>

// 4617 names

int main()
{
    // open files for input and output
    ifstream fin ("namenum.in");
    ofstream fout ("namenum.out");
    ifstream fin2 ("dict.txt");

    // initialize and declare variables
    int inputNumb;
    fin >> inputNumb;
    char TTT[11][3] = {{}, {}, {A, B, C}, {D, E, F}, {G, H, I}, {J, K, L}, {M, N, O}, {P, R, S}, {T, U, V}, {W, X, Y}};
    vector <char> word(inputNumb);
    for(int j = 0; pow(to_string(inputNumb).len(), 3); j++)
    {
        for(int q = 0; q < to_string(inputNum).len(); q++)
        {
            word[q] = TTT[inputNumb[q]][j % pow(q, 3)];
            cout << word[q];
        }
        cout << endl;
    }
    
}
