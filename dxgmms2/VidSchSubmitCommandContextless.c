/*
 * XREFs of VidSchSubmitCommandContextless @ 0x1C0040AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0002C54 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C003B608 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 */

__int64 __fastcall VidSchSubmitCommandContextless(char *Src, struct _VIDSCH_DEVICE *a2, __int64 a3)
{
  struct _VIDSCH_GLOBAL *v5; // rsi
  __int64 result; // rax
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 && a2 && Src )
  {
    v5 = *(struct _VIDSCH_GLOBAL **)(a3 + 8);
    v7 = *(_QWORD *)Src;
    if ( (v7 & 0x20) == 0 )
      return VidSchiRedirectedFlipWaitOnSyncObject(v5, Src, a3, &v7);
    result = VidSchValidatePresentFlags((struct VIDSCH_SUBMIT_DATA2 *)Src, a2, (struct _VIDSCH_SUBMIT_FLAGS *)&v7);
    if ( (int)result >= 0 )
      return VidSchiRedirectedFlipWaitOnSyncObject(v5, Src, a3, &v7);
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL pointer in pVidSchSyncObj, pVidSchDevice or pVidSchSubmitCommandData, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  return result;
}
