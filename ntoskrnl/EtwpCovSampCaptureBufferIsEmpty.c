/*
 * XREFs of EtwpCovSampCaptureBufferIsEmpty @ 0x140461A12
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1408A3ADC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpCovSampCaptureBufferIsEmpty(__int64 a1)
{
  return *(_WORD *)(a1 + 62) == 0;
}
