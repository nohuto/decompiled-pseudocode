__int64 __fastcall CimfsInitializeBootDisk(__int64 a1, wchar_t *a2, UNICODE_STRING *a3)
{
  int *v4; // r15
  void *v5; // rax
  int *v7; // rdi
  unsigned int v8; // r13d
  ULONG OutputBufferLength; // ebx
  int *OutputBuffer; // rax
  NTSTATUS v11; // r14d
  int v12; // ecx
  bool v13; // zf
  unsigned int v14; // r10d
  __int64 v15; // r8
  int v16; // r9d
  bool v17; // zf
  __int64 v18; // rdx
  NTSTATUS v19; // ebx
  ULONG v20; // ebx
  NTSTATUS v21; // eax
  bool v22; // si
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  ULONG ShareAccessa[2]; // [rsp+20h] [rbp-E0h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG DiskCount; // [rsp+58h] [rbp-A8h]
  void *Source2; // [rsp+60h] [rbp-A0h]
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v32; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t SourceString[56]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[64]; // [rsp+140h] [rbp+40h] BYREF

  FileHandle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v32 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  v4 = *(int **)a2;
  v5 = (void *)*((_QWORD *)a2 + 1);
  Source2 = v5;
  if ( !v4 || !v5 )
    return 3221225485LL;
  if ( !RtlCreateUnicodeStringFromAsciiz(a3, *(const char **)(a1 + 184)) )
    return 3221225473LL;
  v7 = 0LL;
  v8 = 0;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  Handle = 0LL;
  if ( !DiskCount )
    goto LABEL_38;
  while ( 1 )
  {
    if ( RtlStringCbPrintfW(pszDest, 0x80uLL, L"\\Device\\Harddisk%d\\Partition0", v8) < 0
      || RtlInitUnicodeStringEx(&DestinationString, pszDest) < 0 )
    {
      goto LABEL_37;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( Handle )
    {
      ZwClose(Handle);
      Handle = 0LL;
    }
    if ( ZwOpenFile(&Handle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u) < 0 )
      goto LABEL_37;
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    for ( OutputBufferLength = 4096; ; OutputBufferLength *= 2 )
    {
      OutputBuffer = (int *)ExAllocatePool2(64LL, OutputBufferLength, 0x426D6943u);
      v7 = OutputBuffer;
      if ( !OutputBuffer )
        goto LABEL_37;
      v11 = ZwDeviceIoControlFile(
              Handle,
              0LL,
              0LL,
              0LL,
              &IoStatusBlock,
              0x70050u,
              0LL,
              0,
              OutputBuffer,
              OutputBufferLength);
      if ( v11 != -1073741789 )
        break;
      ExFreePoolWithTag(v7, 0);
    }
    if ( v11 < 0 )
      goto LABEL_37;
    v12 = *v4;
    if ( *v7 != *v4 )
      goto LABEL_37;
    if ( !v12 )
      break;
    if ( v12 == 1 )
    {
      v13 = RtlCompareMemory(v7 + 2, Source2, 0x10uLL) == 16;
      goto LABEL_26;
    }
LABEL_37:
    if ( ++v8 >= DiskCount )
      goto LABEL_38;
  }
  v13 = RtlCompareMemory(v7 + 2, Source2, 4uLL) == 4;
LABEL_26:
  if ( !v13 )
    goto LABEL_37;
  v14 = v7[1];
  v15 = 0LL;
  if ( !v14 )
    goto LABEL_37;
  v16 = *v7;
  while ( 1 )
  {
    if ( !v16 )
    {
      v17 = *(_QWORD *)&v7[36 * v15 + 14] == *((_QWORD *)v4 + 1);
      goto LABEL_35;
    }
    if ( v16 == 1 )
      break;
LABEL_36:
    v15 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v15 >= v14 )
      goto LABEL_37;
  }
  v18 = *(_QWORD *)&v7[36 * v15 + 24] - *((_QWORD *)v4 + 6);
  if ( !v18 )
    v18 = *(_QWORD *)&v7[36 * v15 + 26] - *((_QWORD *)v4 + 7);
  v17 = v18 == 0;
LABEL_35:
  if ( !v17 )
    goto LABEL_36;
  v20 = v7[36 * v15 + 18];
  ShareAccess[0] = v20;
  v21 = RtlStringCbPrintfW(SourceString, 0x64uLL, L"\\Device\\Harddisk%d\\Partition%d", v8, *(_QWORD *)ShareAccess);
  ShareAccessa[0] = v20;
  v22 = v21 >= 0;
  if ( RtlStringCbPrintfW(a2 + 8, 0x50uLL, L"\\Device\\Harddisk%d\\Partition%d", v8, *(_QWORD *)ShareAccessa) >= 0
    && v22
    && RtlInitUnicodeStringEx(&v32, SourceString) >= 0
    && (ObjectAttributes.ObjectName = &v32,
        ObjectAttributes.Length = 48,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v19 = ZwOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u),
        v19 >= 0) )
  {
LABEL_39:
    ExFreePoolWithTag(v7, 0x426D6943u);
  }
  else
  {
LABEL_38:
    v19 = -1073741810;
    if ( v7 )
      goto LABEL_39;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v19;
}
