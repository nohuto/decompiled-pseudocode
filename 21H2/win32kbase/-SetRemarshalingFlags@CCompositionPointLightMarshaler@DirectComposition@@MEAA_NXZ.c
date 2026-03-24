/*
 * XREFs of ?SetRemarshalingFlags@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01F28D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01F1CE0 (-SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CCompositionPointLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionPointLightMarshaler *this)
{
  if ( *((float *)this + 24) != 1.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((float *)this + 25) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 26) != 0.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((float *)this + 27) != 1.0 || *((float *)this + 28) != 1.0 || *((float *)this + 29) != 1.0 )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((_QWORD *)this + 16) )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( *((float *)this + 34) != 0.0 || *((float *)this + 35) != 0.0 || *((float *)this + 36) != 100.0 )
    *((_DWORD *)this + 4) |= 0x2000u;
  if ( *((float *)this + 37) != 1.0 )
    *((_DWORD *)this + 4) |= 0x4000u;
  if ( *((float *)this + 38) != 0.0 )
    *((_DWORD *)this + 4) |= 0x8000u;
  if ( *((float *)this + 39) != 0.0 )
    *((_DWORD *)this + 4) |= 0x10000u;
  return DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(this);
}
