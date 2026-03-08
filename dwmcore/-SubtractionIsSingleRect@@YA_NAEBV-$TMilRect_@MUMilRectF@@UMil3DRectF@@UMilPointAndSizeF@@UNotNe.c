/*
 * XREFs of ?SubtractionIsSingleRect@@YA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180017EBC
 * Callers:
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180086070 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 * Callees:
 *     <none>
 */

bool __fastcall SubtractionIsSingleRect(float *a1, float *a2)
{
  float v2; // xmm1_4

  v2 = a2[1];
  return v2 >= a1[1] && a1[3] >= a2[3] && (*a2 >= *a1 || a1[2] >= a2[2])
      || *a2 >= *a1 && a1[2] >= a2[2] && (v2 >= a1[1] || a1[3] >= a2[3]);
}
