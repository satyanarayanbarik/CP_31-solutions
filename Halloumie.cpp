#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int t;
	cin >> t; // for no. of test cases
	while(t--){
	    long long n,k;
	    cin >> n >> k;
	    
	    vector<long long> a(n);
	    
	    for(int i = 0; i < n; i++){
	        cin >> a[i];
	    }
	    
	    vector<long long> copyOf_a = a;
	    sort(copyOf_a.begin(),copyOf_a.end());
	    
	    if( a == copyOf_a || k > 1){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl ;
	    }
	}
	return 0;

}

/* With the help of swaping the segment of length k which is greater than 1 we can bring any element to the position 
we want by swapping its adjacent number. */
