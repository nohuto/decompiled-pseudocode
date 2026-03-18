/*
 * XREFs of ?AllowsOcclusion@CRoundedRectangleShape@@UEBA_NXZ @ 0x18007F220
 * Callers:
 *     <none>
 * Callees:
 *     ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x18007F240 (-HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 */

bool __fastcall CRoundedRectangleShape::AllowsOcclusion(CRoundedRectangleShape *this)
{
  return !CRoundedRectangleGeometryData::HasIntersectingCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)this + 2)
                                                                                                + 16LL));
}
