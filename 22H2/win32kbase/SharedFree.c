/*
 * XREFs of SharedFree @ 0x1C0093DD0
 * Callers:
 *     HMFreeObject @ 0x1C0009390 (HMFreeObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SharedFree(PVOID BaseAddress)
{
  return RtlFreeHeap(gpvSharedAlloc, 0, BaseAddress);
}
