/*
 * XREFs of ?SetRemarshalingFlags@CParticleEmitterVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DF090
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E54C0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CParticleEmitterVisualMarshaler *this)
{
  char v1; // di
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 46) )
    *((_DWORD *)this + 136) |= 2u;
  if ( *((float *)this + 94) != 0.0 )
    *((_DWORD *)this + 136) |= 4u;
  if ( *((float *)this + 95) != 0.016666668 )
    *((_DWORD *)this + 136) |= 8u;
  if ( *((float *)this + 96) != 0.0 )
    *((_DWORD *)this + 136) |= 0x10u;
  if ( *((_DWORD *)this + 97) )
    *((_DWORD *)this + 136) |= 0x20u;
  if ( *((_QWORD *)this + 49) )
    *((_DWORD *)this + 136) |= 0x40u;
  if ( *((_QWORD *)this + 50) )
    *((_DWORD *)this + 136) |= 0x80u;
  if ( *((_DWORD *)this + 102) )
    *((_DWORD *)this + 136) |= 0x100u;
  if ( *((float *)this + 103) != 0.0 )
    *((_DWORD *)this + 136) |= 0x200u;
  if ( *((_QWORD *)this + 52) )
    *((_DWORD *)this + 136) |= 0x400u;
  if ( *((float *)this + 106) != 0.0 )
    *((_DWORD *)this + 136) |= 0x800u;
  if ( *((float *)this + 107) != 0.0 )
    *((_DWORD *)this + 136) |= 0x1000u;
  if ( *((float *)this + 108) != 0.0 )
    *((_DWORD *)this + 136) |= 0x2000u;
  if ( *((float *)this + 109) != 0.0 )
    *((_DWORD *)this + 136) |= 0x4000u;
  v3 = *((_DWORD *)this + 136);
  if ( *((_DWORD *)this + 110) != 10000 )
    v3 |= 0x8000u;
  v4 = v3 | 0x10000;
  if ( *((float *)this + 114) != 1.0 )
    v4 |= 0x20000u;
  if ( *((float *)this + 115) != 0.0 )
    v4 |= 0x40000u;
  v5 = v4 | 0x80000;
  if ( *((_DWORD *)this + 119) )
    v5 |= 0x100000u;
  v6 = v5 | 0x200000;
  *((_DWORD *)this + 136) = v6;
  if ( *((_QWORD *)this + 62) )
  {
    v6 |= 0x400000u;
    *((_DWORD *)this + 136) = v6;
  }
  if ( *((_QWORD *)this + 63) )
  {
    v6 |= 0x800000u;
    *((_DWORD *)this + 136) = v6;
  }
  if ( *((_QWORD *)this + 65) )
  {
    v6 |= 0x1000000u;
    *((_DWORD *)this + 134) = 0;
    *((_DWORD *)this + 136) = v6;
  }
  if ( *((_BYTE *)this + 540) )
    *((_DWORD *)this + 136) = v6 | 0x2000000;
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || (*((_DWORD *)this + 136) & 0x3FFFFFE) != 0 )
    return 1;
  return v1;
}
