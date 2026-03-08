/*
 * XREFs of XilUsbDevice_IsSecureUsbDevice @ 0x1C00481B4
 * Callers:
 *     TR_Create @ 0x1C006DDF8 (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall XilUsbDevice_IsSecureUsbDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 656);
}
