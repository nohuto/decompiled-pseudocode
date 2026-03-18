/*
 * XREFs of KiIdealProcessorRebalancerTimerCallback @ 0x140357E50
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void KiIdealProcessorRebalancerTimerCallback()
{
  char v0; // bl

  v0 = 0;
  KxAcquireSpinLock(&qword_140C418C8);
  byte_140C418D1 |= 1u;
  if ( !byte_140C418D0 )
  {
    byte_140C418D0 = 1;
    v0 = 1;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C418C8);
  if ( v0 )
    ExQueueWorkItem(&stru_140C418A8, (WORK_QUEUE_TYPE)48);
}
