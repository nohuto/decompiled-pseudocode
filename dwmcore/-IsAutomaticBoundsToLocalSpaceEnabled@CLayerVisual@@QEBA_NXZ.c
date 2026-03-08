/*
 * XREFs of ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800C3300
 * Callers:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180007AF0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?LayerVisualHasTreeEffect@CDrawingContext@@AEBA_NPEBVCLayerVisual@@@Z @ 0x180016DC8 (-LayerVisualHasTreeEffect@CDrawingContext@@AEBA_NPEBVCLayerVisual@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C2D30 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x1801F0D3C (-PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x1801F0E44 (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(CLayerVisual *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 728) )
  {
    if ( *((_BYTE *)this + 729) )
      return 1;
  }
  return result;
}
