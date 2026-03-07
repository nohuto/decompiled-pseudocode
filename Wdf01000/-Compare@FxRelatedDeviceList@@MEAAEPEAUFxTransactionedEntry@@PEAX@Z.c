bool __fastcall FxRelatedDeviceList::Compare(FxRelatedDeviceList *this, FxTransactionedEntry *Entry, _LIST_ENTRY *Data)
{
  return Entry[1].m_ListLink.Flink == Data;
}
