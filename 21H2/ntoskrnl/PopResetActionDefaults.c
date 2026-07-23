/*
 * XREFs of PopResetActionDefaults @ 0x14078EB88
 * Callers:
 *     PopExecutePowerAction @ 0x140775388 (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_140C23A8C = 1;
  dword_140C23A80 = 0;
  dword_140C23A88 = 0;
  byte_140C23A7D = 0;
  if ( (PopAction & 2) == 0 )
  {
    LOBYTE(PopAction) = 0;
    byte_140C23A62 = 0;
    qword_140C23A64 = 0LL;
    dword_140C23A70 = 0;
    byte_140C23A7C = 0;
    dword_140C23A74 = 16;
    dword_140C23A6C = 268435459;
  }
}
