/*
 * XREFs of ?ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z @ 0x1C0089900
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C004F900 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 */

__int64 __fastcall FxRelatedDeviceList::ProcessAdd(FxRelatedDeviceList *this, FxTransactionedEntry *NewEntry)
{
  FxRelatedDeviceList *v2; // r10
  _LIST_ENTRY *Flink; // rax
  FxTransactionedEntry *NextEntryLocked; // rcx
  _LIST_ENTRY **v5; // r8

  v2 = this;
  Flink = this->m_TransactionHead.Flink;
  if ( Flink == &this->m_TransactionHead )
  {
LABEL_4:
    NextEntryLocked = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(v2, NextEntryLocked);
      if ( !NextEntryLocked )
        break;
      if ( NextEntryLocked[1].m_ListLink.Flink == *v5 )
        return 3221226026LL;
    }
  }
  else
  {
    while ( Flink[3].Flink != NewEntry[1].m_ListLink.Flink )
    {
      Flink = Flink->Flink;
      if ( Flink == &this->m_TransactionHead )
        goto LABEL_4;
    }
    if ( LODWORD(Flink[2].Flink) == 2 )
      return 3221226026LL;
  }
  return 0LL;
}
