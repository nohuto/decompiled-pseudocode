/*
 * XREFs of PopResetActionDefaults @ 0x14081CEF8
 * Callers:
 *     PopExecutePowerAction @ 0x1407FEC6C (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_140C227EC = 1;
  dword_140C227E0 = 0;
  dword_140C227E8 = 0;
  byte_140C227DD = 0;
  if ( (PopAction & 2) == 0 )
  {
    LOBYTE(PopAction) = 0;
    byte_140C227C2 = 0;
    qword_140C227C4 = 0LL;
    dword_140C227D0 = 0;
    byte_140C227DC = 0;
    dword_140C227D4 = 16;
    dword_140C227CC = 268435459;
  }
}
