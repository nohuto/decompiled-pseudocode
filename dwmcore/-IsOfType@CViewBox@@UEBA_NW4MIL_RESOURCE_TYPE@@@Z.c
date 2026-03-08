/*
 * XREFs of ?IsOfType@CViewBox@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C2670
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E01D0 (-IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CViewBox::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 194 )
    return 1;
  v2 = CComponentTransform2D::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
