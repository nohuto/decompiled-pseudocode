/*
 * XREFs of RtlpFlsHeapFree @ 0x1407DBE1C
 * Callers:
 *     RtlpFlsDataCleanup @ 0x1407DAFFC (RtlpFlsDataCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFlsHeapFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x6B534C46u);
}
