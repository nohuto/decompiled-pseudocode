/*
 * XREFs of UsbhSyncBusResume @ 0x1C0030F24
 * Callers:
 *     UsbhSshSuspendHub @ 0x1C00063E0 (UsbhSshSuspendHub.c)
 *     UsbhFdoSetD0Warm @ 0x1C003B8A0 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhDispatch_BusEvent @ 0x1C000FC10 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhSyncBusResume(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // r10d

  FdoExt((__int64)a1);
  Log((__int64)a1, 2048, 1346458174, 0LL, 0LL);
  v5 = UsbhDispatch_BusEvent(a1, a2, v4 + 8);
  Log((__int64)a1, 2048, 1346458172, 0LL, v5);
  return v6;
}
