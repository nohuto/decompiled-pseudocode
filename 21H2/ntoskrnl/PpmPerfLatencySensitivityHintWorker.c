/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x140382130
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140281A74 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14037D0D8 (PpmCheckCustomRun.c)
 */

char PpmPerfLatencySensitivityHintWorker()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfLatencyBoostQueued = 0;
  return PpmCheckCustomRun(3);
}
