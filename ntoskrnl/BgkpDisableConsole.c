/*
 * XREFs of BgkpDisableConsole @ 0x14054CBAC
 * Callers:
 *     BgkDestroy @ 0x140AEBA68 (BgkDestroy.c)
 * Callees:
 *     ExRundownCompleted @ 0x140294280 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140C0BC48);
  ExRundownCompleted(&stru_140C0BC48);
}
