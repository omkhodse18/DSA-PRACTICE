Maximum and minimum of an array using minimum number of comparisons

Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.
Example 1:

Input:
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
Output:
min = 1, max =  10000

Example 2:

Input:
N = 5
A[]  = {1, 345, 234, 21, 56789}
Output:
min = 1, max = 56789

Your Task:  
You don't need to read input or print anything. Your task is to complete the function getMinMax() which takes the array A[] and its size N as inputs and returns the minimum and maximum element of the array.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 105
1 <= Ai <=1012
=================================================================================================================================================================

//  First Number represents the minimum number and second represents maximum number.  
  
pair<long long, long long> getMinMax(long long a[], int n) {
    int max,min;
    
    pair<long long,long long> minmax;
    
    if(n==1){
        minmax.second = a[0];
        minmax.first = a[0];
    }
    
    if(a[0]>a[1]){
        minmax.second = a[0];
        minmax.first = a[1];
    }else{
        minmax.second = a[1];
        minmax.first = a[0];
    }
    
    
    for(int i=2;i<n;i++){
        if(a[i] > minmax.second){
            minmax.second = a[i];
        }
        
        if(a[i] < minmax.first){
            minmax.first = a[i];
        }
    }
    
    return minmax;
    
}