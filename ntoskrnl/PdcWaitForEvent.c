/*
 * XREFs of PdcWaitForEvent @ 0x1409C5C1C
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x1409C5AA0 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PdcWaitForEvent(void *a1)
{
  return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
}
