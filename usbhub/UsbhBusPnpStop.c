/*
 * XREFs of UsbhBusPnpStop @ 0x1C0036F60
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C001CF30 (UsbhDispatch_BusEvent.c)
 *     UsbhDisableHardReset @ 0x1C003CFA4 (UsbhDisableHardReset.c)
 */

__int64 __fastcall UsbhBusPnpStop(__int64 a1, __int64 a2)
{
  UsbhDisableHardReset();
  return UsbhDispatch_BusEvent(a1, a2, 3);
}
