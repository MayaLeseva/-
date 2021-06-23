#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int programa, potrebitel, bulls=0, cows=0;
    int programa1, programa2, programa3, programa4, potrebitel1, potrebitel2, potrebitel3, potrebitel4;
    cout<<"Type a four-digit number with different digits for your guess!";
    cin>>potrebitel;
    do{
        programa=rand()%9000 + 1000;
        programa1=programa%10;
        programa2=programa/10%10;
        programa3=programa/100%10;
        programa4=programa/1000;
    }while(programa1==programa2 or programa1==programa3 or programa1==programa4 or programa2==programa3 or programa2==programa4 or programa3==programa4);
    while (potrebitel!=programa){
        potrebitel1=potrebitel%10;
        potrebitel2=potrebitel/10%10;
        potrebitel3=potrebitel/100%10;
        potrebitel4=potrebitel/1000;
        cows=0;
        bulls=0;
        if (potrebitel1==programa1){
            bulls++;
        }
        else if (potrebitel1==programa2 or potrebitel1==programa3 or potrebitel1==programa4){
            cows++;
        }
        if (potrebitel2==programa2){
            bulls++;
        }
        else if (potrebitel2==programa1 or potrebitel2==programa3 or potrebitel2==programa4){
            cows++;  
        }
        if (potrebitel3==programa3){
            bulls++;
        }
        else if (potrebitel3==programa1 or potrebitel1==programa2 or potrebitel1==programa4){
            cows++;
        }
        if (potrebitel4==programa4){
            bulls++;
        }
        else  if (potrebitel4==programa1 or potrebitel4==programa2 or potrebitel4==programa3){
            cows++;
        }
        cout<<"Yor have "<<bulls<<" bulls and "<<cows<<" cows!\n Type you guess!";
        cin>>potrebitel;
    }
    if(potrebitel==programa){
        cout<<"You won!";
    }
    return 0;
}
