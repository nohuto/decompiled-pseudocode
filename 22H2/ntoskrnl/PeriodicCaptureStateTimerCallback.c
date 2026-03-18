/*
 * XREFs of PeriodicCaptureStateTimerCallback @ 0x1409ECE10
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140321C20 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

void __fastcall PeriodicCaptureStateTimerCallback(__int64 a1, unsigned int *a2)
{
  if ( ExAcquireRundownProtectionCacheAwareEx(
         *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 137) + 448LL) + 8LL * *a2),
         1u) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(*((_QWORD *)a2 + 135) + 32LL), NormalWorkQueue);
  }
}
