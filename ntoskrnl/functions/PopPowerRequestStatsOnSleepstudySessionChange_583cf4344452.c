void PopPowerRequestStatsOnSleepstudySessionChange()
{
  BOOLEAN i; // dl
  _QWORD *v1; // rax
  __int128 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  Buffer = 0LL;
  LODWORD(v3) = 0;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerRequestStatsLock);
  for ( i = 1; ; i = 0 )
  {
    v1 = RtlEnumerateGenericTableAvl(&PopPowerRequestStatsDatabase, i);
    if ( !v1 )
      break;
    if ( *(_DWORD *)v1 == 1 )
    {
      Buffer = *(_OWORD *)v1;
      v3 = v1[2];
      RtlDeleteElementGenericTableAvl(&PopPowerRequestStatsDatabase, &Buffer);
      PopPowerRequestStatsCleanup((__int64)&Buffer);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestStatsLock);
}
