NTSTATUS __stdcall IoCreateFileEx(
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
        PIO_DRIVER_CREATE_CONTEXT DriverContext)
{
  int v15; // ebp
  int v16; // r14d
  int v17; // r10d
  int v19; // r12d
  struct _ECP_LIST *ExtraCreateParameter; // rcx
  ULONG v21; // edi
  NTSTATUS result; // eax
  int v23; // ecx

  v15 = (int)IoStatusBlock;
  v16 = (int)ObjectAttributes;
  v17 = (Options >> 10) & 2;
  v19 = (int)FileHandle;
  if ( !DriverContext )
    return IopCreateFile(
             v19,
             DesiredAccess,
             v16,
             v15,
             (__int64)AllocationSize,
             FileAttributes,
             ShareAccess,
             Disposition,
             CreateOptions,
             (__int64)EaBuffer,
             EaLength,
             CreateFileType,
             (__int64)InternalParameters,
             Options | 0x100,
             v17,
             DriverContext);
  ExtraCreateParameter = DriverContext->ExtraCreateParameter;
  v21 = v17 | 1;
  if ( !DriverContext->DeviceObjectHint )
    v21 = (Options >> 10) & 2;
  if ( !ExtraCreateParameter
    || (result = FsRtlpPrepareExtraCreateParametersForCreate((ULONG_PTR)ExtraCreateParameter), result >= 0) )
  {
    v23 = v21 | 4;
    if ( !DriverContext->TxnParameters )
      v23 = v21;
    v17 = v23;
    if ( DriverContext->Size >= 0x28u && *(_QWORD *)&DriverContext[1].Size != 1LL )
      v17 = v23 | 0x40;
    return IopCreateFile(
             v19,
             DesiredAccess,
             v16,
             v15,
             (__int64)AllocationSize,
             FileAttributes,
             ShareAccess,
             Disposition,
             CreateOptions,
             (__int64)EaBuffer,
             EaLength,
             CreateFileType,
             (__int64)InternalParameters,
             Options | 0x100,
             v17,
             DriverContext);
  }
  return result;
}
