#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Activity {
    int s, f; // Start time and finish time of an activity
};

void print(vector<Activity> V) {
    for(int i = 0; i < V.size(); i++) {
        cout << "(" << V[i].s << ", " << V[i].f << ") ";
    }
    cout << endl;
}

bool compare(Activity a, Activity b) {
    return a.f < b.f; // Comparison based on finish times
}

// Greedy algorithm for activity selection
// Time complexity: O(n log n) due to the sorting step
vector<Activity> GREEDY_ACTIVITY_SELECTOR(vector<Activity> S) {
    vector<Activity> A;
    if (!S.empty()) {
        sort(S.begin(), S.end(), compare); // Sorting activities based on finish times (O(n log n))
        A.push_back(S[0]);
        int n = S.size(), k = 0;
        for (int m = 1; m < n; m++) { // Iterating through the sorted activities (O(n))
            if (S[m].s >= S[k].f) {
                A.push_back(S[m]);
                k = m;
            }
        }
    }
    return A;
}

int main() {
    int n;
    cin >> n;

    vector<Activity> S(n);
    for (int i = 0; i < n; i++) {
        cin >> S[i].s >> S[i].f;
    }

    print(GREEDY_ACTIVITY_SELECTOR(S));

    return 0;
}
