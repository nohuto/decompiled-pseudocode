/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x140584094
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1402C000C (KeFlushProcessWriteBuffers.c)
 *     PpmReleaseLock @ 0x14032C0A0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C0F0 (PpmAcquireLock.c)
 */

void PpmClearExitLatencySamplingPercentage()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  PpmAcquireLock(&PopFxSystemLatencyLock);
  PpmExitLatencySamplingPercentageSet = 0;
  PpmExitLatencySamplingPercentage = 0;
  _InterlockedOr(v0, 0);
  KeFlushProcessWriteBuffers(1);
  PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
}
