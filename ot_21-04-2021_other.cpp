#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout<<"Guess My Number Game\n";
    cout<<"(you will stop the game if you press '0')\n\n"<<endl;
    srand(time(0));
    int m, n;
    int tries=0;

    cout<<"Smallest possible generated number = "; cin>>m;
    if(m==0){cout<<"you stopped the game"; return 0;}

    cout<<"Biggest possible generated number = "; cin>>n;
    if(n==0){cout<<"you stopped the game"; return 0;}

    int num = rand()%n+m;
    int circles=0;
    int num2=num;

    while (num2!=0)
    {
      if(num2%10==0 || num2%10==9 || num2%10==6) circles++;
      if(num2%10==8) circles=circles+2;
      num2=num2/10;
    }

    int guess=n+1;

    while (guess!=num)
        {
          cout<<"Enter a guess between "<<m<<" and "<<n<<": "<<endl;
          cin>>guess;

          if(guess==0){cout<<"you stopped the game"; return 0;}
          cout<<endl;


          if (guess>num)
           {
            cout<<"Too high!\n\n";
            tries++;
            if(tries==5){cout<<"HINT: There is/are "<<circles<<" circle(s) in the number; example - there are 3 circles in '86'.\n";}

            if(guess>n) cout<<"Your number should be between "<<m<<" and "<<n<<endl;
           }


        else if(guess<num)
            {
              cout<<"Too low!\n\n";
              tries++;
              if(tries==5){cout<<"HINT: There is/are "<<circles<<" circle(s) in the number; example - there are 3 circles in '86'\n";}
              if(guess<m) cout<<"Your number should be between "<<m<<" and "<<n<<endl;
            }


        else {cout<<"\nCorrect!"; tries++;}
    }

    if(tries==1){cout<<"\n\nYou guessed the correct number in "<<tries<<" try"<<endl;}
    else {cout<<"\n\nYou guessed the correct number in "<<tries<<" tries"<<endl;}

    return 0;
}
