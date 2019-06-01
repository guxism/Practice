#include "libcxx.h"

int main()
{
   vector<int> vec{0, 1, 2, 3, 4, 5};
   int N = 4;
   
   do
   {
      print(vec, 4);
   }
   while (NextCombination(vec, N))
      ;
      
/*

"0123 45"   0 1 2 3 | 4 5  0 1 2 3 | 4 5  
"0124 35"   0 1 2 4 | 3 5  0 1 2 4 | 3 5  
"0125 34"   0 1 2 5 | 3 4  0 1 2 5 | 3 4  
"0134 25"   0 1 3 4 | 2 5  0 1 3 4 | 2 5  
"0135 24"   0 1 3 5 | 2 4  0 1 3 5 | 2 4  
"0145 23"   0 1 4 5 | 2 3  0 1 4 5 | 2 3  
"0234 15"   0 2 3 4 | 1 5  0 2 3 4 | 1 5  
"0235 14"   0 2 3 5 | 1 4  0 2 3 5 | 1 4  
"0245 13"   0 2 4 5 | 1 3  0 2 4 5 | 1 3  
"0345 12"   0 3 4 5 | 1 2  0 3 4 5 | 1 2  
"1234 05"   1 2 3 4 | 0 5  1 2 3 4 | 0 5  
"1235 04"   1 2 3 5 | 0 4  1 2 3 5 | 0 4  
"1245 03"   1 2 4 5 | 0 3  1 2 4 5 | 0 3  
"1345 02"   1 3 4 5 | 0 2  1 3 4 5 | 0 2  
"2345 01"   2 3 4 5 | 0 1  2 3 4 5 | 0 1 

*/     
}

