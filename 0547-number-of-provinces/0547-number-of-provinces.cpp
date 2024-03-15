class Solution {
private:
  void dfs(int node, vector<vector<int>>& adjLs, vector<bool>& vis) {
    vis[node] = true;
    for (int it : adjLs[node]) {
      if (!vis[it]) {
        dfs(it, adjLs, vis);
      }
    }
  }

public:
  int findCircleNum(vector<vector<int>>& isConnected) {
    int V = isConnected.size();
    vector<vector<int>> adjLs(V); // Initialize the adjacency list

    // Build the adjacency list based on the connection matrix
    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++) {
        if (isConnected[i][j] == 1 && i != j) {
          adjLs[i].push_back(j);
          adjLs[j].push_back(i); // Add connection for both directions
        }
      }
    }

    vector<bool> vis(V, false); // Use a boolean vector to track visited nodes
    int cnt = 0;
    for (int i = 0; i < V; i++) {
      if (!vis[i]) {
        cnt++;
        dfs(i, adjLs, vis);
      }
    }
    return cnt;
  }
};
