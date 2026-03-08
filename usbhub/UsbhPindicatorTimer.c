/*
 * XREFs of UsbhPindicatorTimer @ 0x1C002F3F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C001E320 (UsbhQueueWorkItemEx.c)
 */

_BOOL8 __fastcall UsbhPindicatorTimer(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  return (UsbhQueueWorkItemEx(a2, 1u, (int)UsbhPindicatorWorker, a4, a3, 0x646E6950u, 0LL) & 0xC0000000) == -1073741824;
}
