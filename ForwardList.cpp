/* A function receive a forward_list<string> and
two additional string arguments. The function find the first string
and insert the second immediately following the first. If the first string is
not found, then insert the second string at the end of the list */

void findStr(forward_list<string> &sflst,string str1,string str2){
    
    auto itr=sflst.begin();
    auto pitr=sflst.before_begin();
    int count=0;

    while(itr!=sflst.end()){
        if(*itr==str1){
            sflst.insert_after(itr,str2);
            break;
        }
        else{
            //count++;
            pitr=itr;
            itr++;
        }
        if(itr==sflst.end()){
            sflst.insert_after(pitr,str2);
        }
    }
}
