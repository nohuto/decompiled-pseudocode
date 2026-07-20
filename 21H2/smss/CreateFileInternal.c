/*
 * XREFs of CreateFileInternal @ 0x14001031C
 * Callers:
 *     CreateFileW @ 0x140010898 (CreateFileW.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 *     BaseSetLastNTError @ 0x1400119F0 (BaseSetLastNTError.c)
 *     _guard_dispatch_icall_nop @ 0x140011DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateFileInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  ULONG EaLength; // r12d
  int v6; // r14d
  __int64 v7; // rcx
  unsigned int v9; // edi
  int v10; // r13d
  int v11; // esi
  NTSTATUS inited; // eax
  ULONG v13; // ecx
  void *Buffer; // r15
  HANDLE ContainingDirectory; // rax
  int v16; // r8d
  int v17; // esi
  unsigned int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // rcx
  void *EaBuffer; // rsi
  char *v22; // rcx
  ULONG v23; // r14d
  PVOID Heap; // rax
  NTSTATUS v25; // r15d
  ULONG v26; // edx
  void (__fastcall *v27)(ULONG *); // rax
  NTSTATUS v28; // ebx
  ULONG CreateOptions; // [rsp+68h] [rbp-A0h] BYREF
  int v30; // [rsp+6Ch] [rbp-9Ch]
  int DestinationString; // [rsp+70h] [rbp-98h]
  ULONG DestinationString_4; // [rsp+74h] [rbp-94h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+78h] [rbp-90h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-80h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-78h] BYREF
  void *FileHandle; // [rsp+A0h] [rbp-68h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+A8h] [rbp-60h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  int v39; // [rsp+F8h] [rbp-10h] BYREF
  int v40; // [rsp+FCh] [rbp-Ch]
  __int16 v41; // [rsp+100h] [rbp-8h]

  EaLength = 0;
  v30 = 0;
  v6 = 0;
  if ( a5 )
  {
    if ( *(_DWORD *)a5 < 0x20u )
    {
      v7 = 3221225485LL;
LABEL_4:
      BaseSetLastNTError(v7);
      return -1LL;
    }
    v9 = *(_DWORD *)(a5 + 8);
  }
  else
  {
    v9 = 0;
  }
  if ( a5 )
    v10 = *(_DWORD *)(a5 + 4);
  else
    v10 = 0;
  if ( a5 )
    v11 = *(_DWORD *)(a5 + 12);
  else
    v11 = 0;
  inited = RtlInitUnicodeStringEx(&DestinationString_8, L"\\\\.\\MountPointManager");
  if ( inited < 0 )
  {
LABEL_15:
    v7 = (unsigned int)inited;
    goto LABEL_4;
  }
  if ( DestinationString_8.Length <= 1u
    || (DestinationString = 1, aMountpointmana[((unsigned __int64)DestinationString_8.Length >> 1) - 1] != 92) )
  {
    DestinationString = 0;
  }
  CreateOptions = 0;
  inited = RtlDosPathNameToRelativeNtPathName_U_WithStatus(
             L"\\\\.\\MountPointManager",
             &DestinationString_8,
             0LL,
             &RelativeName);
  if ( inited < 0 )
  {
    if ( inited == -1073741801 || inited == -1073741670 )
      goto LABEL_15;
    v13 = 3;
LABEL_68:
    RtlSetLastWin32Error(v13);
    return -1LL;
  }
  Buffer = DestinationString_8.Buffer;
  BaseAddress = DestinationString_8.Buffer;
  if ( RelativeName.RelativeName.Length )
  {
    ContainingDirectory = RelativeName.ContainingDirectory;
    DestinationString_8 = RelativeName.RelativeName;
  }
  else
  {
    ContainingDirectory = 0LL;
    RelativeName.ContainingDirectory = 0LL;
  }
  ObjectAttributes.RootDirectory = ContainingDirectory;
  v16 = (v9 >> 6) & 0x800;
  ObjectAttributes.Length = 48;
  ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = &DestinationString_8;
  ObjectAttributes.Attributes = v16 | ((v9 & 0x1000000) == 0 ? 0x40 : 0);
  if ( (v11 & 0x100000) != 0 )
  {
    v17 = v11 & 0xF0000;
    LOBYTE(v41) = (v17 & 0x40000) != 0;
    v18 = v17 & 0xFFFBFFFF;
    if ( (v17 & 0x40000) == 0 )
      v18 = v17;
    HIBYTE(v41) = (v18 & 0x80000) != 0;
    v19 = v18 & 0xFFF7FFFF;
    if ( (v18 & 0x80000) == 0 )
      v19 = v18;
    v40 = HIWORD(v19);
  }
  else
  {
    v41 = 257;
    v40 = 2;
  }
  v39 = 12;
  ObjectAttributes.SecurityQualityOfService = &v39;
  if ( a5 )
  {
    v20 = *(_QWORD *)(a5 + 16);
    if ( v20 )
    {
      ObjectAttributes.SecurityDescriptor = *(PVOID *)(v20 + 8);
      if ( *(_DWORD *)(v20 + 16) )
        ObjectAttributes.Attributes = v16 | ((v9 & 0x1000000) != 0 ? 2 : 66);
    }
  }
  EaBuffer = 0LL;
  if ( a5 )
  {
    v22 = *(char **)(a5 + 24);
    if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
      && NtQueryInformationFile(v22, &IoStatusBlock, &DestinationString_4, 4u, FileEaInformation) >= 0 )
    {
      v23 = DestinationString_4;
      if ( DestinationString_4 )
      {
        while ( 1 )
        {
          v23 *= 2;
          Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, v23);
          EaLength = 0;
          EaBuffer = Heap;
          if ( !Heap )
            break;
          v25 = NtQueryEaFile(*(HANDLE *)(a5 + 24), &IoStatusBlock, Heap, v23, 0, 0LL, 0, 0LL, 1u);
          if ( v25 >= 0 )
          {
            EaLength = IoStatusBlock.Information;
          }
          else
          {
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, EaBuffer);
            EaBuffer = 0LL;
            IoStatusBlock.Information = 0LL;
          }
          if ( v25 != -2147483643 && v25 != -1073741789 )
          {
            v6 = v30;
            Buffer = BaseAddress;
            goto LABEL_50;
          }
        }
        RtlReleaseRelativeName(&RelativeName);
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
        v7 = 3221225495LL;
        goto LABEL_4;
      }
      v6 = 0;
    }
  }
LABEL_50:
  v26 = CreateOptions | ((v9 & 0x2000000) != 0 ? 0x4000 : 0) | ~(v9 >> 25) & 0x20 | ((int)v9 >> 31) & 2 | (v9 >> 26) & 8 | ((v9 & 0x40000 | ((v9 & 0x800000 | ((v9 & 0x10000000 | (v9 >> 8) & 0x80000) >> 12)) >> 3)) >> 2);
  CreateOptions = v26;
  if ( (HIWORD(KeGetPcr()->NtTib.Self[109].StackLimit) & 0x800) != 0 )
  {
    v26 |= 0x40000u;
    CreateOptions = v26;
  }
  if ( (v9 & 0x4000000) != 0 )
  {
    v26 |= 0x1000u;
    v6 = 0x10000;
    CreateOptions = v26;
  }
  if ( (v9 & 0x200000) != 0 )
  {
    v26 |= 0x200000u;
    CreateOptions = v26;
  }
  if ( (v9 & 0x100000) != 0 )
  {
    v26 |= 0x400000u;
    CreateOptions = v26;
  }
  if ( (v9 & 0x2000000) == 0 )
    CreateOptions = v26 | 0x40;
  v27 = (void (__fastcall *)(ULONG *))SbSelectProcedure(2880154539LL, 1LL, "kLsE", 1LL);
  if ( v27 )
    v27(&CreateOptions);
  v28 = NtCreateFile(
          &FileHandle,
          v6 | 0x100080,
          &ObjectAttributes,
          &IoStatusBlock,
          0LL,
          v10 & 0x5AFFA7,
          3u,
          1u,
          CreateOptions,
          EaBuffer,
          EaLength);
  RtlReleaseRelativeName(&RelativeName);
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, EaBuffer);
  if ( v28 < 0 )
  {
    BaseSetLastNTError((unsigned int)v28);
    if ( v28 == -1073741771 )
    {
      v13 = 80;
    }
    else
    {
      if ( v28 != -1073741638 )
        return -1LL;
      v13 = 3;
      if ( !DestinationString )
        v13 = 5;
    }
    goto LABEL_68;
  }
  RtlSetLastWin32Error(0);
  return (__int64)FileHandle;
}
