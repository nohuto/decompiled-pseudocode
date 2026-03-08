/*
 * XREFs of IopOpenRegistryKeyEx @ 0x14081BCC0
 * Callers:
 *     PnpBootDeviceWait @ 0x14038932C (PnpBootDeviceWait.c)
 *     VhdAutoAttachVirtualDisks @ 0x140B31A9C (VhdAutoAttachVirtualDisks.c)
 *     IopStoreSystemPartitionInformation @ 0x140B56F38 (IopStoreSystemPartitionInformation.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140B57190 (PipInitializeEarlyLaunchDrivers.c)
 *     PiInitCacheGroupInformation @ 0x140B572AC (PiInitCacheGroupInformation.c)
 *     PipInitDeviceOverrideCache @ 0x140B5738C (PipInitDeviceOverrideCache.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B57600 (PipCheckSystemFirmwareUpdated.c)
 *     PipInitializeCoreDriversByGroup @ 0x140B5780C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140B57B44 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140B57DAC (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140B58C28 (IopInitializeBuiltinDriver.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
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
