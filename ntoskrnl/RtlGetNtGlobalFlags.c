/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1409BA7C0
 * Callers:
 *     RtlpAllocateHeap @ 0x1405A8E28 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetNtGlobalFlags()
{
  return NtGlobalFlag;
}
