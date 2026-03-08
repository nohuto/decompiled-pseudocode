/*
 * XREFs of ?IsOfType@CRedirectVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001B710
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C2130 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CRedirectVisual::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 141 )
    return 1;
  v2 = CVisual::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
