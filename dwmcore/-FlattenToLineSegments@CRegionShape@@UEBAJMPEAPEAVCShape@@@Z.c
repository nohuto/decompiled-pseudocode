/*
 * XREFs of ?FlattenToLineSegments@CRegionShape@@UEBAJMPEAPEAVCShape@@@Z @ 0x1801AEDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRegionShape::FlattenToLineSegments(CRegionShape *this, float a2, struct CShape **a3)
{
  return CShape::CopyShape(this, 0LL, a3);
}
