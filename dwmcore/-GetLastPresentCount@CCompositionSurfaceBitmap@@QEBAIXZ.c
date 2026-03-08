/*
 * XREFs of ?GetLastPresentCount@CCompositionSurfaceBitmap@@QEBAIXZ @ 0x18025034C
 * Callers:
 *     ?GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ @ 0x1802503A0 (-GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ.c)
 *     ?DxFlipConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCCompositionSurfaceBitmap@@@Z @ 0x180252EA8 (-DxFlipConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCCompositionSurfaceBitmap@@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetLastPresentCount(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 13);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 288LL))(v1);
  return result;
}
