/*
 * XREFs of PpmCheckDelayedPeriodicStart @ 0x140389D50
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckCustomRun @ 0x14022475C (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 */

void __fastcall PpmCheckDelayedPeriodicStart(int a1)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmCheckMakeupCount = a1;
  PpmCheckCustomRun(0);
  PpmCheckDelayedStartWorkerQueued = 0;
}
