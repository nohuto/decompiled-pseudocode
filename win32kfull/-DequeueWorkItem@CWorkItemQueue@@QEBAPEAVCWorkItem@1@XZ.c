/*
 * XREFs of ?DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1C00BD190
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BB490 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00BCA88 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1C00BD100 (-WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ.c)
 * Callees:
 *     <none>
 */

struct CWorkItemQueue::CWorkItem *__fastcall CWorkItemQueue::DequeueWorkItem(union _SLIST_HEADER *this)
{
  struct CWorkItemQueue::CWorkItem *result; // rax
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (struct CWorkItemQueue::CWorkItem *)ExpInterlockedPopEntrySList(this + 1);
  _InterlockedOr(v2, 0);
  if ( result )
    *((_DWORD *)result + 2) = 2;
  return result;
}
