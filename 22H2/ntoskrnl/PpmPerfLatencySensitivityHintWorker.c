/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x140381A70
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14034AA84 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14037CB48 (PpmCheckCustomRun.c)
 */

char PpmPerfLatencySensitivityHintWorker()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfLatencyBoostQueued = 0;
  return PpmCheckCustomRun(3);
}
