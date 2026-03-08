/*
 * XREFs of FsRtlAcquireToCreateMappedSection @ 0x1407D17DC
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140368300 (FsRtlCreateSectionForDataScan.c)
 *     MiCallCreateSectionFilters @ 0x1407D16B0 (MiCallCreateSectionFilters.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1407D1AF0 (FsRtlAcquireFileExclusiveCommon.c)
 */

__int64 __fastcall FsRtlAcquireToCreateMappedSection(
        struct _FILE_OBJECT *a1,
        char a2,
        __int64 a3,
        int a4,
        _DWORD *a5,
        _DWORD *a6)
{
  int v8; // edi
  PFAST_MUTEX *FsContext; // rbx
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12[2]; // [rsp+30h] [rbp-48h] BYREF

  *a5 = 0;
  *a6 = 0;
  *(_OWORD *)v12 = 0LL;
  LODWORD(v12[0]) = 16;
  v8 = FsRtlAcquireFileExclusiveCommon(a1, a4, (__int64)v12);
  if ( v8 >= 0 )
  {
    if ( (a2 & 0x44) != 0 )
    {
      FsContext = (PFAST_MUTEX *)a1->FsContext;
      if ( FsContext )
      {
        ExAcquireFastMutex(FsContext[6]);
        v11 = FsContext[6];
        *((_BYTE *)FsContext + 6) |= 0x10u;
        ExReleaseFastMutex(v11);
      }
    }
    if ( HIDWORD(v12[0]) >= 0xC )
      *a5 = v12[1];
    if ( HIDWORD(v12[0]) >= 0x10 )
      *a6 = HIDWORD(v12[1]);
  }
  return (unsigned int)v8;
}
