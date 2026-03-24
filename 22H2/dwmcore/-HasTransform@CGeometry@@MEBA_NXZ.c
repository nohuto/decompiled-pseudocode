/*
 * XREFs of ?HasTransform@CGeometry@@MEBA_NXZ @ 0x1800C2610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGeometry::HasTransform(CGeometry *this)
{
  return *((_QWORD *)this + 9) != 0LL;
}
