/*
 * XREFs of PpmHeteroHgsUpdateWorker @ 0x14059E910
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14032C0F0 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140830CF8 (PpmReinitializeHeteroEngine.c)
 */

__int64 PpmHeteroHgsUpdateWorker()
{
  __int64 v0; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmHeteroHgsUpdateQueued = 0;
  LOBYTE(v0) = 1;
  return PpmReinitializeHeteroEngine(v0, 0LL);
}
