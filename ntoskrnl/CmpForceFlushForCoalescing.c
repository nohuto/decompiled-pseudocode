/*
 * XREFs of CmpForceFlushForCoalescing @ 0x1408A6EA0
 * Callers:
 *     CmpCoalescingCallback @ 0x140613B70 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x1407D25D0 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void CmpForceFlushForCoalescing()
{
  int v0; // eax

  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    if ( CmpWorkerDataInitialized )
    {
      v0 = CmpForceFlushPending;
      if ( !CmpForceFlushPending && !_InterlockedCompareExchange(&CmpForceFlushPending, 1, 0) )
        ExQueueWorkItem(&CmpForceFlushWorkItem, (WORK_QUEUE_TYPE)(v0 + 1));
    }
  }
}
