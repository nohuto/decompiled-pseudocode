/*
 * XREFs of SharedFree @ 0x1C00A6980
 * Callers:
 *     HMFreeObject @ 0x1C004E3F0 (HMFreeObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SharedFree(PVOID BaseAddress)
{
  return RtlFreeHeap(gpvSharedAlloc, 0, BaseAddress);
}
