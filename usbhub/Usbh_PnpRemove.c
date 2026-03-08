/*
 * XREFs of Usbh_PnpRemove @ 0x1C0044B44
 * Callers:
 *     Usbh_FDO_WaitPnpAdd @ 0x1C00443E0 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C0044460 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C0044500 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C00446A0 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0044890 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0044A00 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C001CF30 (UsbhDispatch_BusEvent.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C0031D14 (UsbhReleaseFdoPnpLock.c)
 *     GET_FDO_PNPSTATE @ 0x1C003BF34 (GET_FDO_PNPSTATE.c)
 *     UsbhReferenceListClose @ 0x1C00417E0 (UsbhReferenceListClose.c)
 *     UsbhModuleDispatch @ 0x1C0043D00 (UsbhModuleDispatch.c)
 *     UsbhSetFdoPnpState @ 0x1C0044248 (UsbhSetFdoPnpState.c)
 */

__int64 __fastcall Usbh_PnpRemove(__int64 a1, int a2)
{
  __int64 v4; // rdx

  GET_FDO_PNPSTATE(a1);
  UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 3, a2);
  UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
  UsbhDispatch_BusEvent(*(_QWORD *)(a1 + 8), a1, 12);
  UsbhReferenceListClose(*(_QWORD *)(a1 + 8));
  UsbhModuleDispatch(0LL, v4, *(_LIST_ENTRY **)(a1 + 8), 2, 0LL, a1);
  return 0LL;
}
