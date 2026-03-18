/*
 * XREFs of ?SetRemarshalingFlags@CGdiSpriteBitmapMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02283F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::SetRemarshalingFlags(
        DirectComposition::CGdiSpriteBitmapMarshaler *this)
{
  int v1; // eax

  *((_QWORD *)this + 8) = 0LL;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_DWORD *)this + 22) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_BYTE *)this + 92) )
    *((_DWORD *)this + 4) |= 0x80u;
  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 12) )
    v1 |= 0x100u;
  *((_DWORD *)this + 4) = v1 | 0x200;
  return 1;
}
