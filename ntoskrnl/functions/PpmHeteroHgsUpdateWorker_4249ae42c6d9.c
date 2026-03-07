__int64 PpmHeteroHgsUpdateWorker()
{
  __int64 v0; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmHeteroHgsUpdateQueued = 0;
  LOBYTE(v0) = 1;
  return PpmReinitializeHeteroEngine(v0, 0LL);
}
