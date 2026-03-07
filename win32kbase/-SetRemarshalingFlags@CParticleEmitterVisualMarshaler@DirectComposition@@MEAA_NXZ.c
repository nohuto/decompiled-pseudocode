char __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CParticleEmitterVisualMarshaler *this)
{
  char v1; // di
  int *v2; // rbx
  float v3; // xmm0_4
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v1 = 0;
  v2 = (int *)((char *)this + 548);
  if ( *((_QWORD *)this + 47) )
    *v2 |= 2u;
  if ( *((float *)this + 96) != 0.0 )
    *v2 |= 4u;
  if ( *((float *)this + 97) != 0.016666668 )
    *v2 |= 8u;
  if ( *((float *)this + 98) != 0.0 )
    *v2 |= 0x10u;
  if ( *((_DWORD *)this + 99) )
    *v2 |= 0x20u;
  if ( *((_QWORD *)this + 50) )
    *v2 |= 0x40u;
  if ( *((_QWORD *)this + 51) )
    *v2 |= 0x80u;
  if ( *((_DWORD *)this + 104) )
    *v2 |= 0x100u;
  if ( *((float *)this + 105) != 0.0 )
    *v2 |= 0x200u;
  if ( *((_QWORD *)this + 53) )
    *v2 |= 0x400u;
  if ( *((float *)this + 108) != 0.0 )
    *v2 |= 0x800u;
  if ( *((float *)this + 109) != 0.0 )
    *v2 |= 0x1000u;
  if ( *((float *)this + 110) != 0.0 )
    *v2 |= 0x2000u;
  if ( *((float *)this + 111) != 0.0 )
    *v2 |= 0x4000u;
  if ( *((_DWORD *)this + 112) != 10000 )
    *v2 |= 0x8000u;
  v3 = *((float *)this + 116);
  v4 = *v2 | 0x10000;
  *v2 = v4;
  if ( v3 != 1.0 )
  {
    v4 |= 0x20000u;
    *v2 = v4;
  }
  if ( *((float *)this + 117) != 0.0 )
  {
    v4 |= 0x40000u;
    *v2 = v4;
  }
  v5 = v4 | 0x80000;
  *v2 = v5;
  if ( *((_DWORD *)this + 121) )
  {
    v5 |= 0x100000u;
    *v2 = v5;
  }
  v6 = v5 | 0x200000;
  *v2 = v6;
  if ( *((_QWORD *)this + 63) )
  {
    v6 |= 0x400000u;
    *v2 = v6;
  }
  if ( *((_QWORD *)this + 64) )
    *v2 = v6 | 0x800000;
  *((_QWORD *)this + 65) = 0LL;
  if ( *((_QWORD *)this + 67) )
    *v2 |= 0x1000000u;
  if ( *((_BYTE *)this + 544) )
    *v2 |= 0x2000000u;
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || (*v2 & 0x3FFFFFE) != 0 )
    return 1;
  return v1;
}
