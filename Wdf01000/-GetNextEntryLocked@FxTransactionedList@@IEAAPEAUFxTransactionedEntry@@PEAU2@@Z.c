FxTransactionedEntry *__fastcall FxTransactionedList::GetNextEntryLocked(
        FxTransactionedList *this,
        FxTransactionedEntry *Entry)
{
  FxTransactionedEntry *p_m_ListHead; // rcx
  FxTransactionedEntry *result; // rax

  p_m_ListHead = (FxTransactionedEntry *)&this->m_ListHead;
  if ( !Entry )
    Entry = p_m_ListHead;
  for ( result = (FxTransactionedEntry *)Entry->m_ListLink.Flink;
        result != p_m_ListHead;
        result = (FxTransactionedEntry *)result->m_ListLink.Flink )
  {
    if ( result->m_Transaction == FxTransactionActionNothing )
      return result;
  }
  return 0LL;
}
