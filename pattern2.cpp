#include<iostream>
using namespace std;
int main()
{
   //pattern6
// for(int i = 1; i<=3; i++){
//     for(int j = 1; j<=3;j++){
//         if(j<=i)
//         cout<<"# ";
//     }
//     cout<<endl;
// }

///pattern7
// for(int i = 1; i<=3; i++){
//     for(int j = 1; j<=3;j++){
//         if(i<=j)
//         cout<<"# ";
//     }
//     cout<<endl;
// }

// pattern8
// for(int i = 1; i<=3; i++){
//     for(int j = 1; j<=3;j++){
//         if(j<=i)
//         cout<<i;
//     }
//     cout<<endl;
// }


// patter9 
// int n = 3; 
// int print = 1;  
// for(int i = 1; i<=n; i++){
//     for(int j = 1; j<=n;j++){
//         if(j<=i) {
//         cout<<print<<" ";
//         print = print+1;   
//         }   
//     }
//     cout<<endl;
// }

//pattern 10 
 int print = 1;
for(int i = 1; i<=3; i++){
    print = i; 
    for(int j = 1; j<=i;j++){   
       cout<<print;
       print++;
       
      
    }
    cout<<endl;
}

return 0;
}