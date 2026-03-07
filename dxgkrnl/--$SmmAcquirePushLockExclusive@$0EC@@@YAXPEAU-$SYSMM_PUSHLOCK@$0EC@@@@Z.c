__int64 SmmAcquirePushLockExclusive<66>()
{
  return ExAcquirePushLockExclusiveEx(&SmmDomainChangeGlobalLock, 0LL);
}
