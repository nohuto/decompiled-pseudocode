/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1409150F0
 * Callers:
 *     RtlpAllocateHeap @ 0x140588A70 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetNtGlobalFlags()
{
  return NtGlobalFlag;
}
