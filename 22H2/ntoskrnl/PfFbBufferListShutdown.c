/*
 * XREFs of PfFbBufferListShutdown @ 0x140564E6C
 * Callers:
 *     PfTCleanup @ 0x1408E040C (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1403427F0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
