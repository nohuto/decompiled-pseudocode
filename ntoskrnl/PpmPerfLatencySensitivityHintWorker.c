/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x140201DE0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckCustomRun @ 0x1402D1B4C (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 */

__int64 PpmPerfLatencySensitivityHintWorker()
{
  PpmAcquireLock(&PpmPerfPolicyLock);
  PpmPerfLatencyBoostQueued = 0;
  return PpmCheckCustomRun(3LL);
}
