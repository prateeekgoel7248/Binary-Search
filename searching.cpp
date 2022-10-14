//search element in sorted array
#include<bits/stdc++.h>
using namespace std;
int searchNum(int arr[], int n , int target){
    for(int i = 0; i< n ; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
int arr[6] = {1,2,3,4,5,6};
int ans = searchNum(arr,6,3);
cout<<ans<<endl;

return 0;
}