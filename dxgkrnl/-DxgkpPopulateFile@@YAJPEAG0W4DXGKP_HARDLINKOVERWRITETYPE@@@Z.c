__int64 __fastcall DxgkpPopulateFile(const WCHAR *a1, _WORD *a2, int a3)
{
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rdi
  char v7; // r13
  unsigned int v8; // ebx
  void *v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  bool v12; // si
  const wchar_t *v13; // rbx
  int FileVersion; // eax
  const WCHAR *v15; // rbx
  int v16; // eax
  NTSTATUS v17; // eax
  void *FileHandle; // [rsp+58h] [rbp-69h] BYREF
  union _LARGE_INTEGER v20; // [rsp+60h] [rbp-61h] BYREF
  union _LARGE_INTEGER v21; // [rsp+68h] [rbp-59h] BYREF
  union _LARGE_INTEGER v22; // [rsp+70h] [rbp-51h] BYREF
  union _LARGE_INTEGER v23; // [rsp+78h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-31h] BYREF
  struct _UNICODE_STRING v26; // [rsp+A0h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-11h] BYREF
  ULONG Length; // [rsp+140h] [rbp+7Fh]

  v4 = -1LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v26 = 0LL;
  FileHandle = (void *)-1LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, a1);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenFile(&FileHandle, 0x100100u, &ObjectAttributes, &IoStatusBlock, 7u, 0x204020u);
  v6 = v5;
  v7 = 1;
  if ( v5 == -1073741790 )
  {
    v7 = 0;
  }
  else if ( v5 < 0 )
  {
    WdLogSingleEntry2(2LL, v5, 831LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to open file in DxgkpPopulateFile: 0x%I64x",
      v6,
      831LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v6;
  }
  do
    ++v4;
  while ( a2[v4] );
  v8 = 2 * v4;
  Length = 0;
  v9 = 0LL;
  if ( v7 )
  {
    Length = v8 + 24;
    v10 = operator new[](v8 + 24, 0x4B677844u, 256LL);
    v9 = (void *)v10;
    if ( !v10 )
    {
      WdLogSingleEntry1(6LL, 844LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed allocate memory for LinkInfo in DxgkpPopulateFile",
        844LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v6) = -1073741801;
      goto LABEL_41;
    }
    *(_DWORD *)(v10 + 16) = v8;
    v11 = v8;
    memmove((void *)(v10 + 20), a2, v8);
    LODWORD(v6) = ZwSetInformationFile(FileHandle, &IoStatusBlock, v9, v8 + 24, FileLinkInformation);
  }
  else
  {
    v11 = v8;
  }
  if ( (int)v6 >= 0 )
    goto LABEL_40;
  if ( (_DWORD)v6 != -1073741771 && v7 )
    goto LABEL_39;
  v12 = 0;
  if ( a3 != 1 )
    goto LABEL_32;
  v21.QuadPart = 0LL;
  v23.QuadPart = 0LL;
  v20.QuadPart = 0LL;
  v22.QuadPart = 0LL;
  if ( (v8 & 0xFFFFFFFE) < 8 )
    goto LABEL_25;
  v13 = &a2[v11 >> 1];
  if ( _wcsnicmp(v13 - 4, L".dll", 4uLL) )
  {
    if ( _wcsnicmp(v13 - 4, L".exe", 4uLL) )
      goto LABEL_25;
  }
  if ( (int)DxgkpGetFileVersion(&DestinationString, &v21, 0LL) < 0 )
    goto LABEL_25;
  RtlInitUnicodeString(&v26, a2);
  FileVersion = DxgkpGetFileVersion(&v26, &v20, 0LL);
  LODWORD(v6) = FileVersion;
  if ( FileVersion < 0 )
  {
    if ( FileVersion != -1073741772 )
      goto LABEL_25;
LABEL_32:
    v15 = a1;
LABEL_33:
    if ( v7 )
    {
      LODWORD(v6) = DxgkpDeleteFile(a2);
      if ( (int)v6 < 0 )
      {
LABEL_39:
        WdLogSingleEntry2(3LL, (int)v6, 948LL);
        goto LABEL_40;
      }
      v17 = ZwSetInformationFile(FileHandle, &IoStatusBlock, v9, Length, FileLinkInformation);
    }
    else
    {
      v17 = DxgkpCopyFile(v15, a2);
    }
    LODWORD(v6) = v17;
    goto LABEL_38;
  }
  v12 = v21.QuadPart > v20.QuadPart;
  if ( v21.QuadPart != v20.QuadPart )
  {
    v15 = a1;
    goto LABEL_22;
  }
LABEL_25:
  v15 = a1;
  LODWORD(v6) = DxgkpGetFileLastWriteTime(a1, &v23);
  if ( (int)v6 >= 0 )
  {
    v16 = DxgkpGetFileLastWriteTime(a2, &v22);
    LODWORD(v6) = v16;
    if ( v16 < 0 )
    {
      if ( v16 == -1073741772 )
        v12 = 1;
    }
    else if ( v23.QuadPart > v22.QuadPart )
    {
      v12 = 1;
    }
  }
LABEL_22:
  if ( v12 )
    goto LABEL_33;
LABEL_38:
  if ( (int)v6 < 0 )
    goto LABEL_39;
LABEL_40:
  operator delete(v9);
LABEL_41:
  if ( FileHandle != (void *)-1LL )
    ZwClose(FileHandle);
  return (unsigned int)v6;
}
