/*
 * XREFs of IopOpenRegistryKeyEx @ 0x1408135F0
 * Callers:
 *     PnpBootDeviceWait @ 0x14037519C (PnpBootDeviceWait.c)
 *     VhdAutoAttachVirtualDisks @ 0x140B35A9C (VhdAutoAttachVirtualDisks.c)
 *     IopStoreSystemPartitionInformation @ 0x140B3F574 (IopStoreSystemPartitionInformation.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140B3F7CC (PipInitializeEarlyLaunchDrivers.c)
 *     PiInitCacheGroupInformation @ 0x140B3F8E8 (PiInitCacheGroupInformation.c)
 *     PipInitDeviceOverrideCache @ 0x140B3F9C8 (PipInitDeviceOverrideCache.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B3FC3C (PipCheckSystemFirmwareUpdated.c)
 *     PipInitializeCoreDriversByGroup @ 0x140B3FE48 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140B40180 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140B403E8 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140B405B4 (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140B41264 (IopInitializeBuiltinDriver.c)
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKeyEx(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4)
{
  OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF

  v5.RootDirectory = a2;
  v5.ObjectName = a3;
  *(_QWORD *)&v5.Length = 48LL;
  *(_QWORD *)&v5.Attributes = 576LL;
  *a1 = 0LL;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  return ZwOpenKey(a1, a4, &v5);
}
