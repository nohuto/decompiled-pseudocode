/*
 * XREFs of Usbh_PnpRemove @ 0x1C0044294
 * Callers:
 *     Usbh_FDO_WaitPnpAdd @ 0x1C0043B30 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C0043BB0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C0043C50 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C0043DF0 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0043FE0 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0044150 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C000FC10 (UsbhDispatch_BusEvent.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C0031348 (UsbhReleaseFdoPnpLock.c)
 *     GET_FDO_PNPSTATE @ 0x1C003B4D4 (GET_FDO_PNPSTATE.c)
 *     UsbhReferenceListClose @ 0x1C0040F24 (UsbhReferenceListClose.c)
 *     UsbhModuleDispatch @ 0x1C0043450 (UsbhModuleDispatch.c)
 *     UsbhSetFdoPnpState @ 0x1C0043998 (UsbhSetFdoPnpState.c)
 */

__int64 __fastcall Usbh_PnpRemove(__int64 a1, int a2)
{
  __int64 v4; // rdx

  GET_FDO_PNPSTATE(a1);
  UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 3, a2);
  UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
  UsbhDispatch_BusEvent(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, 12);
  UsbhReferenceListClose(*(_QWORD *)(a1 + 8));
  UsbhModuleDispatch(0LL, v4, *(_LIST_ENTRY **)(a1 + 8), 2, 0LL, a1);
  return 0LL;
}
