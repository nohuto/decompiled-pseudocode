/*
 * XREFs of ?ShouldMerge@CDirtyRegion@@AEAA_NII@Z @ 0x1800E9494
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180041810 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?CalcOvehead@@YAMAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800E9508 (-CalcOvehead@@YAMAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 */

char __fastcall CDirtyRegion::ShouldMerge(CDirtyRegion *this, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10

  v3 = 0;
  if ( *((_BYTE *)this + 4423)
    || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
         (float *)this + 4 * a2 + 392,
         (float *)this + 4 * a3 + 392)
    || *(float *)(v5 + 4 * (v6 + 8 * v4) + 2080) >= 0.86000001
    || CalcOvehead() < 50000.0 )
  {
    return 1;
  }
  return v3;
}
