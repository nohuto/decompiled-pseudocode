/*
 * XREFs of RtlpFlsHeapFree @ 0x1406B79AC
 * Callers:
 *     RtlpFlsDataCleanup @ 0x1406B7804 (RtlpFlsDataCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFlsHeapFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x6B534C46u);
}
