unsigned __int8 __fastcall FxTransactionedList::RemoveLocked(
        FxTransactionedList *this,
        FxTransactionedEntry *Entry,
        __int64 a3)
{
  char v3; // bl
  _LIST_ENTRY *v5; // rax
  _LIST_ENTRY *v6; // rdx
  _LIST_ENTRY *v7; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v9; // rdx
  _LIST_ENTRY *p_m_TransactionLink; // rax
  _LIST_ENTRY *Blink; // r8

  v3 = 0;
  if ( Entry->m_Transaction != FxTransactionActionAdd )
  {
    if ( this->m_ListLockedRecursionCount )
    {
      Entry->m_Transaction = FxTransactionActionRemove;
      p_m_TransactionLink = &Entry->m_TransactionLink;
      Blink = this->m_TransactionHead.Blink;
      if ( Blink->Flink == &this->m_TransactionHead )
      {
        p_m_TransactionLink->Flink = &this->m_TransactionHead;
        Entry->m_TransactionLink.Blink = Blink;
        Blink->Flink = p_m_TransactionLink;
        this->m_TransactionHead.Blink = p_m_TransactionLink;
        FxObject::AddRef(
          Entry->m_TransactionedObject,
          Entry,
          423,
          "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
        return v3;
      }
    }
    else
    {
      Flink = Entry->m_ListLink.Flink;
      if ( (FxTransactionedEntry *)Entry->m_ListLink.Flink->Blink == Entry )
      {
        v9 = Entry->m_ListLink.Blink;
        if ( (FxTransactionedEntry *)v9->Flink == Entry )
        {
          v9->Flink = Flink;
          Flink->Blink = v9;
          Entry->m_ListLink.Blink = &Entry->m_ListLink;
          Entry->m_ListLink.Flink = &Entry->m_ListLink;
          ((void (__fastcall *)(FxTransactionedList *, FxTransactionedEntry *, __int64, __int64))this->EntryRemoved)(
            this,
            Entry,
            a3,
            3LL);
          return 1;
        }
      }
    }
LABEL_10:
    __fastfail(3u);
  }
  v5 = &Entry->m_TransactionLink;
  v3 = 1;
  v6 = Entry->m_TransactionLink.Flink;
  if ( v6->Blink != v5 )
    goto LABEL_10;
  v7 = v5->Blink;
  if ( v7->Flink != v5 )
    goto LABEL_10;
  v7->Flink = v6;
  v6->Blink = v7;
  v5->Blink = v5;
  v5->Flink = v5;
  Entry->m_Transaction = FxTransactionActionNothing;
  return v3;
}
