/*
 * XREFs of ?ConsumeDxFlipRect@CCompositionSurfaceInfo@@QEAA_NPEAUMilRectU@@@Z @ 0x180252E74
 * Callers:
 *     ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800D4C30 (-SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@PEBUtagCOMPOS.c)
 *     ?DxFlipConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCCompositionSurfaceBitmap@@@Z @ 0x180252EA8 (-DxFlipConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCCompositionSurfaceBitmap@@@.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800A81C0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall CCompositionSurfaceInfo::ConsumeDxFlipRect(CCompositionSurfaceInfo *this, struct MilRectU *a2)
{
  _OWORD *v2; // rdx
  __int64 v3; // rcx
  bool result; // al

  if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)this + 12) )
    return 0;
  result = 1;
  *v2 = *(_OWORD *)v3;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)v3 = 0LL;
  return result;
}
