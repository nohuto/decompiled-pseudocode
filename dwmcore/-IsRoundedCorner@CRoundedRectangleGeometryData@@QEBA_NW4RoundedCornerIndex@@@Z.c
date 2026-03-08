/*
 * XREFs of ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x1800D3A18
 * Callers:
 *     _lambda_130f3fd38fafab82521855fb46aefe92_::operator() @ 0x1800143A4 (_lambda_130f3fd38fafab82521855fb46aefe92_--operator().c)
 *     ??0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18007F1B0 (--0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAU1@@Z @ 0x180080FC4 (-TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x180083710 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1800D32C4 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?IsRectangles@CRoundedRectangleShape@@UEBA_NPEAI@Z @ 0x1800D54D0 (-IsRectangles@CRoundedRectangleShape@@UEBA_NPEAI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CRoundedRectangleGeometryData::IsRoundedCorner(__int64 a1, unsigned int a2)
{
  char v2; // r8
  __int64 v3; // rax

  v2 = 0;
  if ( *(_BYTE *)(a1 + 52) )
    v3 = 16LL;
  else
    v3 = 8LL * a2 + 16;
  if ( *(float *)(v3 + a1) > 0.0 && *(float *)(v3 + a1 + 4) > 0.0 )
    return 1;
  return v2;
}
