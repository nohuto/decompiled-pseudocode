/*
 * XREFs of UsbhSyncBusPause @ 0x1C0030E9C
 * Callers:
 *     UsbhHardReset_Action @ 0x1C003C838 (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x1C003D128 (Usbh_HRS_Queued.c)
 *     UsbhAsyncStop @ 0x1C0041C0C (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0043FE0 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhDispatch_BusEvent @ 0x1C000FC10 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhSyncBusPause(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v6; // eax
  unsigned int v7; // r10d

  v3 = a3;
  FdoExt((__int64)a1);
  Log((__int64)a1, 2048, 1346458174, v3, a2);
  *(_DWORD *)(a2 + 128) = v3;
  v6 = UsbhDispatch_BusEvent(a1, a2, 7);
  Log((__int64)a1, 2048, 1346458172, 0LL, v6);
  return v7;
}
