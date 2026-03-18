/*
 * XREFs of ?SetRemarshalingFlags@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02322F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0231FB0 (-SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CCompositionDistantLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionDistantLightMarshaler *this)
{
  if ( *((float *)this + 26) != 1.0 || *((float *)this + 27) != 1.0 || *((float *)this + 28) != 1.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 15) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 32) != 0.0 || *((float *)this + 33) != 0.0 || *((float *)this + 34) != -1.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((float *)this + 35) != 1.0 )
    *((_DWORD *)this + 4) |= 0x800u;
  return DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(this);
}
