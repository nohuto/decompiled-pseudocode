/*
 * XREFs of GreGetDCDpiScaleValue @ 0x1C0014EA8
 * Callers:
 *     PrepareHDCBITSBitmap @ 0x1C00162BC (PrepareHDCBITSBitmap.c)
 *     NtGdiCreateDIBSection @ 0x1C008FFA0 (NtGdiCreateDIBSection.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C00906B0 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     BitBltSysBmp @ 0x1C00D04B0 (BitBltSysBmp.c)
 *     NtGdiGetDCDpiScaleValue @ 0x1C01500F0 (NtGdiGetDCDpiScaleValue.c)
 *     NtUserBitBltSysBmp @ 0x1C01CDE10 (NtUserBitBltSysBmp.c)
 * Callees:
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x1C0014EF0 (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDCDpiScaleValue(HDC a1)
{
  unsigned int CachedDpiScaleValue; // ebx
  DC *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( !v3[0] )
    return 1LL;
  CachedDpiScaleValue = DC::GetCachedDpiScaleValue(v3[0]);
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return CachedDpiScaleValue;
}
