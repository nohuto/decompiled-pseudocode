/*
 * XREFs of FsRtlFindInTunnelCacheEx @ 0x140752810
 * Callers:
 *     FsRtlFindInTunnelCache @ 0x14093AAE0 (FsRtlFindInTunnelCache.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     FsRtlCompareNodeAndKey @ 0x1402C1AA8 (FsRtlCompareNodeAndKey.c)
 *     FsRtlEmptyFreePoolList @ 0x1402C1B10 (FsRtlEmptyFreePoolList.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     FsRtlPruneTunnelCache @ 0x140752970 (FsRtlPruneTunnelCache.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 */

char __fastcall FsRtlFindInTunnelCacheEx(
        PFAST_MUTEX FastMutex,
        unsigned __int64 a2,
        const UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        PUNICODE_STRING a5,
        char a6,
        _DWORD *a7,
        void *a8)
{
  char v11; // bl
  __int64 v12; // rsi
  __int64 v13; // rdi
  LONG v14; // eax
  unsigned __int16 *v15; // rdi
  wchar_t *PoolWithTag; // rcx
  unsigned __int16 v17; // ax
  _QWORD *v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v11 = 0;
  v12 = 0LL;
  if ( !*(_DWORD *)((char *)&NlsMbCodePageTag + 2) )
    return 0;
  v19[1] = v19;
  v19[0] = v19;
  ExAcquireFastMutex(FastMutex);
  FsRtlPruneTunnelCache(FastMutex, v19);
  v13 = *(_QWORD *)&FastMutex[1].Count;
  while ( v13 )
  {
    v12 = v13;
    v14 = FsRtlCompareNodeAndKey(v13, a2, a3, a6 & 1);
    if ( v14 > 0 )
    {
      v13 = *(_QWORD *)(v13 + 8);
    }
    else
    {
      if ( v14 >= 0 )
        break;
      v13 = *(_QWORD *)(v13 + 16);
    }
  }
  if ( v13 )
  {
    RtlCopyUnicodeString(a4, (PCUNICODE_STRING)(v12 + 80));
    v15 = (unsigned __int16 *)(v12 + 64);
    if ( a5->MaximumLength < *(_WORD *)(v12 + 64) )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag((POOL_TYPE)17, *(unsigned __int16 *)(v12 + 64), 0x346E7554u);
      a5->Buffer = PoolWithTag;
      v17 = *v15;
      a5->MaximumLength = *v15;
      a5->Length = v17;
      memmove(PoolWithTag, *(const void **)(v12 + 72), *v15);
    }
    else
    {
      RtlCopyUnicodeString(a5, (PCUNICODE_STRING)(v12 + 64));
    }
    memmove(a8, *(const void **)(v12 + 96), *(unsigned int *)(v12 + 104));
    *a7 = *(_DWORD *)(v12 + 104);
    v11 = 1;
  }
  ExReleaseFastMutex(FastMutex);
  FsRtlEmptyFreePoolList(v19);
  return v11;
}
