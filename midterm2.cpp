#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    ofstream ofs;
    int score1, score2;
    int sum;
    string sname;
    float avg;

    ifs.open("student.txt");
    if(!ifs)
    {
        cout <<"File open Error\n";
        exit(0);
    }

    ofs.open("studentscore.txt");
    if(!ofs)
    {
        cout <<"File open Error\n";
        exit(0);
    }
    for (int i=0; i<=10; i++){
        ifs>>sname>>score1>>score2;

        cout <<sname<<" "<< score1 <<" " << score2<< endl;

        sum = score1 +score2;
        avg = sum/2.0;

        cout <<"sum:" << sum << "avg: " << avg << endl;


    }
    
}