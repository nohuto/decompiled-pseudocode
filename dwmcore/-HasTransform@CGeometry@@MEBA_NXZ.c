/*
 * XREFs of ?HasTransform@CGeometry@@MEBA_NXZ @ 0x1800DB410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGeometry::HasTransform(CGeometry *this)
{
  return *((_QWORD *)this + 10) != 0LL;
}
