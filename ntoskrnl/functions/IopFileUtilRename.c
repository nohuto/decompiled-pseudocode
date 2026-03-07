__int64 __fastcall IopFileUtilRename(UNICODE_STRING *a1, UNICODE_STRING *a2, char a3)
{
  __int64 Length; // rdx
  _QWORD *Pool2; // rdi
  NTSTATUS v8; // esi
  int v10; // r9d
  unsigned int v11; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp+28h] BYREF

  FileHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Length = a2->Length;
  *(&ObjectAttributes.Length + 1) = 0;
  IoStatusBlock = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, Length + 24, 0x75466F49u);
  if ( !Pool2 )
    return 3221225626LL;
  if ( a3 )
    IopFileUtilClearAttributes(a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenFile(&FileHandle, 0x110080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x204022u);
  if ( v8 >= 0 )
  {
    memmove((char *)Pool2 + 20, a2->Buffer, a2->Length);
    Pool2[1] = 0LL;
    *(_BYTE *)Pool2 = a3;
    v10 = a2->Length;
    *((_DWORD *)Pool2 + 4) = v10;
    v11 = ZwSetInformationFile(FileHandle, &IoStatusBlock, Pool2, v10 + 24, FileRenameInformation);
    ExFreePoolWithTag(Pool2, 0);
    ZwClose(FileHandle);
    return v11;
  }
  else
  {
    ExFreePoolWithTag(Pool2, 0);
    return (unsigned int)v8;
  }
}
