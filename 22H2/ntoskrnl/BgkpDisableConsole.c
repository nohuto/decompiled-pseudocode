/*
 * XREFs of BgkpDisableConsole @ 0x1404FF62C
 * Callers:
 *     BgkDestroy @ 0x1409F4B08 (BgkDestroy.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402517A0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403427F0 (ExWaitForRundownProtectionRelease.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140C113B8);
  ExRundownCompleted(&stru_140C113B8);
}
