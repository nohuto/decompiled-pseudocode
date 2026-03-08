/*
 * XREFs of DifNtCreateFileWrapper @ 0x1405E59E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 *     NtCreateFile @ 0x1407CE510 (NtCreateFile.c)
 */

NTSTATUS __fastcall DifNtCreateFileWrapper(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v24; // rdi
  _QWORD *v25; // rbx
  _QWORD v26[12]; // [rsp+68h] [rbp-59h] BYREF
  __int64 retaddr; // [rsp+F0h] [rbp+2Fh]

  memset(v26, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(359);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v20 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v20 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v26[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v20 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v16, v15, v18, v19);
      goto LABEL_9;
    }
  }
  v26[0] = 0LL;
LABEL_10:
  v26[5] = AllocationSize;
  v26[4] = __PAIR64__(FileAttributes, ShareAccess);
  v26[3] = __PAIR64__(CreateDisposition, CreateOptions);
  v26[2] = EaBuffer;
  LODWORD(v26[1]) = EaLength;
  v26[9] = FileHandle;
  LODWORD(v26[8]) = DesiredAccess;
  v26[7] = ObjectAttributes;
  v26[6] = IoStatusBlock;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v26);
  }
LABEL_17:
  result = NtCreateFile(
             FileHandle,
             DesiredAccess,
             ObjectAttributes,
             IoStatusBlock,
             AllocationSize,
             FileAttributes,
             ShareAccess,
             CreateDisposition,
             CreateOptions,
             EaBuffer,
             EaLength);
  LODWORD(v26[10]) = result;
  if ( APIThunkContextById )
  {
    v24 = (_QWORD **)(APIThunkContextById + 6);
    v25 = *v24;
    if ( *v24 != v24 )
    {
      do
      {
        if ( v25 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v25 - 1))(v26);
        v25 = (_QWORD *)*v25;
      }
      while ( v25 != v24 );
      return v26[10];
    }
  }
  return result;
}
