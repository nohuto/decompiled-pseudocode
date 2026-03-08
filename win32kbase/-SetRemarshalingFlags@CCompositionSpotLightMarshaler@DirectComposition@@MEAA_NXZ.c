/*
 * XREFs of ?SetRemarshalingFlags@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C026A880
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0269570 (-SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CCompositionSpotLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionSpotLightMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 24) != 1.0 )
    *v1 |= 0x100u;
  if ( *((float *)this + 25) != 0.0 )
    *v1 |= 0x200u;
  if ( *((float *)this + 26) != 0.0 )
    *v1 |= 0x400u;
  if ( *((_QWORD *)this + 14) )
    *v1 |= 0x800u;
  if ( *((float *)this + 33) != 0.0 || *((float *)this + 34) != 0.0 || *((float *)this + 35) != -1.0 )
    *v1 |= 0x1000u;
  if ( *((float *)this + 30) != 0.0 || *((float *)this + 31) != 0.0 || *((float *)this + 32) != 100.0 )
    *v1 |= 0x10000u;
  if ( *((float *)this + 36) != 0.52359879 )
    *v1 |= 0x2000u;
  if ( *((float *)this + 37) != 1.5707964 )
    *v1 |= 0x20000u;
  if ( *((float *)this + 38) != 1.0 || *((float *)this + 39) != 1.0 || *((float *)this + 40) != 1.0 )
    *v1 |= 0x4000u;
  if ( *((float *)this + 42) != 1.0 || *((float *)this + 43) != 1.0 || *((float *)this + 44) != 1.0 )
    *v1 |= 0x40000u;
  if ( *((float *)this + 46) != 1.0 )
    *v1 |= 0x8000u;
  if ( *((float *)this + 47) != 1.0 )
    *v1 |= 0x80000u;
  if ( *((float *)this + 48) != 0.0 )
    *v1 |= 0x100000u;
  if ( *((float *)this + 49) != 0.0 )
    *v1 |= 0x200000u;
  return DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(this);
}
