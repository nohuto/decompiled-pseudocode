/*
 * XREFs of ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00BCA88
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00BAFD8 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C01255E8 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1C00BD190 (-DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C03091C8 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

CMultipleConsumerWorkQueue::CWaitableWorkItem *__fastcall UmfdCancelServerOutstandingRequests(CWorkItemQueue **a1)
{
  CMultipleConsumerWorkQueue::CWaitableWorkItem *result; // rax

  while ( 1 )
  {
    result = CWorkItemQueue::DequeueWorkItem(*a1);
    if ( !result )
      break;
    CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(result);
  }
  return result;
}
