/*
 * XREFs of ?SetRemarshalingFlags@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0269710
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0269570 (-SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CCompositionAmbientLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionAmbientLightMarshaler *this)
{
  if ( *((float *)this + 24) != 1.0 || *((float *)this + 25) != 1.0 || *((float *)this + 26) != 1.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((float *)this + 28) != 1.0 )
    *((_DWORD *)this + 4) |= 0x200u;
  return DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(this);
}
