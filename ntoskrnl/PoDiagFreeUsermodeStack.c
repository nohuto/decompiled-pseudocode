/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x14067FDD8
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140201AD0 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
