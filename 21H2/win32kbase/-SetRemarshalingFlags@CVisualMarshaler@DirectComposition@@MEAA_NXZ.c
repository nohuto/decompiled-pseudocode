/*
 * XREFs of ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021BA90
 * Callers:
 *     ?SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C021BFB0 (-SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021C110 (-SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C021C6D0 (-SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228330 (-SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CParticleEmitterVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228570 (-SetRemarshalingFlags@CParticleEmitterVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSuperWetInkVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228D60 (-SetRemarshalingFlags@CSuperWetInkVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTextVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228EE0 (-SetRemarshalingFlags@CTextVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0233C00 (-SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0238AE0 (-SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0216428 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::SetRemarshalingFlags(DirectComposition::CVisualMarshaler *this)
{
  char v1; // di
  char v3; // cl

  v1 = 0;
  if ( *((_QWORD *)this + 23) )
    *((_DWORD *)this + 4) |= 0x4000u;
  if ( *((float *)this + 20) != 0.0 || *((float *)this + 21) != 0.0 || *((float *)this + 22) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 18) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 19) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_QWORD *)this + 20) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_QWORD *)this + 29) )
    *((_DWORD *)this + 4) |= 0x4000000u;
  if ( *((_QWORD *)this + 30) )
    *((_DWORD *)this + 94) |= 4u;
  if ( *((_DWORD *)this + 62) || *((_DWORD *)this + 64) || *((_DWORD *)this + 63) || *((_DWORD *)this + 65) )
    *((_DWORD *)this + 94) |= 8u;
  *((_QWORD *)this + 41) = 0LL;
  if ( *((_QWORD *)this + 43) )
    *((_DWORD *)this + 94) |= 1u;
  *((_QWORD *)this + 44) = 0LL;
  if ( *((_QWORD *)this + 46) )
    *((_DWORD *)this + 94) |= 2u;
  if ( *((_QWORD *)this + 22) )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((_QWORD *)this + 21) )
    *((_DWORD *)this + 4) |= 0x1000u;
  v3 = *((_BYTE *)this + 320);
  if ( (v3 & 0x40) == 0 )
    *((_DWORD *)this + 4) |= 0x800000u;
  if ( *((_DWORD *)this + 66) != -1
    || *((_DWORD *)this + 67) != -1
    || *((_DWORD *)this + 68) != -1
    || *((_DWORD *)this + 69) != -1
    || *((_DWORD *)this + 70) != -1
    || *((_DWORD *)this + 71) != -1 )
  {
    *((_DWORD *)this + 4) |= 0x8000u;
  }
  if ( (v3 & 0x18) != 0 || (*((_BYTE *)this + 321) & 3) != 0 )
    *((_DWORD *)this + 4) |= 0x10000u;
  if ( (v3 & 0x20) != 0 )
    *((_DWORD *)this + 4) |= 0x20000u;
  if ( *((_DWORD *)this + 78) )
    *((_DWORD *)this + 4) |= 0x40000u;
  if ( (v3 & 2) != 0 )
    *((_DWORD *)this + 4) |= 0x80000u;
  if ( *((_QWORD *)this + 28) )
    *((_DWORD *)this + 4) |= 0x100000u;
  if ( *((float *)this + 23) != 0.0 || *((float *)this + 24) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200000u;
  if ( *((float *)this + 30) != 1.0 )
    *((_DWORD *)this + 4) |= 0x400000u;
  if ( *((float *)this + 25) != 0.0 || *((float *)this + 26) != 0.0 || *((float *)this + 27) != 0.0 )
    *((_DWORD *)this + 4) |= 0x1000000u;
  if ( *((float *)this + 28) != 0.0 || *((float *)this + 29) != 0.0 )
    *((_DWORD *)this + 4) |= 0x2000000u;
  if ( (v3 & 1) != 0 )
    *((_DWORD *)this + 4) |= 0x10000000u;
  if ( *((_DWORD *)this + 72) )
    *((_DWORD *)this + 4) |= 0x8000000u;
  if ( *((_DWORD *)this + 73) )
    *((_DWORD *)this + 4) |= 0x20000000u;
  if ( *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 0.0
    || *((float *)this + 33) != 0.0
    || *((float *)this + 34) != 0.0 )
  {
    *((_DWORD *)this + 4) |= 0x40000000u;
  }
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x7F7FDF80) != 0
    || (*((_DWORD *)this + 94) & 0xF) != 0 )
  {
    return 1;
  }
  return v1;
}
