/*
 * XREFs of KiIdealProcessorRebalancerTimerCallback @ 0x1402EC270
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void KiIdealProcessorRebalancerTimerCallback()
{
  char v0; // bl

  v0 = 0;
  KxAcquireSpinLock(&qword_140C414E8);
  byte_140C414F1 |= 1u;
  if ( !byte_140C414F0 )
  {
    byte_140C414F0 = 1;
    v0 = 1;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C414E8);
  if ( v0 )
    ExQueueWorkItem(&WorkItem, (WORK_QUEUE_TYPE)48);
}
