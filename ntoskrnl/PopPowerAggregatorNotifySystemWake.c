void __fastcall PopPowerAggregatorNotifySystemWake(int a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  dword_140C3A824 = a1;
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
