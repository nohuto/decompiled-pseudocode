/*
 * XREFs of IoCreateFileSpecifyDeviceObjectHint @ 0x140792760
 * Callers:
 *     DifIoCreateFileSpecifyDeviceObjectHintWrapper @ 0x1405DBF40 (DifIoCreateFileSpecifyDeviceObjectHintWrapper.c)
 * Callees:
 *     IoCreateFileEx @ 0x14070DA20 (IoCreateFileEx.c)
 */

NTSTATUS __stdcall IoCreateFileSpecifyDeviceObjectHint(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options,
        PVOID DeviceObject)
{
  struct _IO_DRIVER_CREATE_CONTEXT v16; // [rsp+80h] [rbp-38h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-18h]

  v17 = 1LL;
  *(_QWORD *)(&v16.Size + 1) = 0LL;
  *(_DWORD *)((char *)&v16.ExtraCreateParameter + 2) = 0;
  HIWORD(v16.ExtraCreateParameter) = 0;
  v16.TxnParameters = 0LL;
  v16.Size = 40;
  v16.DeviceObjectHint = DeviceObject;
  return IoCreateFileEx(
           FileHandle,
           DesiredAccess,
           ObjectAttributes,
           IoStatusBlock,
           AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           EaBuffer,
           EaLength,
           CreateFileType,
           InternalParameters,
           Options,
           &v16);
}
