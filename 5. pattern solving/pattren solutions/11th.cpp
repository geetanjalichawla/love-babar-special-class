/*    1 2 3 4
    1 * * * * "* ->> 4 3 2 1"
    2  * * *  1
    3   * *  2
    4    *  3

 what i saw in this instead of solving the same i try to solve this
        1234
    1 **** "* ->> 4 3 2 1"
    2  *** 1
    3   ** 2
    4    * 3
 and just add a space after *
 i already know how to solve this patron
 but still
 lets solve it again as i don't remember it(and i want to solve it again)
 i saw that we have to print some *
which is easy to do but the thing is i have to print _ spaces before that
 so,
 to add space firstly i count spaces in every row
0->1->2->3 spaces and on row number
1->2->3->4 on row 1 i have to print row -1 times spaces
so while ((j <= row-1)) -> we have to print spaces
 or while ((i-j >= 1)) **both are same we can use anyone
else we have to print *
 now i am able to solve 2nd one pattern
 just add a space after * and we are good to go
*/
#include<iostream>
using namespace std;
int main()
{


    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
         //space
            if(i-j >= 1){
                cout<<" ";
            }
         //stars
            else
            {
                cout<<"* ";
            }
            
        }
        cout<<endl;
        
        
    }
    
    
    return 0;
}
