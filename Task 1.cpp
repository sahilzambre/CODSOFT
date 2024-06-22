// NUMBER GUESSING GAME

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand((unsigned int) time(NULL));

    int number = (rand() % 100) + 1;
    int guess = 0;
    
    do{

        cout<<"GUESS THE NUMBER BETWEEN 1-100"<<endl;
        cin>>guess;

        if(guess > number){
            cout<<"Guess Lower!!!"<<endl;
        }
        else if(guess < number){
            cout<<"Guess Higher!!!"<<endl;
        }
        else{
            cout<<"Hurray!! You Won..."<<endl;
        }
    } while (guess != number);

    return 0;
}