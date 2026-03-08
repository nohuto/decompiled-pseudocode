/*
 * XREFs of PdcResetEvent @ 0x1405B510C
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x1409C5AA0 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 */

LONG __fastcall PdcResetEvent(struct _KEVENT *a1)
{
  return KeResetEvent(a1);
}
