/*
 * XREFs of SharedFree @ 0x1C0159A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SharedFree(PVOID BaseAddress)
{
  return RtlFreeHeap(gpvSharedAlloc, 0, BaseAddress);
}
