class node{
    public :
    int prefix=0;
    node *child[26];
};
class Trie{
    public :
    node* create_node(){
        node* temp=new node;
        for(int i=0;i<26;i++){
            temp->child[i]=NULL;
        }
        return temp;
    }
    void add(node* root,string s){
        for(int i=0;i<(int)s.length();i++){
            if(root->child[s[i]-'A']==NULL){
                root->child[s[i]-'A']=create_node();
            }
            root=root->child[s[i]-'A'];
            root->prefix++;
        }
    }
};
