/*
 * XREFs of PpmHeteroHgsUpdateWorker @ 0x1405D90F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140848BE8 (PpmReinitializeHeteroEngine.c)
 */

__int64 PpmHeteroHgsUpdateWorker()
{
  __int64 v0; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  LOBYTE(v0) = 1;
  PpmHeteroHgsUpdateQueued = 0;
  return PpmReinitializeHeteroEngine(v0);
}
