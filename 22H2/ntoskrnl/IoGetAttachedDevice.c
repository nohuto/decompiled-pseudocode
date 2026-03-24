/*
 * XREFs of IoGetAttachedDevice @ 0x1402D3EF0
 * Callers:
 *     NtSetInformationFile @ 0x1402D2A20 (NtSetInformationFile.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14034C324 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1403616F0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IoAdjustStackSizeForRedirection @ 0x140505390 (IoAdjustStackSizeForRedirection.c)
 *     FsRtlQueryOpen @ 0x1405D8FB0 (FsRtlQueryOpen.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x14064A140 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x14064B730 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140650DF0 (IopDeleteFile.c)
 *     IopCopyOffloadCapable @ 0x140668744 (IopCopyOffloadCapable.c)
 *     NtUnlockFile @ 0x140674110 (NtUnlockFile.c)
 *     PipSendGuestAssignedNotification @ 0x1408B44B0 (PipSendGuestAssignedNotification.c)
 *     IopShutdownBaseFileSystems @ 0x1409AB274 (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x1409E4F04 (VfFilterAttach.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDevice(PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *i; // rax

  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  return DeviceObject;
}
