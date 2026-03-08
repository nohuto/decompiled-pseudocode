/*
 * XREFs of ?SetRemarshalingFlags@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::SetRemarshalingFlags(
        DirectComposition::CParticleBaseBehaviorMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  *((_QWORD *)this + 7) = 0LL;
  if ( *((_QWORD *)this + 9) )
    *v1 |= 0x20u;
  if ( *((_DWORD *)this + 20) )
    *v1 |= 0x40u;
  return (*v1 & 0x60) != 0;
}
