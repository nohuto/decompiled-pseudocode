/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x140565744
 * Callers:
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x14022A470 (PpmReleaseLock.c)
 *     KeFlushProcessWriteBuffers @ 0x140343D14 (KeFlushProcessWriteBuffers.c)
 *     PpmAcquireLock @ 0x14034AA84 (PpmAcquireLock.c)
 */

LONG PpmClearExitLatencySamplingPercentage()
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
  PpmExitLatencySamplingPercentageSet = 0;
  PpmExitLatencySamplingPercentage = 0;
  _InterlockedOr(v1, 0);
  KeFlushProcessWriteBuffers(1);
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
