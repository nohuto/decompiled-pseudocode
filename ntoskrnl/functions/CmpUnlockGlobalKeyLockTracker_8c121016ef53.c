char CmpUnlockGlobalKeyLockTracker()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpKeyLockTracker);
  v0 = CmpKeyLockTracker - 16;
  if ( (CmpKeyLockTracker & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpKeyLockTracker & 2) != 0
    || (v1 = CmpKeyLockTracker,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpKeyLockTracker, v0, CmpKeyLockTracker)) )
  {
    ExfReleasePushLock(&CmpKeyLockTracker);
  }
  KeAbPostRelease((ULONG_PTR)&CmpKeyLockTracker);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
