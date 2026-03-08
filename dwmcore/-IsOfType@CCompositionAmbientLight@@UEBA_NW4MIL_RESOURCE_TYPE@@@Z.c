/*
 * XREFs of ?IsOfType@CCompositionAmbientLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001C2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E0280 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CCompositionAmbientLight::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( ((a2 - 32) & 0xFFFFFFFB) == 0 )
    return 1;
  v4 = CPropertyChangeResource::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
