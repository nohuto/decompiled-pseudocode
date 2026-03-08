/*
 * XREFs of ?HasClipBoundsInScope@CScopedClipStack@@QEBA_NXZ @ 0x1800DF434
 * Callers:
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800216AC (-GetTopGpuClipInScope@CScopedClipStack@@QEBAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?PushClipBoundsToScope@CScopedClipStack@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180021CC0 (-PushClipBoundsToScope@CScopedClipStack@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800748A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScopedClipStack::HasClipBoundsInScope(CScopedClipStack *this)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *((_QWORD *)this + 1);
  v2 = 0;
  if ( v1 != *(_QWORD *)this )
    return *(_QWORD *)(v1 - 168) != 0LL;
  return v2;
}
