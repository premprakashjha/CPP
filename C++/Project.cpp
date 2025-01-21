#include<iostream>
#include<stack>
#include<string>
using namespace std;
void display(stack<string>s)
{
    if(s.empty())
    {
        cout<<"Sorry, no book is available!!\n"<<endl;
    }
    else{
        cout<<"The available books in the library are: "<<endl;
        while(!s.empty())
        {
            cout<<s.top()<<endl;
            s.pop();
        }
        cout<<endl;
    }
}

void isBookAvailable(stack<string> s, const string bookName) {
    bool found = false;

    while (!s.empty()) {
        if (s.top() == bookName) {
            found = true;
            break; 
        }
        s.pop(); 
    }

    if (found) {
        cout << "The book is available!\n" << endl;
    } else {
        cout << "The book is not available!\n" << endl;
    }
}
int main()
{
    string value, book;;
    int choice;
    stack<string>s;
    cout << "\n===============================" << endl;
    cout << "   LIBRARY MANAGEMENT SYSTEM    " << endl;
    cout << "===============================\n" << endl;
    cout << "\n1. Submit a Book\n";
        cout << "2. Withdraw a Book\n";
        cout << "3. View Available Books\n";
        cout << "4. Search for the book\n";
        cout << "5. Exit the Library Management System\n";
    while(1)
    {
        cout << "\nPlease select an option (1-5): ";
        cin >> choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter the book to be submitted: ";
            cin.ignore();
            getline(cin,value);
            s.push(value);
            cout<<"The book has been submitted successfully!!"<<endl;
            break;

        case 2:
            if(!s.empty())
            {
               s.pop();
                cout<<"The book has been withdrawn successfully!!!"<<endl;
                break;
            }
            else{

                cout<<"Sorry, No books available!!"<<endl;
            }
            break;
        
        case 3:
            display(s);
            break;
        
        case 4:
            cin.ignore();
            cout<<"Enter the book name to be searched: ";
            getline(cin,book);
            isBookAvailable(s,book);
            break;
        case 5:
            cout<<"Exiting the program!!"<<endl;
            return 0;
            break;
        default:
            cout<<"Invalid choice!!!"<<endl;
        }
    }
    
}