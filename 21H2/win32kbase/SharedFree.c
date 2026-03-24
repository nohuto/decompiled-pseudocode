/*
 * XREFs of SharedFree @ 0x1C0093010
 * Callers:
 *     HMFreeObject @ 0x1C0007F10 (HMFreeObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SharedFree(PVOID BaseAddress)
{
  return RtlFreeHeap(gpvSharedAlloc, 0, BaseAddress);
}
