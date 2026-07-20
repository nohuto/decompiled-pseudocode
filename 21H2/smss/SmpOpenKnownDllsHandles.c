/*
 * XREFs of SmpOpenKnownDllsHandles @ 0x1400012C0
 * Callers:
 *     SmpInitializeKnownDlls @ 0x140008450 (SmpInitializeKnownDlls.c)
 *     SmpLoadDataFromRegistry @ 0x140009604 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpExpandKnownDllsPath @ 0x1400011FC (SmpExpandKnownDllsPath.c)
 */

__int64 __fastcall SmpOpenKnownDllsHandles(
        struct _UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        int a3,
        void **a4,
        void *FileHandle)
{
  _QWORD *v5; // r14
  NTSTATUS v9; // ebx
  NTSTATUS v10; // eax
  void *SymbolicLinkHandle; // [rsp+30h] [rbp-51h] BYREF
  struct _UNICODE_STRING Name; // [rsp+38h] [rbp-49h] BYREF
  PVOID BaseAddress[2]; // [rsp+48h] [rbp-39h] BYREF
  int v15; // [rsp+58h] [rbp-29h] BYREF
  const wchar_t *v16; // [rsp+60h] [rbp-21h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-9h] BYREF
  void *DirectoryHandle; // [rsp+F8h] [rbp+77h] BYREF

  v5 = FileHandle;
  *a4 = 0LL;
  DirectoryHandle = 0LL;
  SymbolicLinkHandle = 0LL;
  v16 = L"KnownDllPath";
  *v5 = 0LL;
  v15 = 1703960;
  Name = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  v9 = SmpExpandKnownDllsPath(a2, &Name);
  if ( v9 < 0 )
  {
    Name.Buffer = 0LL;
  }
  else
  {
    v9 = RtlDosPathNameToNtPathName_U_WithStatus(Name.Buffer, BaseAddress, 0LL, 0LL);
    if ( v9 < 0 )
    {
      BaseAddress[1] = 0LL;
      goto LABEL_10;
    }
    ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
    v9 = v10;
    if ( v10 < 0 )
    {
      FileHandle = 0LL;
      if ( v10 == -1073741772 && !a3 )
        goto LABEL_7;
    }
    else
    {
      ObjectAttributes.Attributes = 80;
      ObjectAttributes.SecurityDescriptor = SmpKnownDllsDirSecurityDescriptor;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = a1;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v9 = NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
      if ( v9 < 0 )
      {
        DirectoryHandle = 0LL;
      }
      else
      {
        ObjectAttributes.RootDirectory = DirectoryHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
        ObjectAttributes.SecurityDescriptor = SmpKnownDllsSymLinkSecurityDescriptor;
        ObjectAttributes.Attributes = 80;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v9 = NtCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, &Name);
        if ( v9 >= 0 )
        {
          *a4 = DirectoryHandle;
          *v5 = FileHandle;
          DirectoryHandle = 0LL;
LABEL_7:
          v9 = 0;
          goto LABEL_8;
        }
        SymbolicLinkHandle = 0LL;
      }
    }
  }
LABEL_8:
  if ( BaseAddress[1] )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress[1]);
LABEL_10:
  if ( Name.Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Name.Buffer);
  if ( SymbolicLinkHandle )
    NtClose(SymbolicLinkHandle);
  if ( DirectoryHandle )
    NtClose(DirectoryHandle);
  return (unsigned int)v9;
}
