/*
 * XREFs of BgkpReleaseConsole @ 0x14054F074
 * Callers:
 *     BgkDisplayCharacter @ 0x140AF1F70 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140AF2040 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140AF2090 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140AF2120 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_140C0BD38);
}
