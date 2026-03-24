/*
 * XREFs of ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C0078140
 * Callers:
 *     CleanupPowerRequestList @ 0x1C00779E0 (CleanupPowerRequestList.c)
 *     xxxUserPowerCalloutWorker @ 0x1C0077FA0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C01261B0 (McTemplateK0pq_EtwWriteTransfer.c)
 */

struct tagPOWERREQUEST *UnqueuePowerRequest(void)
{
  __int64 v0; // rbx
  __int64 v1; // r8
  _QWORD *v2; // rax

  v0 = 0LL;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
  if ( gPowerRequestList.Flink != &gPowerRequestList )
  {
    v0 = qword_1C0253768;
    v2 = *(_QWORD **)(qword_1C0253768 + 8);
    if ( *(struct _LIST_ENTRY **)qword_1C0253768 != &gPowerRequestList || *v2 != qword_1C0253768 )
      __fastfail(3u);
    qword_1C0253768 = *(_QWORD *)(qword_1C0253768 + 8);
    *v2 = &gPowerRequestList;
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0pq_EtwWriteTransfer(&gPowerRequestList, &RemovePowerRequestFromQueue, v1, v0, -1);
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
  return (struct tagPOWERREQUEST *)v0;
}
