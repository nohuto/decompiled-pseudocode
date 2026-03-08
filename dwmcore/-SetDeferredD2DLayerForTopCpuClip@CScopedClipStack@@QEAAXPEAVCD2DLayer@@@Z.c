/*
 * XREFs of ?SetDeferredD2DLayerForTopCpuClip@CScopedClipStack@@QEAAXPEAVCD2DLayer@@@Z @ 0x1801D7A14
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18007E934 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 * Callees:
 *     <none>
 */

void __fastcall CScopedClipStack::SetDeferredD2DLayerForTopCpuClip(CScopedClipStack *this, struct CD2DLayer *a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 234);
  if ( *(_QWORD *)(v2 - 16) )
    --*(_QWORD *)(*((_QWORD *)this + 1) - 160LL);
  *(_QWORD *)(v2 - 16) = a2;
  if ( a2 )
    ++*(_QWORD *)(*((_QWORD *)this + 1) - 160LL);
}
