#include <iostream>
using namespace std;
 
main() {
   int a = 21;
   int c ;
 

   c = a++;   
   cout << "Line 1 - Value of a++ is :" << c << endl ; // value will not be increased.
 
  
   cout << "Line 2 - Value of a is :" << a << endl ; // value of a is increased.
 

   c = ++a;  
   cout << "Line 3 - Value of ++a is  :" << c << endl ; // value of a is further increased.
   return 0;
}
