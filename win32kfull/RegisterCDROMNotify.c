/*
 * XREFs of RegisterCDROMNotify @ 0x1C0077C84
 * Callers:
 *     xxxRegisterForDeviceClassNotifications @ 0x1C00787C0 (xxxRegisterForDeviceClassNotifications.c)
 *     xxxRemoteReconnect @ 0x1C01267DC (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

NTSTATUS RegisterCDROMNotify()
{
  NTSTATUS result; // eax

  result = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    if ( !gCDROMClassRegistrationEntry )
      return IoRegisterPlugPlayNotification(
               EventCategoryDeviceInterfaceChange,
               1u,
               &GUID_DEVINTERFACE_CDROM,
               gpWin32kDriverObject,
               DeviceClassCDROMNotify,
               0LL,
               &gCDROMClassRegistrationEntry);
  }
  return result;
}
