/*
 * XREFs of BgkpDisableConsole @ 0x14054F04C
 * Callers:
 *     BgkDestroy @ 0x140AEFA28 (BgkDestroy.c)
 * Callees:
 *     ExRundownCompleted @ 0x140208880 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A210 (ExWaitForRundownProtectionRelease.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140C0BD38);
  ExRundownCompleted(&stru_140C0BD38);
}
