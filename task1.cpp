#include <bits/stdc++.h>

using namespace std;

int main ()
{
    ifstream file("character_mapping.txt");
    ifstream file1("word_corpus.txt");
    ofstream fileout("mapping.txt");
    string line;
    string vietnamese,english;
    string freq;
    map<string,string> chmap;
    while (getline(file, line))
    {
        stringstream linestream(line);
        string item;
        while (!file.eof())
        {   vietnamese = "";
            english = "";
            freq = "";
            getline(file1, freq);
            getline(file,item,'\t');
            vietnamese = vietnamese + item;
            getline(file,item,'\t');
            english = english + item;
            fileout << vietnamese <<"\t"<<english <<"\t"<<freq<<endl;

        }
    }
    return 0;
}

