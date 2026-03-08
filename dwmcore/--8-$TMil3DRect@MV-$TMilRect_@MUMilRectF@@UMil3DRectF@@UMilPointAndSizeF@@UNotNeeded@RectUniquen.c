/*
 * XREFs of ??8?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV0@@Z @ 0x18001808C
 * Callers:
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x1800A43BC (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::operator==(
        float *a1,
        float *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[4] == a2[4] && a1[2] == a2[2] && a1[3] == a2[3] && a1[5] == a2[5];
}
