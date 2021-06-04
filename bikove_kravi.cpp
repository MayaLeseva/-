#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int programa = rand() % 9000 + 1000, potrebitel;
    int programa1, programa2, programa3, programa4, potrebitel1, potrebitel2, potrebitel3, potrebitel4;
    cout<<"Type your guess!";
    cin>>potrebitel;
    programa1=programa%10;
    programa2=programa/10%10;
    programa3=programa/100%10;
    programa4=programa/1000;
    potrebitel1=potrebitel%10;
    potrebitel2=potrebitel/10%10;
    potrebitel3=potrebitel/100%10;
    potrebitel4=potrebitel/1000;
    return 0;
}
