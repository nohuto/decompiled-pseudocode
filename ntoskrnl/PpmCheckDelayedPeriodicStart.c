/*
 * XREFs of PpmCheckDelayedPeriodicStart @ 0x14036F270
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckCustomRun @ 0x1402D1B4C (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 */

void __fastcall PpmCheckDelayedPeriodicStart(int a1)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmCheckMakeupCount = a1;
  PpmCheckCustomRun(0);
  PpmCheckDelayedStartWorkerQueued = 0;
}
