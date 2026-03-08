/*
 * XREFs of ?LayerVisualHasTreeEffect@CDrawingContext@@AEBA_NPEBVCLayerVisual@@@Z @ 0x180016DC8
 * Callers:
 *     ?GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z @ 0x180064500 (-GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z.c)
 * Callees:
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800C3300 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CDrawingContext::LayerVisualHasTreeEffect(CDrawingContext *this, const struct CLayerVisual *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( !*((_QWORD *)a2 + 89) && !*((_QWORD *)a2 + 88) )
    return 0;
  if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(a2)
    && a2 == *(const struct CLayerVisual **)(*(_QWORD *)(v4 + 8056) + 64LL) )
  {
    v5 = *(_QWORD *)(v4 + 208);
    if ( v5 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v5 + 24) + 32LL))(v5 + 24) != (_QWORD)a2;
  }
  return 1;
}
