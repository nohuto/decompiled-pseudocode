/*
 * XREFs of RtlpCtFreeMemory @ 0x1409195A0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058E5E0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0x67744364u);
}
