/*
 * XREFs of ?SetRemarshalingFlags@CDesktopTreeMarshaler@DirectComposition@@EEAA_NXZ @ 0x1C022C3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CDesktopTreeMarshaler::SetRemarshalingFlags(
        DirectComposition::CDesktopTreeMarshaler *this)
{
  if ( *((_DWORD *)this + 16) || *((_DWORD *)this + 17) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x40u;
  return (*((_DWORD *)this + 4) & 0x40) != 0;
}
