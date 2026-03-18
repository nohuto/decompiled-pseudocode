/*
 * XREFs of ?SetRemarshalingFlags@CParticleGeneratorMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CParticleGeneratorMarshaler::SetRemarshalingFlags(
        DirectComposition::CParticleGeneratorMarshaler *this)
{
  bool result; // al
  int v2; // edx
  int v3; // edx
  int v4; // edx

  result = 1;
  v2 = *((_DWORD *)this + 4) | 0x60;
  if ( *((_BYTE *)this + 88) != 1 )
    v2 = *((_DWORD *)this + 4) | 0xE0;
  if ( *((float *)this + 23) != 0.0 )
    v2 |= 0x100u;
  if ( *((float *)this + 24) != 1.0 )
    v2 |= 0x200u;
  if ( *((float *)this + 25) != 0.0 )
    v2 |= 0x400u;
  if ( *((float *)this + 26) != 0.0 )
    v2 |= 0x800u;
  v3 = v2 | 0xF000;
  if ( *((float *)this + 43) != 0.0 )
    v3 |= 0x10000u;
  if ( *((float *)this + 44) != 1.0 )
    v3 |= 0x20000u;
  v4 = v3 | 0xC0000;
  *((_DWORD *)this + 4) = v4;
  if ( *((_BYTE *)this + 204) != 1 )
  {
    v4 |= 0x100000u;
    *((_DWORD *)this + 4) = v4;
  }
  if ( *((float *)this + 52) != 1.0 )
  {
    v4 |= 0x200000u;
    *((_DWORD *)this + 4) = v4;
  }
  if ( *((float *)this + 53) != 1.0 )
    *((_DWORD *)this + 4) = v4 | 0x400000;
  return result;
}
