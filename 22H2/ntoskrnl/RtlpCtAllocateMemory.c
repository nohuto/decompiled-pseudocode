/*
 * XREFs of RtlpCtAllocateMemory @ 0x1409194A8
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058E520 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpCtAllocateMemory(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67744364u);
}
