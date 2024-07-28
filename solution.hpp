#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>

class Solution {
public:
    void dfs(int m, int n, std::vector<std::vector<int>>& connected, std::vector<bool>& visited){
        visited[m]=true;  //m es el nodo de turno sobre el que estamos actualmente
        std::vector<int> adj;
        for(int i=0; i<n; i++){
            int x=connected[m][i];  //i serian las columnas entonces
            if(x==1){
                adj.push_back(i);
            }
        }
        for(auto x: adj){
            if(!visited[x]){
                dfs(x, n, connected, visited);
            }
        }
    }
    int findCircleNum(std::vector<std::vector<int>>& isConnected) {
        int n=isConnected.size();
        std::vector<bool> visited(n,0);
        int ans=0;
        for(int i=0; i<isConnected.size(); i++){
            if(!visited[i]){
                ans++;
                dfs(i,n,isConnected,visited);
            }
        }
        return ans;
    }
/*
Input: isConnected = [[1,1,0],[1,1,0],[0,0,1]]
Output: 2
*/
};

#endif // SOLUTION_HPP