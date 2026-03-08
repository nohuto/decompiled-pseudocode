/*
 * XREFs of PfFbBufferListShutdown @ 0x140580BA4
 * Callers:
 *     PfTCleanup @ 0x14097C168 (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
