/*
 * XREFs of ?SetRemarshalingFlags@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02698B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0269570 (-SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CCompositionDistantLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionDistantLightMarshaler *this)
{
  if ( *((float *)this + 24) != 1.0 || *((float *)this + 25) != 1.0 || *((float *)this + 26) != 1.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 14) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 30) != 0.0 || *((float *)this + 31) != 0.0 || *((float *)this + 32) != -1.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((float *)this + 33) != 1.0 )
    *((_DWORD *)this + 4) |= 0x800u;
  return DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(this);
}
