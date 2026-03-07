__int64 __fastcall IopFileUtilWalkDirectoryTreeHelper(
        UNICODE_STRING *a1,
        int a2,
        __int64 (__fastcall *a3)(UNICODE_STRING *, UNICODE_STRING *, __int64, __int64),
        __int64 a4,
        WCHAR *FileInformation,
        int a6,
        __int64 a7)
{
  char v7; // r15
  UNICODE_STRING *v8; // rdi
  NTSTATUS Status; // ebx
  unsigned __int64 v11; // rax
  WCHAR *v12; // rsi
  unsigned __int16 i; // r14
  __int64 v14; // r8
  char v15; // r14
  UNICODE_STRING **v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  UNICODE_STRING *Pool2; // rax
  UNICODE_STRING *v20; // rdi
  HANDLE FileHandle; // [rsp+68h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-59h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-39h] BYREF
  WCHAR v26; // [rsp+120h] [rbp+57h]

  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v7 = a2;
  v8 = a1;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, ~(a2 << 17) & 0x200000 | 0x4001);
  if ( Status < 0 )
    return (unsigned int)Status;
  Status = ZwQueryDirectoryFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             FileInformation,
             0x3FEu,
             FileBothDirectoryInformation,
             0,
             0LL,
             1u);
  if ( Status < 0 )
    goto LABEL_27;
  while ( 2 )
  {
    if ( Status == 259 )
    {
      ZwWaitForSingleObject(FileHandle, 1u, 0LL);
      Status = IoStatusBlock.Status;
      if ( IoStatusBlock.Status < 0 )
        break;
    }
    v11 = (unsigned __int64)*((unsigned int *)FileInformation + 15) >> 1;
    v12 = FileInformation;
    v26 = FileInformation[v11 + 47];
    FileInformation[v11 + 47] = 0;
    RtlInitUnicodeString(&DestinationString, FileInformation + 47);
    for ( i = v8->Length + DestinationString.Length + 2; ; i = a1->Length + DestinationString.Length + 2 )
    {
      Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, i + 38LL, 1967550281LL);
      v20 = Pool2;
      if ( !Pool2 )
      {
        Status = -1073741670;
        goto LABEL_27;
      }
      Pool2[1].Length = 0;
      Pool2[1].Buffer = &Pool2[2].Length;
      Pool2[1].MaximumLength = i;
      RtlCopyUnicodeString(Pool2 + 1, a1);
      RtlAppendUnicodeToString(v20 + 1, L"\\");
      RtlAppendUnicodeStringToString(v20 + 1, &DestinationString);
      v14 = *((unsigned int *)v12 + 14);
      if ( (v14 & 0x10) == 0 )
      {
        if ( (v7 & 1) != 0 )
          Status = a3(v20 + 1, &DestinationString, v14, a4);
LABEL_21:
        ExFreePoolWithTag(v20, 0);
        goto LABEL_22;
      }
      if ( !wcsicmp(v12 + 47, L".") || (v15 = 0, !wcsicmp(v12 + 47, L"..")) )
        v15 = 1;
      if ( (v7 & 2) != 0 )
      {
        if ( (v7 & 4) != 0 && v15 )
          goto LABEL_21;
        Status = a3(v20 + 1, &DestinationString, *((unsigned int *)v12 + 14), a4);
      }
      if ( v15 || (v7 & 8) == 0 )
        goto LABEL_21;
      v16 = *(UNICODE_STRING ***)(a7 + 8);
      if ( *v16 != (UNICODE_STRING *)a7 )
        __fastfail(3u);
      *(_QWORD *)&v20->Length = a7;
      v20->Buffer = (wchar_t *)v16;
      *v16 = v20;
      *(_QWORD *)(a7 + 8) = v20;
LABEL_22:
      if ( Status < 0 )
        goto LABEL_27;
      v12[((unsigned __int64)*((unsigned int *)v12 + 15) >> 1) + 47] = v26;
      v17 = *(unsigned int *)v12;
      if ( !(_DWORD)v17 )
        break;
      v12 = (WCHAR *)((char *)v12 + v17);
      v18 = (unsigned __int64)*((unsigned int *)v12 + 15) >> 1;
      v26 = v12[v18 + 47];
      v12[v18 + 47] = 0;
      RtlInitUnicodeString(&DestinationString, v12 + 47);
    }
    Status = ZwQueryDirectoryFile(
               FileHandle,
               0LL,
               0LL,
               0LL,
               &IoStatusBlock,
               FileInformation,
               0x3FEu,
               FileBothDirectoryInformation,
               0,
               0LL,
               0);
    if ( Status >= 0 )
    {
      v8 = a1;
      continue;
    }
    break;
  }
LABEL_27:
  ZwClose(FileHandle);
  if ( Status == -2147483642 )
    return 0;
  return (unsigned int)Status;
}
