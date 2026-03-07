char __fastcall CWorkItemQueue::QueueWorkItem(union _SLIST_HEADER *this, struct CWorkItemQueue::CWorkItem *const a2)
{
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( LOBYTE(this->Alignment) )
    return 0;
  *((_DWORD *)a2 + 2) = 1;
  ExpInterlockedPushEntrySList(this + 1, (PSLIST_ENTRY)a2);
  _InterlockedOr(v3, 0);
  return 1;
}
