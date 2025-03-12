/*
ID: stwiege1
TASK: namenum
LANG: C++
*/

using namespace std;
#include<fstream>
#include<string>
#include<vector>

int main()
{
    ifstream fin ("namenum.in");
    ofstream fout ("namenum.out");
    ifstream fin2 ("dict.txt");

    int inputNumb, stupidVar;
    fin >> inputNumb;
    fin2 >> stupidVar;

    fout << inputNumb << stupidVar << endl;
}
