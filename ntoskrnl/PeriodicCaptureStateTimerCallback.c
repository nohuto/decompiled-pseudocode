/*
 * XREFs of PeriodicCaptureStateTimerCallback @ 0x1409E9F70
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14028DD10 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
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
