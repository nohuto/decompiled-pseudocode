/*
 * XREFs of UsbDevice_OnResetDisableCompletion @ 0x1C00495D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_DisableCompletion @ 0x1C0048860 (UsbDevice_DisableCompletion.c)
 */

char __fastcall UsbDevice_OnResetDisableCompletion(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return UsbDevice_DisableCompletion(a1, a2, 2, a4);
}
