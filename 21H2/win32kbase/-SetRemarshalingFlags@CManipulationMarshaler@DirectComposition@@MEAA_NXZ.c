/*
 * XREFs of ?SetRemarshalingFlags@CManipulationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021ACF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0215C04 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::SetRemarshalingFlags(
        DirectComposition::CManipulationMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4) | 0xC0;
  *((_DWORD *)this + 4) = v1;
  if ( *((_QWORD *)this + 36) && *((_DWORD *)this + 39) && *((_WORD *)this + 80) )
    *((_DWORD *)this + 4) = v1 | 0x100;
  DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  return 1;
}
