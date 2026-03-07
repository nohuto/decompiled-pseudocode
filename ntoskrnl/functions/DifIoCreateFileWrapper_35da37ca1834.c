NTSTATUS __fastcall DifIoCreateFileWrapper(
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
        ULONG Options)
{
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v27; // rdi
  _QWORD *v28; // rbx
  _QWORD v29[14]; // [rsp+78h] [rbp-69h] BYREF
  __int64 retaddr; // [rsp+110h] [rbp+2Fh]

  memset(v29, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(153);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v23 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v23 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v29[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v23 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v19, v18, v21, v22);
      goto LABEL_9;
    }
  }
  v29[0] = 0LL;
LABEL_10:
  v29[7] = AllocationSize;
  v29[6] = __PAIR64__(FileAttributes, ShareAccess);
  v29[5] = __PAIR64__(Disposition, CreateOptions);
  v29[4] = EaBuffer;
  v29[3] = __PAIR64__(EaLength, CreateFileType);
  v29[2] = InternalParameters;
  LODWORD(v29[1]) = Options;
  v29[11] = FileHandle;
  LODWORD(v29[10]) = DesiredAccess;
  v29[9] = ObjectAttributes;
  v29[8] = IoStatusBlock;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v29);
  }
LABEL_17:
  result = IoCreateFile(
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
             Options);
  LODWORD(v29[12]) = result;
  if ( APIThunkContextById )
  {
    v27 = (_QWORD **)(APIThunkContextById + 6);
    v28 = *v27;
    if ( *v27 != v27 )
    {
      do
      {
        if ( v28 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v28 - 1))(v29);
        v28 = (_QWORD *)*v28;
      }
      while ( v28 != v27 );
      return v29[12];
    }
  }
  return result;
}
