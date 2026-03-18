/*
 * XREFs of ?SetRemarshalingFlags@CHolographicCompositionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022DC70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0215C04 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CHolographicCompositionMarshaler::SetRemarshalingFlags(
        DirectComposition::CHolographicCompositionMarshaler *this)
{
  if ( *((_BYTE *)this + 76) && *((_BYTE *)this + 96) )
    *((_DWORD *)this + 4) |= 0x40u;
  DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  return 1;
}
