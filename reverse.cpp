Given the head of a singly linked list, reverse the list, and return the reversed list.


  /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr=head;
        ListNode *prev=NULL;
        ListNode *futu;
        while(curr){
            futu=curr->next;
            curr->next=prev;
            prev=curr;
            curr=futu;
        }
        return prev;
        // ListNode *p1=head;
        // vector<int> ans;
        // while(p1){
        //     ans.push_back(p1->val);
        //     p1=p1->next;
        // }
        // p1=head;
        // int k=ans.size()-1;
        // while(p1){
        //     p1->val=ans[k];
        //     k--;
        //     p1=p1->next;
        // }
        // return head;
    }
};
