/*
 * XREFs of IoGetDeviceObjectPointer @ 0x140720950
 * Callers:
 *     DifIoGetDeviceObjectPointerWrapper @ 0x1405DD320 (DifIoGetDeviceObjectPointerWrapper.c)
 *     NtApphelpCacheControl @ 0x1406C31C0 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x140720680 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14072BD40 (IoVolumeDeviceNameToGuidPath.c)
 *     IopOpenSystemVariableDevice @ 0x14075D4AC (IopOpenSystemVariableDevice.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140930940 (HalpDynamicDeviceInterfaceNotification.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140980294 (PopRegisterCoolingExtensionProtection.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409915D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     VhdiMountVhdFile @ 0x140A7058C (VhdiMountVhdFile.c)
 *     IopStoreBootDriveLetter @ 0x140B54800 (IopStoreBootDriveLetter.c)
 *     IopCreateArcNamesDisk @ 0x140B54B24 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140B54C8C (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140B907EC (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140B9874C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B98940 (SbpStartLanman.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall IoGetDeviceObjectPointer(
        PUNICODE_STRING ObjectName,
        ACCESS_MASK DesiredAccess,
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  struct _FILE_OBJECT *v8; // rcx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp+10h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  IoStatusBlock = 0LL;
  ObjectAttributes.ObjectName = ObjectName;
  ObjectAttributes.Attributes = IopCaseInsensitive != 0 ? 576 : 512;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ZwOpenFile(&FileHandle, DesiredAccess, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v7 >= 0 )
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v7 >= 0 )
    {
      v8 = (struct _FILE_OBJECT *)Object;
      *FileObject = (PFILE_OBJECT)Object;
      *DeviceObject = IoGetRelatedDeviceObject(v8);
    }
    ZwClose(FileHandle);
  }
  KeLeaveCriticalRegion();
  return v7;
}
