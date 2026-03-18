/*
 * XREFs of ?IsOfType@CEllipseGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E0B30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E0C4C (-IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CEllipseGeometry::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 59 )
    return 1;
  v2 = CGeometry::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
