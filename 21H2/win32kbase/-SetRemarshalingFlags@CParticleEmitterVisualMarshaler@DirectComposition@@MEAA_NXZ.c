/*
 * XREFs of ?SetRemarshalingFlags@CParticleEmitterVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228570
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021BA90 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CParticleEmitterVisualMarshaler *this)
{
  char v1; // di
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx

  v1 = 0;
  if ( *((_QWORD *)this + 48) )
    *((_DWORD *)this + 139) |= 2u;
  if ( *((float *)this + 98) != 0.0 )
    *((_DWORD *)this + 139) |= 4u;
  if ( *((float *)this + 99) != 0.016666668 )
    *((_DWORD *)this + 139) |= 8u;
  if ( *((float *)this + 100) != 0.0 )
    *((_DWORD *)this + 139) |= 0x10u;
  if ( *((_DWORD *)this + 101) )
    *((_DWORD *)this + 139) |= 0x20u;
  if ( *((_QWORD *)this + 51) )
    *((_DWORD *)this + 139) |= 0x40u;
  if ( *((_QWORD *)this + 52) )
    *((_DWORD *)this + 139) |= 0x80u;
  if ( *((_DWORD *)this + 106) )
    *((_DWORD *)this + 139) |= 0x100u;
  if ( *((float *)this + 107) != 0.0 )
    *((_DWORD *)this + 139) |= 0x200u;
  if ( *((_QWORD *)this + 54) )
    *((_DWORD *)this + 139) |= 0x400u;
  if ( *((float *)this + 110) != 0.0 )
    *((_DWORD *)this + 139) |= 0x800u;
  if ( *((float *)this + 111) != 0.0 )
    *((_DWORD *)this + 139) |= 0x1000u;
  if ( *((float *)this + 112) != 0.0 )
    *((_DWORD *)this + 139) |= 0x2000u;
  if ( *((float *)this + 113) != 0.0 )
    *((_DWORD *)this + 139) |= 0x4000u;
  v3 = *((_DWORD *)this + 139);
  if ( *((_DWORD *)this + 114) != 10000 )
    v3 |= 0x8000u;
  v4 = v3 | 0x10000;
  if ( *((float *)this + 118) != 1.0 )
    v4 |= 0x20000u;
  if ( *((float *)this + 119) != 0.0 )
    v4 |= 0x40000u;
  v5 = v4 | 0x80000;
  if ( *((_DWORD *)this + 123) )
    v5 |= 0x100000u;
  v6 = v5 | 0x200000;
  *((_DWORD *)this + 139) = v6;
  v7 = v6;
  if ( *((_QWORD *)this + 64) )
  {
    v6 |= 0x400000u;
    *((_DWORD *)this + 139) = v6;
    v7 = v6;
  }
  if ( *((_QWORD *)this + 65) )
  {
    v7 = v6 | 0x800000;
    *((_DWORD *)this + 139) = v6 | 0x800000;
  }
  *((_QWORD *)this + 66) = 0LL;
  if ( *((_QWORD *)this + 68) )
  {
    v7 |= 0x1000000u;
    *((_DWORD *)this + 139) = v7;
  }
  if ( *((_BYTE *)this + 552) )
    *((_DWORD *)this + 139) = v7 | 0x2000000;
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || (*((_DWORD *)this + 139) & 0x3FFFFFE) != 0 )
    return 1;
  return v1;
}
