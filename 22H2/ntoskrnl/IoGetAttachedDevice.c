/*
 * XREFs of IoGetAttachedDevice @ 0x1402AF3E0
 * Callers:
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072FFC0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730450 (IopDeleteFile.c)
 *     FsRtlQueryOpen @ 0x1407AC0F4 (FsRtlQueryOpen.c)
 *     NtUnlockFile @ 0x1407B5080 (NtUnlockFile.c)
 *     IopCopyOffloadCapable @ 0x140875F18 (IopCopyOffloadCapable.c)
 *     PipSendGuestAssignedNotification @ 0x14096F0B4 (PipSendGuestAssignedNotification.c)
 *     IopShutdownBaseFileSystems @ 0x140A99FA4 (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x140AE020C (VfFilterAttach.c)
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
