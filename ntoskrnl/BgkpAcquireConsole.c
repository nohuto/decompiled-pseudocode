/*
 * XREFs of BgkpAcquireConsole @ 0x14054CB88
 * Callers:
 *     BgkDisplayStringEx @ 0x14054C9A4 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x14054CAC0 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x14054CB10 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x140AEDF70 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140AEE040 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140AEE090 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140AEE120 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_140C0BC48) != 0;
}
