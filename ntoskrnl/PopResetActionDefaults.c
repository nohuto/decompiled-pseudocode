/*
 * XREFs of PopResetActionDefaults @ 0x140860E68
 * Callers:
 *     PopExecutePowerAction @ 0x1409867F4 (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_140C3CD8C = 1;
  dword_140C3CD80 = 0;
  dword_140C3CD88 = 0;
  byte_140C3CD7D = 0;
  if ( (PopAction & 2) == 0 )
  {
    LOBYTE(PopAction) = 0;
    byte_140C3CD62 = 0;
    qword_140C3CD64 = 0LL;
    dword_140C3CD70 = 0;
    byte_140C3CD7C = 0;
    dword_140C3CD74 = 16;
    dword_140C3CD6C = 268435459;
  }
}
