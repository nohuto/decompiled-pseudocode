/*
 * XREFs of PopResetActionDefaults @ 0x14078E9C8
 * Callers:
 *     PopExecutePowerAction @ 0x1407751C8 (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_140C2346C = 1;
  dword_140C23460 = 0;
  dword_140C23468 = 0;
  byte_140C2345D = 0;
  if ( (PopAction & 2) == 0 )
  {
    LOBYTE(PopAction) = 0;
    byte_140C23442 = 0;
    qword_140C23444 = 0LL;
    dword_140C23450 = 0;
    byte_140C2345C = 0;
    dword_140C23454 = 16;
    dword_140C2344C = 268435459;
  }
}
