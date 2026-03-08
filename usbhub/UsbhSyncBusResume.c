/*
 * XREFs of UsbhSyncBusResume @ 0x1C00318F8
 * Callers:
 *     UsbhSshSuspendHub @ 0x1C000DEF0 (UsbhSshSuspendHub.c)
 *     UsbhFdoSetD0Warm @ 0x1C003C220 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhDispatch_BusEvent @ 0x1C001CF30 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhSyncBusResume(__int64 a1, __int64 a2)
{
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // r10d

  FdoExt(a1);
  Log(a1, 2048, 1346458174, 0LL, 0LL);
  v5 = UsbhDispatch_BusEvent(a1, a2, v4 + 8);
  Log(a1, 2048, 1346458172, 0LL, v5);
  return v6;
}
