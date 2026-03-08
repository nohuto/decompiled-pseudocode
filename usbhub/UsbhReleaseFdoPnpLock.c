/*
 * XREFs of UsbhReleaseFdoPnpLock @ 0x1C0031D14
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C000D270 (UsbhFdoSystemPowerState.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C003375C (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C003383C (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C003E714 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhReleaseApiLock @ 0x1C00415A8 (UsbhReleaseApiLock.c)
 *     UsbhAsyncStop @ 0x1C00424CC (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x1C00443E0 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C0044460 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C0044500 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C00446A0 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0044890 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0044A00 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_PnpRemove @ 0x1C0044B44 (Usbh_PnpRemove.c)
 *     UsbhEtwRundown @ 0x1C005BED0 (UsbhEtwRundown.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

LONG __fastcall UsbhReleaseFdoPnpLock(__int64 a1, __int64 a2)
{
  struct _KSEMAPHORE *v3; // rbx

  v3 = (struct _KSEMAPHORE *)FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  *(_DWORD *)(a2 + 48) = 1734964085;
  v3[41].Header.WaitListHead.Blink = 0LL;
  return KeReleaseSemaphore(v3 + 155, 16, 1, 0);
}
