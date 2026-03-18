/*
 * XREFs of ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800838E0
 * Callers:
 *     _lambda_130f3fd38fafab82521855fb46aefe92_::operator() @ 0x180014494 (_lambda_130f3fd38fafab82521855fb46aefe92_--operator().c)
 *     ?ContainsOnlyPolygons@CRoundedRectangleShape@@UEBA_NXZ @ 0x18007FA40 (-ContainsOnlyPolygons@CRoundedRectangleShape@@UEBA_NXZ.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180080750 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetBoundsForOcclusion@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180082AD0 (-GetBoundsForOcclusion@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1800D3AEC (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x1800D44C8 (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 */

char __fastcall CRoundedRectangleGeometryData::HasAnyRoundedCorners(CRoundedRectangleGeometryData *this)
{
  char v1; // r9
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( *((_BYTE *)this + 52) )
    return CRoundedRectangleGeometryData::IsRoundedCorner(this, 0LL);
  if ( *((float *)this + 4) > 0.0 && *((float *)this + 5) > 0.0
    || (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(this, 1LL)
    || (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(v3, 2LL)
    || (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(v4, 3LL) )
  {
    return 1;
  }
  return v1;
}
