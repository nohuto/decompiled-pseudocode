__int64 __fastcall BiGetNtPartitionPath(int a1, _QWORD *a2)
{
  wchar_t *v2; // r14
  wchar_t **v3; // r15
  int v4; // eax
  wchar_t *v5; // r13
  int DirectoryObject; // ebx
  void *Pool2; // rdi
  bool v8; // r12
  unsigned int v9; // esi
  __int64 i; // rdx
  char v11; // si
  wchar_t **v12; // rbx
  unsigned __int64 v13; // rcx
  int v14; // r13d
  _QWORD *v15; // rbx
  unsigned int v16; // ecx
  __int64 v17; // r12
  __int64 v18; // rcx
  bool v19; // zf
  const wchar_t *PartitionVhdFilePath; // rax
  const wchar_t *v22; // rax
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  int *OpenOptions; // [rsp+28h] [rbp-D8h]
  __int64 v25; // [rsp+30h] [rbp-D0h]
  bool v26; // [rsp+40h] [rbp-C0h]
  wchar_t **v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v29; // [rsp+5Ch] [rbp-A4h]
  HANDLE DirectoryHandle; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v31; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *Str1; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v34; // [rsp+80h] [rbp-80h] BYREF
  HANDLE FileHandle; // [rsp+88h] [rbp-78h] BYREF
  void *v36; // [rsp+90h] [rbp-70h]
  _QWORD *v37; // [rsp+98h] [rbp-68h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES v39; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v41; // [rsp+110h] [rbp+10h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v43[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v44; // [rsp+150h] [rbp+50h]

  v37 = a2;
  v34 = 0LL;
  v44 = 0LL;
  v2 = 0LL;
  FileHandle = 0LL;
  v3 = 0LL;
  memset(v43, 0, sizeof(v43));
  v28 = 0;
  memset(&ObjectAttributes, 0, 44);
  v31 = 0LL;
  v33 = 0LL;
  DestinationString = 0LL;
  DirectoryHandle = 0LL;
  memset(&v39, 0, 44);
  v36 = 0LL;
  Str1 = 0LL;
  IoStatusBlock = 0LL;
  v41 = 0LL;
  v4 = BiVerifyBootPartition(a1, (unsigned int)&v31, (unsigned int)&v34, (unsigned int)&v33, (__int64)&Str1, 0LL);
  v5 = Str1;
  DirectoryObject = v4;
  if ( v4 < 0 )
    goto LABEL_50;
  Pool2 = (void *)ExAllocatePool2(258LL, 88LL, 1262764866LL);
  if ( !Pool2 )
    return 3221225495LL;
  v8 = 0;
  v26 = 0;
  if ( v5 && !v31 )
  {
    v8 = v34 == 0LL;
    v26 = v34 == 0LL;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DirectoryObject = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( DirectoryObject < 0 )
    goto LABEL_80;
  v9 = 4096;
  for ( i = 4096LL; ; i = v9 )
  {
    v3 = (wchar_t **)ExAllocatePool2(258LL, i, 1262764866LL);
    if ( !v3 )
    {
      DirectoryObject = -1073741801;
      goto LABEL_80;
    }
    v25 = 0LL;
    v28 = 0;
    OpenOptions = &v28;
    DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v3);
    if ( DirectoryObject != 261 )
      break;
    ExFreePoolWithTag(v3, 0x4B444342u);
    v9 += 4096;
  }
  ZwClose(DirectoryHandle);
  v11 = 0;
  DirectoryHandle = 0LL;
  if ( (int)(DirectoryObject + 0x80000000) >= 0 && DirectoryObject != -2147483622 )
  {
LABEL_80:
    ExFreePoolWithTag(Pool2, 0x4B444342u);
    goto LABEL_48;
  }
  if ( !*(_WORD *)v3 )
    goto LABEL_79;
  v12 = v3 + 1;
  v27 = v3 + 1;
  while ( 1 )
  {
    if ( !(unsigned __int8)BiIsValidDiskDevice(*v12, v12[2]) )
      goto LABEL_14;
    swprintf_s((wchar_t *)Pool2, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v12, 0LL, OpenOptions, v25);
    if ( (int)BiGetDriveLayoutBlock((PCWSTR)Pool2) < 0 )
      goto LABEL_14;
    if ( !v5 )
    {
      v13 = *(_QWORD *)(v33 + 4) - *(_QWORD *)((char *)v43 + 4);
      if ( !v13 )
      {
        v13 = *(_QWORD *)(v33 + 12) - *(_QWORD *)((char *)v43 + 12);
        if ( !v13 )
          v13 = *(unsigned int *)(v33 + 20) - (unsigned __int64)DWORD1(v43[1]);
      }
      if ( v13 )
      {
        ExFreePoolWithTag(0LL, 0x4B444342u);
        goto LABEL_14;
      }
    }
    v14 = *(_DWORD *)(v33 + 4);
    if ( v34 )
    {
      if ( v14 == 1 )
      {
        ShareAccess[0] = *v34;
        swprintf_s((wchar_t *)Pool2, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v12, *(_QWORD *)ShareAccess);
        RtlInitUnicodeString(&v41, (PCWSTR)Pool2);
        v39.Length = 48;
        v39.ObjectName = &v41;
        v39.RootDirectory = 0LL;
        v39.Attributes = 576;
        *(_OWORD *)&v39.SecurityDescriptor = 0LL;
        if ( ZwOpenFile(&FileHandle, 0x80000000, &v39, &IoStatusBlock, 3u, 0) >= 0 )
        {
          ZwClose(FileHandle);
          v11 = 1;
        }
        goto LABEL_43;
      }
LABEL_24:
      if ( v14 )
        goto LABEL_43;
      goto LABEL_25;
    }
    if ( v14 != 1 )
      goto LABEL_24;
LABEL_25:
    v15 = 0LL;
    if ( !v14 )
    {
      if ( v34 )
      {
        v15 = v34;
      }
      else if ( v31 )
      {
        v15 = v31;
      }
    }
    v16 = 0;
    v29 = 0;
    if ( !MEMORY[4] )
      goto LABEL_42;
    while ( 1 )
    {
      v17 = 144LL * v16;
      if ( !*(_DWORD *)(v17 + 0x48) )
        goto LABEL_38;
      ShareAccess[0] = *(_DWORD *)(v17 + 0x48);
      swprintf_s((wchar_t *)Pool2, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v27, *(_QWORD *)ShareAccess);
      if ( v26 )
      {
        PartitionVhdFilePath = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)Pool2);
        v2 = (wchar_t *)PartitionVhdFilePath;
        if ( PartitionVhdFilePath )
          break;
      }
LABEL_32:
      if ( v14 == 1 )
      {
        if ( !v31 )
          goto LABEL_38;
        v19 = *v31 == *(_QWORD *)(v17 + 56);
      }
      else
      {
        if ( !v15 )
          goto LABEL_38;
        v18 = *v15 - *(_QWORD *)(v17 + 96);
        if ( *v15 == *(_QWORD *)(v17 + 96) )
          v18 = v15[1] - *(_QWORD *)(v17 + 104);
        v19 = v18 == 0;
      }
      if ( v19 )
      {
        v11 = 1;
        goto LABEL_41;
      }
LABEL_38:
      v16 = v29 + 1;
      v29 = v16;
      if ( v16 >= MEMORY[4] )
        goto LABEL_41;
    }
    if ( wcsicmp(Str1, PartitionVhdFilePath) )
    {
      ExFreePoolWithTag(v2, 0x4B444342u);
      v2 = 0LL;
      goto LABEL_32;
    }
    v11 = 1;
