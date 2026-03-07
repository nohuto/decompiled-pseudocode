void __fastcall CTokenManager::TokenQueueTableEntry::Free(struct _RTL_GENERIC_TABLE *Table, PVOID Buffer)
{
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
}
