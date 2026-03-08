/*
 * XREFs of ?IsOfType@CProxyGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800DFFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E019C (-IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CProxyGeometry::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 136 )
    return 1;
  v2 = CGeometry::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
