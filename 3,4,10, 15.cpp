//3
void adelante(nodo_doble *actual){
    if(actual!=NULL){
        cout<<actual->n<<" ";
        adelante(actual->sig);
    }else{
        cout<<endl;
    }
}

//4
void atras(nodo_doble *actual){
    if(actual!=NULL){
        cout<<actual->n<<" ";
        atras(actual->ant);
    }else{
        cout<<endl;
    }
}

//10
void LinkedList::Begin(){
    this->pActual=this->head;
    return void;
}

void LinkedList::Last(){
    Node *temp=this->head;
    while (temp->next){
        temp=temp->next;  
    }
    this->pActual=temp;
    return void;
}

//15
void imprimir(){
    this->pActual->Begin();
    while (this->pActual->next){
        cout<<pActual->n<<endl;
        temp=temp->next;
    }

   return void;
}
