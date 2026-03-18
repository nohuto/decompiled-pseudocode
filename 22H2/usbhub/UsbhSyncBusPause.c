/*
 * XREFs of UsbhSyncBusPause @ 0x1C0032244
 * Callers:
 *     UsbhHardReset_Action @ 0x1C003DA18 (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x1C003E308 (Usbh_HRS_Queued.c)
 *     UsbhAsyncStop @ 0x1C0042EBC (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0045290 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C0002AF0 (UsbhDispatch_BusEvent.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
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
