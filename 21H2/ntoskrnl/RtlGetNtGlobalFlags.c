/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1409BA690
 * Callers:
 *     RtlpAllocateHeap @ 0x1405E80B0 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetNtGlobalFlags()
{
  return NtGlobalFlag;
}
