/*
 * XREFs of RtlGetNtGlobalFlags @ 0x140915200
 * Callers:
 *     RtlpAllocateHeap @ 0x140588D60 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
