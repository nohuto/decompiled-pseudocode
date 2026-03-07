void __fastcall PopEtEnergyTrackerClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a4 == 1 )
  {
    PopAcquireRwLockExclusive(a2 + 16);
    *(_DWORD *)(a2 + 636) |= 2u;
    PopReleaseRwLock(a2 + 16);
  }
}
