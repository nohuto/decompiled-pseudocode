/*
 * XREFs of ?AllowsOcclusion@CRoundedRectangleShape@@UEBA_NXZ @ 0x18007F050
 * Callers:
 *     <none>
 * Callees:
 *     ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x18007F070 (-HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 */

bool __fastcall CRoundedRectangleShape::AllowsOcclusion(CRoundedRectangleShape *this)
{
  return !CRoundedRectangleGeometryData::HasIntersectingCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)this + 2)
                                                                                                + 16LL));
}
