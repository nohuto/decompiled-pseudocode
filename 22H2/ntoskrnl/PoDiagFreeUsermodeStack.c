/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x140733784
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14036C734 (ExCleanTimerResolutionRequest.c)
 *     NtSetTimerResolution @ 0x140709FF0 (NtSetTimerResolution.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
