/*
 * XREFs of BgkpReleaseConsole @ 0x1404FF654
 * Callers:
 *     BgkDisplayCharacter @ 0x1409F6340 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1409F6410 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1409F6460 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1409F64F0 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection(&stru_140C113B8);
}
