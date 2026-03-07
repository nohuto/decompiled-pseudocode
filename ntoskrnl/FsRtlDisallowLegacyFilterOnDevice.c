__int64 __fastcall FsRtlDisallowLegacyFilterOnDevice(__int64 a1)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  KIRQL v5; // al

  if ( !FeatureDeveloperVolume )
    return 3221225659LL;
  v3 = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)v3 > 0x35 )
    return 3221225485LL;
  v4 = 0x20000100100108LL;
  if ( !_bittest64(&v4, v3) )
    return 3221225485LL;
  v5 = KeAcquireQueuedSpinLock(0xAuLL);
  *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) |= 0x2000u;
  KeReleaseQueuedSpinLock(0xAuLL, v5);
  return 0LL;
}
