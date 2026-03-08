/*
 * XREFs of ??$ReleaseInterface@VCChannelContext@@@@YAXAEAPEAVCChannelContext@@@Z @ 0x1800AA7C8
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800A9BF4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x1800AA32C (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x1800AA7F0 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800ABF64 (--1CAsyncFlushResponse@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B0AEC (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
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
