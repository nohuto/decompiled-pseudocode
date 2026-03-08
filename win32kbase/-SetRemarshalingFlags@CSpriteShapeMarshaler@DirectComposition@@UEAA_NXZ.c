/*
 * XREFs of ?SetRemarshalingFlags@CSpriteShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C02543B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSpriteShapeMarshaler::SetRemarshalingFlags(
        DirectComposition::CSpriteShapeMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 9) )
    *v1 |= 0x40u;
  if ( *((_QWORD *)this + 8) )
    *v1 |= 0x80u;
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x100u;
  if ( *((_DWORD *)this + 24) )
  {
    *v1 |= 0x400u;
    *((_DWORD *)this + 25) = 0;
  }
  *v1 |= 0x200u;
  *v1 |= 0x7800u;
  return 1;
}
