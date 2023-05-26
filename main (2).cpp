#include<bits/stdc++.h>
using namespace std;
//memoization is a dp technique and an extension of recursion

//recursion
// a function calling itself
// consists of a base case and body of the function
void print(int n){
  if(n==1){
    cout << n << " ";
  }
  else{
    print(n-1);
    cout << n << " ";
  }
}
int fibonacci(int n){// time complexity O(2^n)
  if(n<=1){
    return n;
  }
  return fibonacci(n-1)+fibonacci(n-2);
}
bool palindrome(string str){
  for(int i=0; i<str.length()-1; i++){
    if(str[i] != str[(str.length()-1) - i] && (str.length()-1)%2==0){
      return false;
      break;
    }
    if(str[i] != str[(str.length()-1) - i] && (str.length()-1)%2!=0 && i != (str.length()+1)/2){
      return false;
      break;
    }
  }
  return true;
}
bool isPalindrome(string str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}

void print2(int i, int n){
  if(i==n+1){
    return;
  }
  cout << i << " ";
  print2(i+1, n);
}
bool linear_search(int i, int n, int arr[], int x){
  if(i==n){
    return false;
  }
  if(arr[i]==x){
    return true;
  }
  return linear_search(i+1,n,arr,x);
}
//time complexity O(n)
void print3(int n){
  if(n==0){
    return;
  }
  cout << n << " ";
  print3(n-1);
}
void print4(int i, int n){
  if(i==n){
    return;
  }
  cout << n-i << " ";
  print4(i+1, n);
}
void print5(int i, int n){
  if(i==n){
    cout << i <<" ";
    return;
  }
  print5(i+1, n);
  cout << i << " ";
}
int factorial(int n){
  if(n==1){
    return 1;
  }
  return n*factorial(n-1);
}



//Memoization

//let's say, I call the fibonacci fn for the 4th term. It'll call the f(1), f(2) and run the recursion and not store the value let's say if it's run once. this is called DFS. Depth first search. 
//read more about it.
//time complexity for fibonacci(recursion) will be O(2^n)
//space complexity is the height of the recursion tree, so the space complexity is O(n)

//So basically what our solution for the problem is that when we first time encounter calculating a particular variable, we store it's value and use it the next time it's needed in the calculation of some other stuff. This helps in reducing the time complexity drastically as now everytime we need a value we can just look it up after calculating it once instead of calculating it everytime. 

// we initialize an array to store these values, where only the base case values are filled and the other values are set to -1. 
//Then this array will get updated the first time these values are calculated. 
//Time complexity becomes O(n) from O(2^n). Space complexity remain unchanged. This array is called dp array.
//Technique is called memoization.

int genFibonacci(int n) {
  int dp[n];
  dp[0] = 0; dp[1] = 1;
  for(int i=2; i<n; i++){
    dp[i] = -1;
  }
  if(n<=2){
    return dp[n-1];
  }
  if(dp[n-1] != -1){
    return dp[n-1];
  }
  dp[n-1] = genFibonacci(n-1) + genFibonacci(n-2);
  return dp[n-1];
  
}




int main() {
  
    print5(1, 5);
  cout << endl;
  cout << factorial(6);
  cout << endl;
  //string ptr;
  //cin >> ptr;
  //cout << isPalindrome(ptr,0,ptr.length()-1) <<endl;
  int a[5] = {2,4,7,3,1};
  int x;
  cin >> x;
  cout << linear_search(0, 5, a, x) << endl;
  cout << genFibonacci(5) <<endl;
    return 0;
}
