NTSTATUS __fastcall DifIoCreateFileExWrapper(
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v28; // rdi
  _QWORD *v29; // rbx
  _QWORD v30[14]; // [rsp+88h] [rbp-69h] BYREF
  __int64 retaddr; // [rsp+120h] [rbp+2Fh]

  memset(v30, 0, sizeof(v30));
  APIThunkContextById = DifGetAPIThunkContextById(154);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v24 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v24 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v30[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v24 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v20, v19, v22, v23);
      goto LABEL_9;
    }
  }
  v30[0] = 0LL;
LABEL_10:
  v30[8] = AllocationSize;
  v30[7] = __PAIR64__(FileAttributes, ShareAccess);
  v30[6] = __PAIR64__(Disposition, CreateOptions);
  v30[5] = EaBuffer;
  v30[4] = __PAIR64__(EaLength, CreateFileType);
  v30[3] = InternalParameters;
  LODWORD(v30[2]) = Options;
  v30[1] = DriverContext;
  v30[12] = FileHandle;
  LODWORD(v30[11]) = DesiredAccess;
  v30[10] = ObjectAttributes;
  v30[9] = IoStatusBlock;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v30);
  }
LABEL_17:
  result = IoCreateFileEx(
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
             DriverContext);
  LODWORD(v30[13]) = result;
  if ( APIThunkContextById )
  {
    v28 = (_QWORD **)(APIThunkContextById + 6);
    v29 = *v28;
    if ( *v28 != v28 )
    {
      do
      {
        if ( v29 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v29 - 1))(v30);
        v29 = (_QWORD *)*v29;
      }
      while ( v29 != v28 );
      return v30[13];
    }
  }
  return result;
}
