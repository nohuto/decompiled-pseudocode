void PopPowerAggregatorNotifyResiliencyReached()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C3A710 == 1 )
    BYTE9(xmmword_140C3A720) = 0;
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
