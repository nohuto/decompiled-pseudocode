FxTransactionedEntry *__fastcall FxRelatedDeviceList::GetNextEntry(FxRelatedDeviceList *this, FxRelatedDevice *Entry)
{
  FxTransactionedEntry *result; // rax

  result = FxTransactionedList::GetNextEntryLocked(
             this,
             (FxTransactionedEntry *)((unsigned __int64)&Entry->m_TransactionedEntry & -(__int64)(Entry != 0LL)));
  if ( result )
    return (FxTransactionedEntry *)((char *)result - 104);
  return result;
}
