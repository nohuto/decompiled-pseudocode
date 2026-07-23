/*
 * XREFs of RtlWalkHeap @ 0x1800F3310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlWalkHeap(PVOID HeapHandle, PRTL_HEAP_WALK_ENTRY Entry)
{
  return RtlpWalkHeapInternal((__int64)HeapHandle, (__int64)Entry);
}
