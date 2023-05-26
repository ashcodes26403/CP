#include <bits/stdc++.h>
using namespace std;

//int = -10^9 - 10^9
//long long = -10^18 - 10^18
// how to deal with numbers larger than 10^18

// we deal with it using something called modulo arithmetic
//"\n" is faster "endl"
//containers
//vectors


int main() {
  //vector
  int n;
  vector<int> vec; //empty vector
  vector<int> vec2(n,0);// vector with n elements, all equal to 0
  // If you declare a vector without a specific size, you can increase it's size by push back but if you use a size, you can't increase size by using pushback
//vec.size() - gives the size of the vector
  //FILO
  vec.push_back(4);
  vec.push_back(7);
  vec.pop_back(); // Will remove the last element from the vector
  vec2.emplace_back(4);
  vec2.emplace_back(7);
  for(int i=0; i<2; i++){
    cout << vec[i] << " " << vec2[i] << "\n";
  }

  //2D vectors
  //vector of vectors - It is basically a matrix
  vector<vector<int>> vec3(5, vector<int> (6)); // 5 rows where the input are all vectors. Rows * columns

  //vec3[3] will return the fourth vector





//Set 
// Used to store unique elements in sorted order
set<int> st;
st.insert(4);
st.insert(5);
st.insert(4);
for(auto it = st.begin(); it != st.end(); it++){
  cout << *it <<endl;
}
  for(auto it : st){
  cout << it <<endl;
}
  //st.erase(element you want to erase);
  //set stores in contiguos function
  //Time complexity of erase, insert is logn
  // st.size() for size
  // if we want to delete adjacent element in a set, we shouldn't do it via traversing as the pointer can be pointing at a different location and lead to deletion of some other element of some other set.
  // way to do it
  //auto it = st.find(starting element)
  //st.erase(it, it(end)+1); Time complexity x*log n
  // We reach it(end) + 1 by using for loop and it++
  // If element doesn't exist it points to st.end()




  //Unordered set
  //constant time, unique elements
  //Prefer set over unordered set
  unordered_set<int> ust(5);
  ust.insert(5);
  ust.insert(7);
  ust.insert(6);
  ust.insert(5);
  for(auto i: ust){
    cout << i <<endl;
  }



  //Multiset
  //Sorted order but not unique element
  multiset<int> mlst;
  mlst.insert(5);
  mlst.insert(6);
  mlst.insert(4);
  mlst.insert(9);
  for(auto i:mlst){
    cout << i << endl;
  }
  cout << st.count(4) <<endl;
  mlst.erase(4);
  // the above will erase all the occurence of element '4' 
  // If we want to erase one particular occurence, we can use, st.erase(st.find(element))





  //map

  //Key value pairs
  //Unique keys
  //Sorted order in keys
  map<int, int> mp;
  mp[1] = 17;
  mp[13] = 14;
  for(auto it: mp){
    cout << it.first <<" "<<it.second<<endl;
  }

  //(*it).first or it->first can be used in case it is an iterator
  //Unordered map
  //unsorted(any order)
  //O(1)
  //unique keys

  //multimap
  //sorted Keys
  //log(n)
  //duplicate keys
  
  multimap<int, int> mltmp;
  mltmp.insert({1,1});
  mltmp.insert({2,3});
  mltmp.insert({1,4});
  for(auto it = mltmp.begin(); it != mltmp.end(); it++){
    cout << it->first <<" " << it->second << endl;
  }


  //Queue
  queue<int> qu;
  //First in first out
  qu.push(3);  
  qu.push(4);
  qu.push(87);
  qu.pop();
  while(!qu.empty()){
    cout << qu.front() <<endl;
    qu.pop();
  }



//Stack

//LIFO - Last In First Out
stack<int> stf;
stf.push(10);
stf.push(15);
  stf.push(29);
  stf.pop();
  while(!stf.empty()){
    cout << stf.top() << " ";
    stf.pop();
  }
  cout << endl;



  //Priority Queue
  //Important queue
  priority_queue<int> prqu;
  //By default, max heap is implemented and the elements are stored in a descending order.
  //To create a min heap priority queue, use the following
  priority_queue<int, vector<int>, greater<int>> prquasc;
  prquasc.push(4);
  prquasc.push(7);
  prquasc.push(3);
  cout << prquasc.top() <<endl;
  while (!prquasc.empty()) {
        cout << prquasc.top() << " ";
        prquasc.pop();
    }

  
cout << endl;
  //Pair
  //It has a first element and a second element
  // Unlike map
  // Sorted by default, if the first element matches they compaere the second element.
  // {1,2},{1,3},{3,4}
  priority_queue<pair<int,int>> example;
  example.push({2,3});
  example.push({4,7});
  example.push({8,2});
  example.push({1,3});
  while(example.empty() == false){
    cout << example.top().first <<" "<< example.top().second << endl;
    example.pop();
  }



  //Binary Search STL
  //Applicable on sorted vectors only(Duh)
  vector<int> example2;
  for(int i=0; i<5; i++){
    example2.push_back(i+3);
  }
  cout << binary_search(example2.begin()+2,example2.end(),4) <<endl; // Will return True if the value is there in the vector and false if not.
  //log(n) time complexity


  //Lower Bound
  //Gives the first location greater than or equal to the element in question
  //Log(n)
//Upper Bound
  //Give the first location greater than to the element in question
//Log(n)
  auto it = lower_bound(example2.begin(),example2.end(),5);
  // so if we say it - vec.begin(), would we get the index?
  //Indeed Yes
  auto it2 = upper_bound(example2.begin(), example2.end(), 20);
  cout << it - example2.begin() <<" "<< it2 - example2.begin() <<endl;

  //In case of arrays
  // we can use arr instead of vec.begin() and arr+n instead of vec.end()




  //Deque
  //Doubly ended queue
  // We can enter values from both ends of the queue
  deque<int> dq;
  dq.push_front(4);
  dq.push_back(7);
  dq.push_front(8);
  for(auto it : dq){
    cout << it << " ";
  }
  dq.pop_front(); // To pop from front
  dq.pop_back(); // To pop from back
  
}