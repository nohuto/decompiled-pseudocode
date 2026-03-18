/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x1406831B8
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140201B70 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
