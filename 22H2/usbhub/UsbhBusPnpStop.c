/*
 * XREFs of UsbhBusPnpStop @ 0x1C0037840
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C0002AF0 (UsbhDispatch_BusEvent.c)
 *     UsbhDisableHardReset @ 0x1C003D8F8 (UsbhDisableHardReset.c)
 */

__int64 __fastcall UsbhBusPnpStop(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  UsbhDisableHardReset();
  return UsbhDispatch_BusEvent(a1, a2, 3);
}
