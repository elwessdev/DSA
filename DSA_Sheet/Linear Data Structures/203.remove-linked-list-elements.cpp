/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
 */

// @lc code=start
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* current=head;
        ListNode* prev=nullptr;
        while(current!=nullptr&&current->val==val){
            head=current->next;
            delete current;
            current=head;
        }
        while(current!=nullptr){
            if(current->val==val){
                prev->next=current->next;
                ListNode* tempNode=current;
                current=current->next;
                delete tempNode;
            } else {
                prev=current;
                current=current->next;
            }
        }
        return head;
    }
};
// @lc code=end

