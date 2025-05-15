#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int t;
	cin >> t; // for no. of test cases
	while(t--){
	    long long n,x;
	    cin >> n >> x;
	    
	    vector<long long> path ;
	    path.push_back(0);
	    
	    //long long fillingStations;
	    for(int i = 0 ; i < n; i++ ){
	        long long fillingStations;
	        cin >> fillingStations ;
	        path.push_back(fillingStations);
	    }
	    path.push_back(x);
	    
	    int size = path.size();
	    
	    long long maxDistance_btw_Points = INT_MIN ;
	    
	    for(int i = 1 ; i < size ; i++){
	        if(i == size - 1 ){
	            maxDistance_btw_Points = max(maxDistance_btw_Points, 2*((path[i] - path[i-1])));
	        }else{
	             maxDistance_btw_Points = max(maxDistance_btw_Points, path[i] - path[i-1]);
	        }
	    }
	    cout <<  maxDistance_btw_Points << endl ;
	}
	return 0;

}
