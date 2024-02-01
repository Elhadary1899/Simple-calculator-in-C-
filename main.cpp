#include <iostream>

using namespace std;

int main()
{
    double first,second;
    char operation,confirm;
    bool count = true;

    cout<<"Welcome sir!"<<endl;

    while(count){

    cout<<endl;
    cout<<"Enter the first number"<<endl;
    cin>>first;
    cout<<"Enter the second number"<<endl;
    cin>>second;
    cout<<"Enter the operation you wish to perform (+,-,*,/)."<<endl;
    cin>>operation;

    switch(operation){

    case '+':
        cout<<first<<" + "<<second<<" = "<<first+second<<endl;
        break;

    case '-':
        cout<<first<<" - "<<second<<" = "<<first-second<<endl;
        break;

    case '*':
        cout<<first<<" * "<<second<<" = "<<first*second<<endl;
        break;

    case '/':
        cout<<first<<" / "<<second<<" = "<<first/second<<endl;
        break;
    }

    cout<<"Do you wish to perform another operation? (type 'y' for yes or 'n' for no)."<<endl;
    cin>>confirm;
    if(confirm=='y'){
        count=true;
    } else if(confirm=='n'){
        count=false;
    } else{
        cout<<"Wrong input";
        return 0;
    }
    }
    return 0;
}
