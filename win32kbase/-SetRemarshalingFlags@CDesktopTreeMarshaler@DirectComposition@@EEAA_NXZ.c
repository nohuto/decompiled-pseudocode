/*
 * XREFs of ?SetRemarshalingFlags@CDesktopTreeMarshaler@DirectComposition@@EEAA_NXZ @ 0x1C0264260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CDesktopTreeMarshaler::SetRemarshalingFlags(
        DirectComposition::CDesktopTreeMarshaler *this)
{
  if ( *((_DWORD *)this + 14) || *((_DWORD *)this + 15) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x40u;
  return (*((_DWORD *)this + 4) & 0x40) != 0;
}
