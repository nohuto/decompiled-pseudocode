/*
 * XREFs of RtlpFlsHeapFree @ 0x1407D1D18
 * Callers:
 *     RtlpFlsDataCleanup @ 0x14076F314 (RtlpFlsDataCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFlsHeapFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x6B534C46u);
}
