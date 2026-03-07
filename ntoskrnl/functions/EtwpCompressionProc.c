void __fastcall EtwpCompressionProc(unsigned int *a1)
{
  signed __int32 i; // eax
  bool v3; // zf
  unsigned int v4; // eax

  for ( i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 284, 0xFFFFFFFF);
        ;
        i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 284, 0xFFFFFFFF) )
  {
    v3 = i == 2;
    v4 = a1[292];
    if ( !v3 )
      break;
    if ( v4 )
      EtwpCompressPendingBuffers((__int64)a1);
  }
  if ( !v4 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 286), 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 143, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 143);
    KeAbPostRelease((ULONG_PTR)(a1 + 286));
  }
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 137) + 448LL) + 8LL * *a1),
    1u);
}
