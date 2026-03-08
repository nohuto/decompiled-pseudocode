/*
 * XREFs of ?SetRemarshalingFlags@CParticleAttractorMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CParticleAttractorMarshaler::SetRemarshalingFlags(
        DirectComposition::CParticleAttractorMarshaler *this)
{
  float v1; // xmm0_4
  int v2; // eax

  v1 = *((float *)this + 17);
  v2 = *((_DWORD *)this + 4) | 0x20;
  *((_DWORD *)this + 4) = v2;
  if ( v1 != 0.0 )
  {
    v2 |= 0x40u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((float *)this + 18) != 0.0 )
    *((_DWORD *)this + 4) = v2 | 0x80;
  return 1;
}
