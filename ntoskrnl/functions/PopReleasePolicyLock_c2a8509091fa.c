__int64 PopReleasePolicyLock()
{
  __int64 v0; // rdx

  PopPolicyLockThread = 0LL;
  ExReleaseResourceLite(&PopPolicyLock);
  PopCheckForWork();
  KeLeaveCriticalRegion();
  LOBYTE(v0) = 1;
  return PsBoostThreadIo((__int64)KeGetCurrentThread(), v0);
}
