__int64 SmmReleasePushLockExclusive<66>()
{
  return ExReleasePushLockExclusiveEx(&SmmDomainChangeGlobalLock, 0LL);
}
