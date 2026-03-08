/*
 * XREFs of UsbhSetPdoSelectiveSuspendedKey @ 0x1C0046E90
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSetPdoRegistryParameter @ 0x1C0046D44 (UsbhSetPdoRegistryParameter.c)
 */

__int64 __fastcall UsbhSetPdoSelectiveSuspendedKey(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  int Data; // [rsp+50h] [rbp+18h] BYREF

  Data = 1;
  return UsbhSetPdoRegistryParameter(a3, L"DeviceSelectiveSuspended", 4u, &Data, 4u);
}
