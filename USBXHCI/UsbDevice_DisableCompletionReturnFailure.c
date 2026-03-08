/*
 * XREFs of UsbDevice_DisableCompletionReturnFailure @ 0x1C0048B60
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_DisableCompletion @ 0x1C0048860 (UsbDevice_DisableCompletion.c)
 */

char __fastcall UsbDevice_DisableCompletionReturnFailure(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return UsbDevice_DisableCompletion(a1, a2, 1, a4);
}
