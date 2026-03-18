/*
 * XREFs of ?SetRemarshalingFlags@CCompositionTextLineMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02282C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CTextObjectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228EC0 (-SetRemarshalingFlags@CTextObjectMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CCompositionTextLineMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionTextLineMarshaler *this)
{
  bool v2; // al
  char v3; // cl

  if ( *((float *)this + 22) != 0.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((float *)this + 23) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 24) != 0.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  v2 = DirectComposition::CTextObjectMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*((_DWORD *)this + 4) & 0x700) != 0 )
    return 1;
  return v3;
}
