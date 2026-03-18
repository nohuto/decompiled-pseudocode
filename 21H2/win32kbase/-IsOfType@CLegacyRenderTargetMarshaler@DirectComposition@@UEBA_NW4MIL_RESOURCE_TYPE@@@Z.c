/*
 * XREFs of ?IsOfType@CLegacyRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C008B830
 * Callers:
 *     ?IsOfType@CLegacyStereoRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0214B60 (-IsOfType@CLegacyStereoRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@CResourceMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C008B860 (-IsOfType@CResourceMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall DirectComposition::CLegacyRenderTargetMarshaler::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 94 )
    return 1;
  v2 = DirectComposition::CResourceMarshaler::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
