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
#include <algorithm>

string arrToStr(char p[], int r);

int main()
{
    // open files for input and output
    ifstream fin ("namenum.in");
    ofstream fout ("namenum.out");
    ifstream fin2 ("dict.txt");

    // initialize and declare variables
    int inputNumb;
    fin >> inputNumb;
    string wordChecking, endList[int(pow(to_string(inputNumb).length(),3))];
    char TTT[11][3] = {{'\0'}, {'\0'}, {'A', 'B', 'C'}, {'D', 'E', 'F'}, {'G', 'H', 'I'}, {'J', 'K', 'L'}, {'M', 'N', 'O'}, {'P', 'R', 'S'}, {'T', 'U', 'V'}, {'W', 'X', 'Y'}};
    vector <char> word(to_string(inputNumb).length());
    // vector <char> wordList((pow(to_string(inputNumb).length(), 3), (to_string(inputNumb).length())));
    vector<vector<char>> wordList(int(pow(to_string(inputNumb).length(),3)), vector<char>(to_string(inputNumb).length()));
    for(int j = 0; j < pow(to_string(inputNumb).length(), 3); j++)
    {
        for(int q = 0; q < to_string(inputNumb).length(); q++)
        {
            // word[q] = TTT[int(to_string(inputNumb)[q]) - '0'][j % int(pow(q, 3))];
           wordList[j][q] = TTT[int(to_string(inputNumb)[q]) - '0'][(j / int(pow(3, q))) % 3];
        }
    }
    
    /*
    for(int j = 0; j < pow(to_string(inputNumb).length(), 3); j++)
    {
        for(int i = 0; i < to_string(inputNumb).length(); i++)
        {
            fout << wordList[j][i];
        }
        fout << endl;
    }
    // sort(wordList, wordList[pow(to_string(inputNumb).length(), 3)]);
    */

    for(int j = 0; j < pow(to_string(inputNumb).length(), 3); j++)
    {
        endList[j] = arrToStr(wordList[j], to_string(inputNumb).length());
    }
    
    for(int j = 0; j < pow(to_string(inputNumb).length(), 3); j++)
    {
        for(int i = 0; i < 4617; i++)
        {
            fin2 >> wordChecking;
            if(endList[j] == wordChecking)
            {
                fout << endList[j] << endl;
            }
        }
        fin2.clear();
        fin2.seekg(ios::beg);
    }
}

string arrToStr(char p[], int r)
{
    string a = "\0";
    for(int j = 0; j < r; j++)
    {
        a += p[j];    
    }
    return a;
}
