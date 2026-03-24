/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1409150A0
 * Callers:
 *     RtlpAllocateHeap @ 0x140588B30 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetNtGlobalFlags()
{
  return NtGlobalFlag;
}
