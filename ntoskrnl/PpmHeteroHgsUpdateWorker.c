/*
 * XREFs of PpmHeteroHgsUpdateWorker @ 0x14059C3F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140828C88 (PpmReinitializeHeteroEngine.c)
 */

__int64 PpmHeteroHgsUpdateWorker()
{
  __int64 v0; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmHeteroHgsUpdateQueued = 0;
  LOBYTE(v0) = 1;
  return PpmReinitializeHeteroEngine(v0, 0LL);
}
