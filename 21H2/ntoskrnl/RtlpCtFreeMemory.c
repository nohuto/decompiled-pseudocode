/*
 * XREFs of RtlpCtFreeMemory @ 0x140919700
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058E810 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0x67744364u);
}
