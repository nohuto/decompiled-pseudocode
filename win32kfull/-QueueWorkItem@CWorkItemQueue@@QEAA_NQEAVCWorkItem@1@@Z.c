/*
 * XREFs of ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1C011FE60
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BB490 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

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
