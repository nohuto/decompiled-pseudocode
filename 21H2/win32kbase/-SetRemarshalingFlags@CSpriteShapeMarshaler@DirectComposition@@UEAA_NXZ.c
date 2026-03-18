/*
 * XREFs of ?SetRemarshalingFlags@CSpriteShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C021E830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSpriteShapeMarshaler::SetRemarshalingFlags(
        DirectComposition::CSpriteShapeMarshaler *this)
{
  int v1; // eax

  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 11) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_DWORD *)this + 26) )
  {
    *((_DWORD *)this + 27) = 0;
    v1 = *((_DWORD *)this + 4) | 0x400;
  }
  else
  {
    v1 = *((_DWORD *)this + 4);
  }
  *((_DWORD *)this + 4) = v1 | 0x7A00;
  return 1;
}
