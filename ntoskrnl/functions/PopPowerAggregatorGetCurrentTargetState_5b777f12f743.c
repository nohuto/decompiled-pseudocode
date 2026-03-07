void __fastcall PopPowerAggregatorGetCurrentTargetState(__int64 a1)
{
  __int128 v2; // xmm1
  __int64 v3; // xmm0_8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v2 = xmmword_140C3A720;
  *(_OWORD *)a1 = xmmword_140C3A710;
  v3 = qword_140C3A730;
  *(_OWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 32) = v3;
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
