/*
 * XREFs of ?SetRemarshalingFlags@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0233310
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0231FB0 (-SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CCompositionSpotLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionSpotLightMarshaler *this)
{
  if ( *((float *)this + 26) != 1.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((float *)this + 27) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 28) != 0.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_QWORD *)this + 15) )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((float *)this + 35) != 0.0 || *((float *)this + 36) != 0.0 || *((float *)this + 37) != -1.0 )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( *((float *)this + 32) != 0.0 || *((float *)this + 33) != 0.0 || *((float *)this + 34) != 100.0 )
    *((_DWORD *)this + 4) |= 0x10000u;
  if ( *((float *)this + 38) != 0.52359879 )
    *((_DWORD *)this + 4) |= 0x2000u;
  if ( *((float *)this + 39) != 1.5707964 )
    *((_DWORD *)this + 4) |= 0x20000u;
  if ( *((float *)this + 40) != 1.0 || *((float *)this + 41) != 1.0 || *((float *)this + 42) != 1.0 )
    *((_DWORD *)this + 4) |= 0x4000u;
  if ( *((float *)this + 44) != 1.0 || *((float *)this + 45) != 1.0 || *((float *)this + 46) != 1.0 )
    *((_DWORD *)this + 4) |= 0x40000u;
  if ( *((float *)this + 48) != 1.0 )
    *((_DWORD *)this + 4) |= 0x8000u;
  if ( *((float *)this + 49) != 1.0 )
    *((_DWORD *)this + 4) |= 0x80000u;
  if ( *((float *)this + 50) != 0.0 )
    *((_DWORD *)this + 4) |= 0x100000u;
  if ( *((float *)this + 51) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200000u;
  return DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(this);
}
