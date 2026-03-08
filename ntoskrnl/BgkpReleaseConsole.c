/*
 * XREFs of BgkpReleaseConsole @ 0x14054CBD4
 * Callers:
 *     BgkDisplayCharacter @ 0x140AEDF70 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140AEE040 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140AEE090 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140AEE120 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_140C0BC48);
}
