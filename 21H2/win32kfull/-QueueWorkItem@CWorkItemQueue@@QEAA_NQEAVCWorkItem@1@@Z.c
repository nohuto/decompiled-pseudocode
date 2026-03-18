/*
 * XREFs of ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1C01242D8
 * Callers:
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1C0011080 (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CWorkItemQueue::QueueWorkItem(CWorkItemQueue *this, struct CWorkItemQueue::CWorkItem *const a2)
{
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_BYTE *)this )
    return 0;
  *((_DWORD *)a2 + 2) = 1;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 1, (PSLIST_ENTRY)a2);
  _InterlockedOr(v4, 0);
  KeSetEvent(**((PRKEVENT **)this + 1), 1, 0);
  return 1;
}
