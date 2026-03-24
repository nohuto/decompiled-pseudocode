/*
 * XREFs of ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00F4448
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00F3398 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00F42D8 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02DF014 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

PSLIST_ENTRY __fastcall UmfdCancelServerOutstandingRequests(union _SLIST_HEADER **a1)
{
  PSLIST_ENTRY result; // rax

  while ( 1 )
  {
    result = ExpInterlockedPopEntrySList(*a1 + 1);
    if ( !result )
      break;
    *((_DWORD *)&result->Next + 2) = 2;
    CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel((CMultipleConsumerWorkQueue::CWaitableWorkItem *)result);
  }
  return result;
}
