/*
 * XREFs of PopResetActionDefaults @ 0x14078E8C8
 * Callers:
 *     PopExecutePowerAction @ 0x140775C28 (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_140C23A6C = 1;
  dword_140C23A60 = 0;
  dword_140C23A68 = 0;
  byte_140C23A5D = 0;
  if ( (PopAction & 2) == 0 )
  {
    LOBYTE(PopAction) = 0;
    byte_140C23A42 = 0;
    qword_140C23A44 = 0LL;
    dword_140C23A50 = 0;
    byte_140C23A5C = 0;
    dword_140C23A54 = 16;
    dword_140C23A4C = 268435459;
  }
}
