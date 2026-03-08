/*
 * XREFs of ?SetRemarshalingFlags@CParticleBehaviorsMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CParticleBehaviorsMarshaler::SetRemarshalingFlags(
        DirectComposition::CParticleBehaviorsMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 8) )
    *v1 |= 0x40u;
  if ( *((_QWORD *)this + 9) )
    *v1 |= 0x80u;
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x100u;
  if ( *((_QWORD *)this + 11) )
    *v1 |= 0x200u;
  if ( *((_QWORD *)this + 12) )
    *v1 |= 0x400u;
  if ( *((_QWORD *)this + 13) )
    *v1 |= 0x800u;
  if ( *((_QWORD *)this + 14) )
    *v1 |= 0x1000u;
  if ( *((_QWORD *)this + 15) )
    *v1 |= 0x2000u;
  if ( *((_QWORD *)this + 16) )
    *v1 |= 0x4000u;
  if ( *((_QWORD *)this + 17) )
    *v1 |= 0x8000u;
  return (*v1 & 0xFFE0) != 0;
}
