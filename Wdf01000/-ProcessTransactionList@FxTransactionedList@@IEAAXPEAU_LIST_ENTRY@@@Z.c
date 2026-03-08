/*
 * XREFs of ?ProcessTransactionList@FxTransactionedList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C004FA14
 * Callers:
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004FE14 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxTransactionedList::ProcessTransactionList(FxTransactionedList *this, _LIST_ENTRY *ReleaseHead)
{
  _LIST_ENTRY *p_m_TransactionHead; // rsi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v6; // rcx
  _LIST_ENTRY *v7; // rbx
  int v8; // ecx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v10; // rdx
  _LIST_ENTRY *v11; // rcx
  _LIST_ENTRY *v12; // rcx

  if ( !this->m_ListLockedRecursionCount )
  {
    p_m_TransactionHead = &this->m_TransactionHead;
    while ( 1 )
    {
      Flink = p_m_TransactionHead->Flink;
      if ( p_m_TransactionHead->Flink == p_m_TransactionHead )
        break;
      if ( Flink->Blink != p_m_TransactionHead || (v6 = Flink->Flink, Flink->Flink->Blink != Flink) )
LABEL_15:
        __fastfail(3u);
      p_m_TransactionHead->Flink = v6;
      v7 = Flink - 1;
      v6->Blink = p_m_TransactionHead;
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      v8 = (int)Flink[1].Flink;
      if ( v8 == 2 )
      {
        Blink = this->m_ListHead.Blink;
        if ( Blink->Flink != &this->m_ListHead )
          goto LABEL_15;
        v7->Flink = &this->m_ListHead;
        v7->Blink = Blink;
        Blink->Flink = v7;
        this->m_ListHead.Blink = v7;
        this->EntryAdded(this, (FxTransactionedEntry *)v7);
      }
      else if ( v8 == 3 )
      {
        v10 = v7->Flink;
        if ( v7->Flink->Blink != v7 )
          goto LABEL_15;
        v11 = v7->Blink;
        if ( v11->Flink != v7 )
          goto LABEL_15;
        v11->Flink = v10;
        v10->Blink = v11;
        v12 = ReleaseHead->Blink;
        if ( v12->Flink != ReleaseHead )
          goto LABEL_15;
        Flink->Flink = ReleaseHead;
        Flink->Blink = v12;
        v12->Flink = Flink;
        ReleaseHead->Blink = Flink;
        this->EntryRemoved(this, (FxTransactionedEntry *)v7);
      }
      LODWORD(v7[2].Flink) = 1;
    }
  }
}
