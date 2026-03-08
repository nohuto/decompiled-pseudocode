/*
 * XREFs of ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x180049280
 * Callers:
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18004AB88 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800A4C98 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1800F4560 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1802481CC (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct CBrushRenderingGraph *__fastcall CBrush::GetBrushGraph(CBrush *this, __int64 a2)
{
  if ( *((_BYTE *)this + 80) && !*((_QWORD *)this + 9) )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(CBrush *, __int64))(*(_QWORD *)this + 320LL))(this, a2);
  }
  return (struct CBrushRenderingGraph *)*((_QWORD *)this + 9);
}
