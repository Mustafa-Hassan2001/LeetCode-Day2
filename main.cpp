#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
	//Binary to Decimal Conversion 
//	int n,num=1, ans=0;
//	cin>>num;
//	int i=0; //This variable i
//	while(num!=0){
//		int digit = num&1;				
//		ans = (digit*pow(10,i))+ans;
//		num=num>>1;
//		i++;
//	}
//	cout<<ans;


//	int n,num=1, ans=0;
//	cin>>num;int i=0;
//	while(num!=0){
//		int digit = num%10;
//		if(digit == 1){
//			ans += pow(2,i);
//		}				
//		num=num/10;
//		i++;
//	}
//	cout<<ans;
//complement of n
int n;
cin>>n;
     if(n==0){
            return 1;
        }
        int rednum = 0, num = n;
        while(num!=0){
            rednum = (rednum << 1) | 1;
            num = num>>1;
        }
        int ans = (~n) & rednum;
        cout<<ans;
    //Power of 2;
	for(int i=0; i<=30; i++){
            int ans = pow(2,i);
            if(ans==n){
                return true;
            }
        }
        cout<<false;
    
	//Power of 3;
	for(int i=0; i<=30; i++){
            int ans = pow(3,i);
            if(ans==n){
                return true;
            }
        }
        cout<<false;
    
	//Power of 4;
	for(int i=0; i<=30; i++){
            int ans = pow(4,i);
            if(ans==n){
                return true;
            }
        }
        cout<<false;
          
	    
 return 0;
}


