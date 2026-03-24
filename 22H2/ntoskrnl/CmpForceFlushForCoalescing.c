/*
 * XREFs of CmpForceFlushForCoalescing @ 0x140876CB0
 * Callers:
 *     CmpCoalescingCallback @ 0x1404ECD70 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x140655BF0 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 */

void CmpForceFlushForCoalescing()
{
  int v0; // eax

  if ( !BYTE1(NlsMbCodePageTag) )
  {
    if ( CmpWorkerDataInitialized )
    {
      v0 = CmpForceFlushPending;
      if ( !CmpForceFlushPending && !_InterlockedCompareExchange(&CmpForceFlushPending, 1, 0) )
        ExQueueWorkItem(&CmpForceFlushWorkItem, (WORK_QUEUE_TYPE)(v0 + 1));
    }
  }
}
