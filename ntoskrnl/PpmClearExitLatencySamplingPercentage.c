/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x140581B64
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1402373CC (KeFlushProcessWriteBuffers.c)
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
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
