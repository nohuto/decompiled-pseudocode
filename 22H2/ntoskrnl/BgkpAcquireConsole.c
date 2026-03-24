/*
 * XREFs of BgkpAcquireConsole @ 0x1404FF608
 * Callers:
 *     BgkDisplayStringEx @ 0x1404FF424 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1404FF540 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x1404FF590 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x1409F6340 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1409F6410 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1409F6460 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1409F64F0 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection(&stru_140C113B8) != 0;
}
