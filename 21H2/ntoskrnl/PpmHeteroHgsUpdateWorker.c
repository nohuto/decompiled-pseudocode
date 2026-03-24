/*
 * XREFs of PpmHeteroHgsUpdateWorker @ 0x140577BA0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140281A74 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x1407B9AE8 (PpmReinitializeHeteroEngine.c)
 */

__int64 PpmHeteroHgsUpdateWorker()
{
  __int64 v0; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  LOBYTE(v0) = 1;
  PpmHeteroHgsUpdateQueued = 0;
  return PpmReinitializeHeteroEngine(v0);
}
