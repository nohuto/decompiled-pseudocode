/*
 * XREFs of ?SetRemarshalingFlags@CManipulationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0213780
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C020EA30 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::SetRemarshalingFlags(
        DirectComposition::CManipulationMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4) | 0xC0;
  *((_DWORD *)this + 4) = v1;
  if ( *((_QWORD *)this + 35) && *((_DWORD *)this + 37) && *((_WORD *)this + 76) )
    *((_DWORD *)this + 4) = v1 | 0x100;
  DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  return 1;
}
