#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int getRdnum()
{
    cout <<"Random numbers between 1 and 100:" <<endl;
    for(int i=0; i<100; i++)
    {
        cout << (rand()%100)+1 <<" ";
    return 0;
    }
}

int getRdnum(n2)
{
    cout << "Random numbers between 1 and n2: " << endl;
    for(int i=0; i<n2; i++)
    {
        cout << (rand()%(n2-1)+1 << " ";
    return 0;
    }

}

int getRdnum(int n1, int n2)
{
    cout << " Random numbers between n1+1 and n2:";
    
}