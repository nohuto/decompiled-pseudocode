/*
 * XREFs of PpmCheckDelayedPeriodicStart @ 0x1403734F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckCustomRun @ 0x14032B45C (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x14032C0F0 (PpmAcquireLock.c)
 */

void __fastcall PpmCheckDelayedPeriodicStart(int a1)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmCheckMakeupCount = a1;
  PpmCheckCustomRun(0);
  PpmCheckDelayedStartWorkerQueued = 0;
}