LABEL_41:
    v8 = v26;
LABEL_42:
    v12 = v27;
LABEL_43:
    ExFreePoolWithTag(0LL, 0x4B444342u);
    v5 = Str1;
    if ( !Str1 )
    {
LABEL_44:
      if ( v11 )
        goto LABEL_45;
LABEL_79:
      DirectoryObject = -1073741811;
      goto LABEL_80;
    }
    if ( v11 )
    {
      v11 = 0;
      if ( v8 )
        goto LABEL_45;
      v22 = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)Pool2);
      v2 = (wchar_t *)v22;
      if ( v22 )
        break;
    }
LABEL_14:
    v12 += 4;
    v27 = v12;
    if ( !*((_WORD *)v12 - 4) )
      goto LABEL_44;
  }
  if ( wcsicmp(v5, v22) )
  {
    ExFreePoolWithTag(v2, 0x4B444342u);
    v2 = 0LL;
    goto LABEL_14;
  }
LABEL_45:
  if ( (int)BiTranslateSymbolicLink((PCWSTR)Pool2) >= 0 )
  {
    ExFreePoolWithTag(Pool2, 0x4B444342u);
    Pool2 = v36;
  }
  DirectoryObject = 0;
  *v37 = Pool2;
LABEL_48:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
LABEL_50:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)DirectoryObject;
}
