/*
 * XREFs of UsbhHardResetWorker @ 0x1C003D9A0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001A550 (UsbhDispatch_HardResetEvent.c)
 */

void __fastcall UsbhHardResetWorker(__int64 DeviceObject, PVOID Context)
{
  _DWORD *v3; // rbx
  _DWORD *v4; // rax
  __int64 v5; // r9

  v3 = FdoExt(DeviceObject);
  v4 = FdoExt(DeviceObject);
  Log(DeviceObject, 4, 1919251287, (__int64)(v4 + 566), 0LL);
  UsbhDispatch_HardResetEvent(DeviceObject, v5, (v3[640] & 0x100000) != 0 ? 4 : 7);
}
