/*
 * XREFs of ?IsOfType@CLegacyStereoRenderTarget@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C24B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CLegacyRenderTarget@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180103A40 (-IsOfType@CLegacyRenderTarget@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CLegacyStereoRenderTarget::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 97 )
    return 1;
  v2 = CLegacyRenderTarget::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
