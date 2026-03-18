/*
 * XREFs of ?SetRemarshalingFlags@CTextObjectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228EC0
 * Callers:
 *     ?SetRemarshalingFlags@CCompositionGlyphRunMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228280 (-SetRemarshalingFlags@CCompositionGlyphRunMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompositionTextLineMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02282C0 (-SetRemarshalingFlags@CCompositionTextLineMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CTextObjectMarshaler::SetRemarshalingFlags(
        DirectComposition::CTextObjectMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 8) )
    v1 |= 0x20u;
  *((_DWORD *)this + 4) = v1 | 0xC0;
  return 1;
}
