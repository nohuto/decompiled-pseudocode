/*
 * XREFs of EtwpCovSampCaptureBufferIsEmpty @ 0x140469912
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1408A899C (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpCovSampCaptureBufferIsEmpty(__int64 a1)
{
  return *(_WORD *)(a1 + 62) == 0;
}
