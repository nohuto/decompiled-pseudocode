/*
 * XREFs of UsbhSyncBusDisconnect @ 0x1C00317FC
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C000CE60 (UsbhFdoD0Worker_Action.c)
 *     UsbhHardReset_Action @ 0x1C003D0C8 (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x1C003D9BC (Usbh_HRS_Queued.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhDispatch_BusEvent @ 0x1C001CF30 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhSyncBusDisconnect(__int64 a1, __int64 a2)
{
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // r10d

  FdoExt(a1);
  Log(a1, 2048, 1111774014, 0LL, 0LL);
  v5 = UsbhDispatch_BusEvent(a1, a2, v4 + 11);
  Log(a1, 2048, 1111774012, 0LL, v5);
  return v6;
}
