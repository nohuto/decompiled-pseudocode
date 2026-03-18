/*
 * XREFs of ?SetRemarshalingFlags@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0232C80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0231FB0 (-SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CCompositionPointLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionPointLightMarshaler *this)
{
  if ( *((float *)this + 26) != 1.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((float *)this + 27) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 28) != 0.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((float *)this + 29) != 1.0 || *((float *)this + 30) != 1.0 || *((float *)this + 31) != 1.0 )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((_QWORD *)this + 17) )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( *((float *)this + 36) != 0.0 || *((float *)this + 37) != 0.0 || *((float *)this + 38) != 100.0 )
    *((_DWORD *)this + 4) |= 0x2000u;
  if ( *((float *)this + 39) != 1.0 )
    *((_DWORD *)this + 4) |= 0x4000u;
  if ( *((float *)this + 40) != 0.0 )
    *((_DWORD *)this + 4) |= 0x8000u;
  if ( *((float *)this + 41) != 0.0 )
    *((_DWORD *)this + 4) |= 0x10000u;
  return DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(this);
}
