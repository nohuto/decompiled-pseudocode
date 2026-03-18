/*
 * XREFs of GreGetDCDpiScaleValue @ 0x1C00C3E00
 * Callers:
 *     NtGdiCreateDIBSection @ 0x1C0029440 (NtGdiCreateDIBSection.c)
 *     GreCreateDIBitmapReal @ 0x1C002BC78 (GreCreateDIBitmapReal.c)
 *     BitBltSysBmp @ 0x1C00C2FD4 (BitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C00C37D8 (PrepareHDCBITSBitmap.c)
 *     NtUserBitBltSysBmp @ 0x1C014C140 (NtUserBitBltSysBmp.c)
 *     NtGdiGetDCDpiScaleValue @ 0x1C01702A0 (NtGdiGetDCDpiScaleValue.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x1C00C3E50 (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDCDpiScaleValue(HDC a1)
{
  unsigned int CachedDpiScaleValue; // ebx
  DC *v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
    CachedDpiScaleValue = DC::GetCachedDpiScaleValue(v3[0]);
  else
    CachedDpiScaleValue = 1;
  MDCOBJ::~MDCOBJ((MDCOBJ *)v3);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v4);
  return CachedDpiScaleValue;
}
