void PopPowerAggregatorNotifyDisplayPoweredOn()
{
  if ( qword_140C6AC38 )
    qword_140C6AC38();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C3A738 == 2 )
  {
    LOBYTE(xmmword_140C3A748) = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
