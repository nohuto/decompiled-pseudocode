/*
 * XREFs of ??$ReleaseInterface@VCChannelContext@@@@YAXAEAPEAVCChannelContext@@@Z @ 0x1800AAEE8
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800AA314 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x1800AAA4C (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x1800AAF10 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800AC684 (--1CAsyncFlushResponse@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B3CEC (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DBB94 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CChannelContext>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBaseT<IMILRefCount>::InternalRelease(v2);
    *a1 = 0LL;
  }
  return result;
}
