/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1409150F0
 * Callers:
 *     RtlpAllocateHeap @ 0x140588A70 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
