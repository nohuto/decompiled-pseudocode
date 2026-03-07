__int64 __fastcall PopPowerAggregatorScreenOffActiveToActiveStateHandler(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD v3[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, 32);
  v3[0] = 2;
  PopPowerAggregatorSetCurrentState(a1, (__int64)v3);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  PopPowerAggregatorNotifyCsStateExited(v1);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  return 0LL;
}
