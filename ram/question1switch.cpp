// W.A.P to take the the hours and minutes and then show that weather it is AM or PM by using switch-case statement
#include<iostream>
using namespace std;
int main(){
    int hours, minutes;
    cout<<"Enter the hours (0-23): " << "\n";
    cin >> hours;
    cout<<"Enter the minutes (0-59): " << "\n";
    cin >> minutes;
    if( hours < 0 || hours > 23 || minutes < 0 || minutes > 59){
        cout<<"Invalid time" << "\n";
        return 1;
    }
    switch(hours/12){
        case 0:
        cout<<"AM" << "\n";
        break;
        case 1:
        cout<<"PM" << "\n";
        break;
    }
    return 0;
}

// W.A.P to print the days of week using switchcase taking input as number
// #include<iostream>
// using namespace std;
//     int main(){
//         int input = 0;
//         cout<<"Enter the number of the day of the week (1-7): "<<"\n";
//         cin>>input;
//         switch(input)
//         {
//             case 1:
//             {
//                 cout<<"Monday"<<"\n";
//                 break;
//             }
//             case 2:
//             {
//                 cout<<"Tuesday"<<"\n";
//                 break;
//             }
//             case 3:
//             {
//                 cout<<"Wednesday"<<"\n";
//                 break;
//             }
//             case 4:
//             {
//                 cout<<"Thursday"<<"\n";
//                 break;
//             }  
//             case 5:
//             {
//                 cout<<"Friday"<<"\n";
//                 break;
//             } 
//             case 6:
//             {
//                 cout<<"Saturday"<<"\n";
//                 break;
//             } 
//             case 7:
//             {
//                 cout<<"Sunday"<<"\n";
//                 break;
//             } 
//             default :
//             {
//                 cout<<"Invalid input"<<"\n";
//             }
//         }
//         return 0;
//     }


// W.A.P to calculate the area of circle area of square and rectangle by using switchcase.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int choice;
//     float r,s,l,b;
//     cout<<"Enter your choice\n";
//     cout<<"1. Area of circle\n";
//     cout<<"2. Area of square\n";
//     cout<<"3. Area of rectangle\n";
//     cin>>choice;
//     switch(choice)
//     {
//         case 1:
//         {
//             cout<<"Enter the radius of circle\n";
//             cin>>r;
//             cout<<"Area of circle is "<<3.14*r*r<<"\n";
//             break;
//         }
//         case 2:
//         {
//             cout<<"Enter the side of square\n";
//             cin>>s;
//             cout<<"Area of square is "<<s*s<<"\n";
//             break;
//         }
//         case 3:
//         {
//             cout<<"Enter the length and breadth of rectangle\n";
//             cin>>l>>b;
//             cout<<"Area of rectangle is "<<l*b<<"\n";
//             break;
//         }
//         default:
//         {
//             cout<<"Invalid choice\n";
//         }
//         return 0;
//     }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int choice;
//     cout << "Enter the month no from 1 to 12" <<"\n";
//     cin >> choice;
//     switch (choice)
//     {
//         case 1:
//         {
//             cout << "January has 31 days" << "\n";
//             break;
//         }
//         case 2:
//         {
//             cout << "February has 28 days & 29 days in leap year" << "\n";
//             break;
//         }
//         case 3:
//         {
//             cout << "March has 31 days" << "\n";
//             break;
//         }
//         case 4:
//         {
//             cout << "April has 30 days" << "\n";
//             break;
//         }
//         case 5:
//         {
//             cout << "May has 31 days" << "\n";
//             break;
//         }
//         case 6:
//         {
//             cout << "June has 30 days" << "\n";
//             break;
//         }
//         case 7:
//         {
//             cout << "July has 31 days" << "\n";
//             break;
//         }
//         case 8:
//         {
//             cout << "August has 31 days" << "\n";
//             break;
//         }
//         case 9:
//         {
//             cout << "September has 30 days" << "\n";
//             break;
//         }
//         case 10:
//         {
//             cout << "October has 31 days" << "\n";
//             break;
//         }
//         case 11:
//         {
//             cout << "November has 30 days" << "\n";
//             break;
//         }
//         case 12:
//         {
//             cout << "December has 31 days" << "\n";
//             break;
//         }
//         default :
//         {
//         cout << "Invalid month no" << "\n";
//         }
        
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 0, b = 0, c = 0;
//     cout << "Enter 1 for addition.: " << "\n";
//     cout << "Enter 2 for  subtraction.: " << "\n";
//     cout << "Enter 3 for multiplication.: " << "\n";
//     cout << "Enter 4 for division.: " << "\n";
//     cin >> c;
//     switch(c)
//     {
//         case 1:
//         {
//             cout << "Enter the first no.: " << "\n";
//             cin >> a;
//             cout << "Enter the second no.: " << "\n";
//             cin >> b;
//             cout << "Addition of " << a << " and " << b << " is " << a + b << "\n";
//             break;
//         }
//         case 2:
//         {
//             cout << "Enter the first no.: " << "\n";
//             cin >> a;
//             cout << "Enter the second no.: " << "\n";
//             cin >> b;
//             cout << "substraction of " << a << " and " << b << " is " << a - b << "\n";
//             break;
//         }
//         case 3:
//         {
//             cout << "Enter the first no.: " << "\n";
//             cin >> a;
//             cout << "Enter the second no.: " << "\n";
//             cin >> b;
//             cout << "Multiplication of " << a << " and " << b << " is " << a * b << "\n";
//             break;
//         }
//         case 4:
//         {
//             cout << "Enter the Dividend.: " << "\n";
//             cin >> a;
//             cout << "Enter the divisor.: " << "\n";
//             cin >> b;
//             cout << "division of " << a << " and " << b << " is " << a / b << "\n";
//             break;
//         }
//     }
//     return 0;
// }