/*
 * XREFs of PdcWaitForEvent @ 0x1409C8C6C
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x1409C8AF0 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PdcWaitForEvent(void *a1)
{
  return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
}
