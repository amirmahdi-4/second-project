#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
system("color b");
int second,minute,hour,day;
cout<<"enter number: ";
cin>> second;
if(second>=0)
{ day=second/86400;
  hour=(second%86400)/3600;
  minute=(second%3600)/60;
  second=second%60;
  cout<<"day:"<<day<<"\n";
  cout<<"hour:"<<hour<<"\n";
  cout<<"minute:"<<minute<<"\n";
  cout<<"second:"<<second<<"\n";
}
else
    cout<<"error";
    return 0;
}
