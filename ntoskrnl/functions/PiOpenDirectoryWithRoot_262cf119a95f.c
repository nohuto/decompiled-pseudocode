__int64 __fastcall PiOpenDirectoryWithRoot(
        UNICODE_STRING *SourceString,
        UNICODE_STRING *a2,
        char a3,
        char a4,
        _QWORD *a5)
{
  PVOID v9; // rdi
  _QWORD *v10; // r14
  int v11; // ebx
  NTSTATUS v12; // eax
  int StateDirectorySecurityObject; // eax
  __int64 v14; // rcx
  int v15; // eax
  HANDLE v16; // rax
  HANDLE FileHandle; // [rsp+30h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  PVOID P; // [rsp+B0h] [rbp+30h] BYREF

  FileHandle = 0LL;
  P = 0LL;
  Handle = 0LL;
  v9 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( SourceString && a2 && (v10 = a5) != 0LL )
  {
    if ( !RtlPrefixUnicodeString(SourceString, a2, 1u) )
    {
      v11 = -1073741811;
      goto LABEL_20;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
    v11 = v12;
    if ( v12 != -1073741766 && v12 != -1073741772 )
    {
      if ( v12 < 0 )
        goto LABEL_20;
LABEL_16:
      v16 = FileHandle;
      FileHandle = 0LL;
      *v10 = v16;
      goto LABEL_18;
    }
    if ( !a3 )
      goto LABEL_20;
    StateDirectorySecurityObject = PiAuGetStateDirectorySecurityObject(0LL, &P);
    v9 = P;
    v11 = StateDirectorySecurityObject;
    if ( StateDirectorySecurityObject < 0 )
      goto LABEL_20;
    v11 = PiCreateDirectoryPath(SourceString, P, &Handle);
    if ( v11 >= 0 )
    {
      if ( !a4
        || (ExFreePoolWithTag(v9, 0),
            P = 0LL,
            LOBYTE(v14) = 1,
            v15 = PiAuGetStateDirectorySecurityObject(v14, &P),
            v9 = P,
            v11 = v15,
            v15 >= 0) )
      {
        v11 = PiCreateDirectoryPath(a2, v9, &FileHandle);
        if ( v11 >= 0 )
          goto LABEL_16;
      }
    }
  }
  else
  {
    v11 = -1073741811;
  }
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
LABEL_20:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v11;
}
