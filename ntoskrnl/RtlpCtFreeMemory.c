/*
 * XREFs of RtlpCtFreeMemory @ 0x1409BF260
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405AEB80 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0x67744364u);
}
