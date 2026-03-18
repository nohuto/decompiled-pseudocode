/*
 * XREFs of PopResetActionDefaults @ 0x140865478
 * Callers:
 *     PopExecutePowerAction @ 0x1409898A4 (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_140C3CE4C = 1;
  dword_140C3CE40 = 0;
  dword_140C3CE48 = 0;
  byte_140C3CE3D = 0;
  if ( (PopAction & 2) == 0 )
  {
    LOBYTE(PopAction) = 0;
    byte_140C3CE22 = 0;
    qword_140C3CE24 = 0LL;
    dword_140C3CE30 = 0;
    byte_140C3CE3C = 0;
    dword_140C3CE34 = 16;
    dword_140C3CE2C = 268435459;
  }
}
