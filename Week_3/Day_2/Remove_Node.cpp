class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0; 
        struct ListNode* temp = head; 
        while(temp) {
            count++; 
            temp = temp->next; 
        }
        count = count - n - 1; 
        if(count == -1) {
            return head->next; 
        }
        temp = head; 
        while(count > 0) {
            temp = temp->next; 
            count--; 
        }
        if(temp->next == NULL) {
            return NULL; 
        }
        temp->next = temp->next->next;
        return head; 
    }
};
