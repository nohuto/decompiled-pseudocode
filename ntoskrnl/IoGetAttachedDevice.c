/*
 * XREFs of IoGetAttachedDevice @ 0x14030EE00
 * Callers:
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     FsRtlQueryOpen @ 0x140758084 (FsRtlQueryOpen.c)
 *     NtUnlockFile @ 0x14075F620 (NtUnlockFile.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1407BAF80 (IopDeleteFile.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     IopCopyOffloadCapable @ 0x140873058 (IopCopyOffloadCapable.c)
 *     PipSendGuestAssignedNotification @ 0x14096C094 (PipSendGuestAssignedNotification.c)
 *     IopShutdownBaseFileSystems @ 0x140A96E64 (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x140ADC20C (VfFilterAttach.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDevice(PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *AttachedDevice; // rdx
  PDEVICE_OBJECT result; // rax

  AttachedDevice = DeviceObject->AttachedDevice;
  if ( !AttachedDevice )
    return DeviceObject;
  do
  {
    result = AttachedDevice;
    AttachedDevice = AttachedDevice->AttachedDevice;
  }
  while ( AttachedDevice );
  return result;
}
