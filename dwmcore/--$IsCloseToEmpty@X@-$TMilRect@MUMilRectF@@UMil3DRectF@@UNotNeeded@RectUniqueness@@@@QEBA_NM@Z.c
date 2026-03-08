/*
 * XREFs of ??$IsCloseToEmpty@X@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NM@Z @ 0x180014624
 * Callers:
 *     ?TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z @ 0x18001421C (-TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsCloseToEmpty<void>(
        float *a1,
        float a2)
{
  return (float)(a1[2] - a2) <= *a1 || (float)(a1[3] - a2) <= a1[1];
}
