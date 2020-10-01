#include <bits/stdc++.h>
using namespace std;

int main(){
    int V;
    int E = 0;
	cout<<"Enter the number of vertices : ";
    cin >> V;
    cout<<endl;

    cout<<"Enter the adjacency matrix :"<<endl;
    int** edges = new int*[V];
    for(int i = 0; i < V; i++){
        edges[i] = new int[V];
        for(int j = 0 ; j < V ; j++){
            cin>>edges[i][j];
            if(edges[i][j] != 0){
                E++;
            }
        }
    }
    E=E/2;

    int odd_vertices = 0;
    int even_vertices = 0;

    for(int i = 0 ; i < V ; i ++){
        int sum = 0;
        for(int j = 0; j < V ; j++){
            sum += edges[i][j];
        }
        if(sum % 2 == 0){
            even_vertices++;
        }else{
            odd_vertices++;
        }
    }
    cout<<"The total number of vertices are "<<V<<endl;
    cout<<"The total number of edges are "<<E<<endl;
    cout<<"The total number of odd vertices are "<<odd_vertices<<endl;
    cout<<"The total number of even vertices are "<<even_vertices<<endl;

    return 0;
}
