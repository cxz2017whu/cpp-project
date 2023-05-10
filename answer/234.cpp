#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <list>
#include <stack>
#include <sstream>
#include <cmath>
#include <map>
#include <time.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *slow = head, *fast = head;
        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        if (fast == nullptr)
        {
            fast = reverseList(slow);
        }
        else
        {
            fast = reverseList(slow->next);
        }
        slow = head;
        while (fast != nullptr)
        {
            if (fast->val != slow->val)
            {
                return false;
            }
            fast = fast->next;
            slow = slow->next;
        }
        return true;
    }

    ListNode *reverseList(ListNode *head)
    {
        ListNode *dummy = new ListNode(0);
        while (head != nullptr)
        {
            ListNode *p = head;
            head = head->next;
            p->next = dummy->next;
            dummy->next = p;
        }
        ListNode *p = dummy->next;
        delete dummy;
        return p;
    }
};

/*


*/
int main()
{

    Solution s1;
    string r = "ccc";
    vector<string> nodes = {"flower", "flow", "flight"};
    vector<vector<int>> nums = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // vector<int> a;
    ListNode *a = new ListNode(5);
    ListNode *b = new ListNode(4, a);
    ListNode *c = new ListNode(3, b);
    ListNode *d = new ListNode(2, c);
    ListNode *e = new ListNode(1, d);
    // s1.oddEvenList(e);
    a[0] = 1;
    // BinaryTree *bt = new BinaryTree(nodes);
    // s1.longestPalindrome(r);
    string sss = "aabaab!bb";
    cout << __cplusplus << endl;
    // s1.searchInsert(nodes, 0);
    //  cout << s1.setZeroes(nodes) << endl;
    sort(nums.begin(), nums.end());
    return 0;
}