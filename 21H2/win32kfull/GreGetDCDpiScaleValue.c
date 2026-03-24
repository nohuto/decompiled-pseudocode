/*
 * XREFs of GreGetDCDpiScaleValue @ 0x1C0107724
 * Callers:
 *     NtGdiCreateDIBSection @ 0x1C00ABAE0 (NtGdiCreateDIBSection.c)
 *     GreCreateDIBitmapReal @ 0x1C00AC12C (GreCreateDIBitmapReal.c)
 *     BitBltSysBmp @ 0x1C010723C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C0107390 (NtUserBitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C010759C (PrepareHDCBITSBitmap.c)
 *     NtGdiGetDCDpiScaleValue @ 0x1C01621E0 (NtGdiGetDCDpiScaleValue.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x1C0107774 (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
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
