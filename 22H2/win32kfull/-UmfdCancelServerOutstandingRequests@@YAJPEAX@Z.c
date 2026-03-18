/*
 * XREFs of ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00A5A70
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00A5158 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00A5928 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1C00B6EA0 (-DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C0307468 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
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
