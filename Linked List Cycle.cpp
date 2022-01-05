class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        if (!fast || !fast -> next) {
            return false;
        }
        
        while (fast && fast -> next) {
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if (slow == fast) {
                return true;
            }
        }
        
        return false;
    }
};