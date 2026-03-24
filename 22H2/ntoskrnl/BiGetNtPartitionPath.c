/*
 * XREFs of BiGetNtPartitionPath @ 0x140782648
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1407824D4 (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D19D0 (_wcsicmp.c)
 *     swprintf_s @ 0x1403D61F0 (swprintf_s.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwOpenFile @ 0x1403FA080 (ZwOpenFile.c)
 *     ZwOpenDirectoryObject @ 0x1403FA520 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1403FC2A0 (ZwQueryDirectoryObject.c)
 *     BiIsValidDiskDevice @ 0x140782A28 (BiIsValidDiskDevice.c)
 *     BiTranslateSymbolicLink @ 0x140782ABC (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x140782C38 (BiGetDriveLayoutBlock.c)
 *     BiGetPartitionVhdFilePath @ 0x1407853A4 (BiGetPartitionVhdFilePath.c)
 *     BiVerifyBootPartition @ 0x1407857A0 (BiVerifyBootPartition.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiGetNtPartitionPath(int a1, _QWORD *a2)
{
  wchar_t *v2; // r15
  wchar_t **v3; // r14
  int v4; // eax
  wchar_t *v5; // r13
  NTSTATUS v6; // ebx
  PVOID PoolWithTag; // rdi
  unsigned int v8; // esi
  PVOID v9; // rax
  char v10; // r12
  NTSTATUS DirectoryObject; // eax
  wchar_t **v12; // rbx
  bool v13; // r14
  unsigned __int64 v14; // rcx
  _DWORD *v15; // r13
  int v16; // eax
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rsi
  ULONG v20; // eax
  bool v21; // zf
  const wchar_t *PartitionVhdFilePath; // rax
  __int64 v24; // rcx
  const wchar_t *v25; // rax
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  int *OpenOptions; // [rsp+28h] [rbp-D8h]
  __int64 v28; // [rsp+30h] [rbp-D0h]
  bool v29; // [rsp+40h] [rbp-C0h]
  int v30; // [rsp+40h] [rbp-C0h]
  wchar_t **v31; // [rsp+48h] [rbp-B8h]
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v33; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t *Str1; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  _DWORD *v38; // [rsp+80h] [rbp-80h] BYREF
  HANDLE DirectoryHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp-70h] BYREF
  PVOID v41; // [rsp+98h] [rbp-68h]
  void *v42; // [rsp+A0h] [rbp-60h]
  _QWORD *v43; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v45; // [rsp+C0h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  OBJECT_ATTRIBUTES v47; // [rsp+100h] [rbp+0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v49[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v50; // [rsp+160h] [rbp+60h]

  v43 = a2;
  v38 = 0LL;
  v50 = 0LL;
  FileHandle = 0LL;
  DirectoryHandle = 0LL;
  v32 = 0;
  memset(v49, 0, sizeof(v49));
  P = 0LL;
  v2 = 0LL;
  v33 = 0LL;
  v3 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v36 = 0LL;
  v42 = 0LL;
  Str1 = 0LL;
  DestinationString = 0LL;
  memset(&v47, 0, sizeof(v47));
  IoStatusBlock = 0LL;
  v45 = 0LL;
  v4 = BiVerifyBootPartition(a1, (unsigned int)&v33, (unsigned int)&v38, (unsigned int)&v36, (__int64)&Str1, 0LL);
  v5 = Str1;
  v6 = v4;
  if ( v4 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x4B444342u);
    if ( !PoolWithTag )
      return 3221225495LL;
    v29 = 0;
    if ( v5 && !v33 )
      v29 = v38 == 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Device");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
    if ( v6 < 0 )
      goto LABEL_80;
    v8 = 4096;
    v9 = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x4B444342u);
    v10 = 0;
    while ( 1 )
    {
      v41 = v9;
      v3 = (wchar_t **)v9;
      if ( !v9 )
      {
        v6 = -1073741801;
        goto LABEL_80;
      }
      v28 = 0LL;
      OpenOptions = &v32;
      v32 = 0;
      DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v9);
      v6 = DirectoryObject;
      if ( DirectoryObject != 261 )
        break;
      ExFreePoolWithTag(v3, 0x4B444342u);
      v8 += 4096;
      v9 = ExAllocatePoolWithTag(PagedPool, v8, 0x4B444342u);
    }
    if ( (int)(DirectoryObject + 0x80000000) >= 0 && DirectoryObject != -2147483622 )
      goto LABEL_39;
    if ( !*(_WORD *)v3 )
    {
LABEL_79:
      v6 = -1073741811;
LABEL_80:
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
LABEL_40:
      if ( v3 )
        ExFreePoolWithTag(v3, 0x4B444342u);
      goto LABEL_42;
    }
    v12 = v3 + 1;
    v13 = v29;
    v31 = v12;
    while ( 1 )
    {
      if ( !(unsigned __int8)BiIsValidDiskDevice(*v12, v12[2]) )
        goto LABEL_14;
      swprintf_s((wchar_t *)PoolWithTag, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v12, 0LL, OpenOptions, v28);
      if ( (int)BiGetDriveLayoutBlock((PCWSTR)PoolWithTag) < 0 )
        goto LABEL_14;
      if ( !v5 )
      {
        v14 = *(_QWORD *)(v36 + 4) - *(_QWORD *)((char *)v49 + 4);
        if ( !v14 )
        {
          v14 = *(_QWORD *)(v36 + 12) - *(_QWORD *)((char *)v49 + 12);
          if ( !v14 )
            v14 = *(unsigned int *)(v36 + 20) - (unsigned __int64)DWORD1(v49[1]);
        }
        if ( v14 )
        {
          ExFreePoolWithTag(P, 0x4B444342u);
          goto LABEL_14;
        }
      }
      v15 = P;
      v16 = *(_DWORD *)(v36 + 4);
      v35 = v16;
      if ( v38 )
        break;
      if ( v16 != 1 )
        goto LABEL_56;
LABEL_24:
      v17 = 0LL;
      if ( !v16 )
      {
        if ( v38 )
        {
          v17 = v38;
        }
        else if ( v33 )
        {
          v17 = v33;
        }
      }
      v18 = 0LL;
      v30 = 0;
      if ( *((_DWORD *)P + 1) )
      {
        do
        {
          v19 = 36 * v18;
          v20 = v15[36 * v18 + 18];
          if ( v20 )
          {
            ShareAccess[0] = v20;
            swprintf_s((wchar_t *)PoolWithTag, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v31, *(_QWORD *)ShareAccess);
            if ( v13 )
            {
              PartitionVhdFilePath = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)PoolWithTag);
              v2 = (wchar_t *)PartitionVhdFilePath;
              if ( PartitionVhdFilePath )
              {
                if ( !wcsicmp(Str1, PartitionVhdFilePath) )
                {
LABEL_32:
                  v10 = 1;
                  break;
                }
                ExFreePoolWithTag(v2, 0x4B444342u);
                v2 = 0LL;
              }
            }
            if ( v35 == 1 )
            {
              if ( !v33 )
                goto LABEL_70;
              v21 = *v33 == *(_QWORD *)&v15[v19 + 14];
            }
            else
            {
              if ( !v17 )
                goto LABEL_70;
              v24 = *v17 - *(_QWORD *)&v15[v19 + 24];
              if ( *v17 == *(_QWORD *)&v15[v19 + 24] )
                v24 = v17[1] - *(_QWORD *)&v15[v19 + 26];
              v21 = v24 == 0;
            }
            if ( v21 )
              goto LABEL_32;
          }
LABEL_70:
          v18 = (unsigned int)(v30 + 1);
          v30 = v18;
        }
        while ( (unsigned int)v18 < v15[1] );
      }
      v12 = v31;
LABEL_34:
      ExFreePoolWithTag(v15, 0x4B444342u);
      v5 = Str1;
      if ( !Str1 )
        goto LABEL_35;
      if ( v10 )
      {
        if ( v13 )
          goto LABEL_35;
        v25 = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)PoolWithTag);
        v2 = (wchar_t *)v25;
        if ( v25 )
        {
          if ( !wcsicmp(v5, v25) )
          {
LABEL_35:
            v3 = (wchar_t **)v41;
            if ( v10 )
            {
              if ( (int)BiTranslateSymbolicLink((PCWSTR)PoolWithTag) >= 0 )
              {
                ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
                PoolWithTag = v42;
              }
              v6 = 0;
              *v43 = PoolWithTag;
LABEL_39:
              if ( v6 >= 0 )
                goto LABEL_40;
              goto LABEL_80;
            }
            goto LABEL_79;
          }
          ExFreePoolWithTag(v2, 0x4B444342u);
          v2 = 0LL;
        }
        v10 = 0;
      }
LABEL_14:
      v12 += 4;
      v31 = v12;
      if ( !*((_WORD *)v12 - 4) )
        goto LABEL_35;
    }
    if ( v16 == 1 )
    {
      ShareAccess[0] = *v38;
      swprintf_s((wchar_t *)PoolWithTag, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v12, *(_QWORD *)ShareAccess);
      RtlInitUnicodeString(&v45, (PCWSTR)PoolWithTag);
      v47.ObjectName = &v45;
      v47.Length = 48;
      v47.RootDirectory = 0LL;
      v47.Attributes = 576;
      *(_OWORD *)&v47.SecurityDescriptor = 0LL;
      if ( ZwOpenFile(&FileHandle, 0x80000000, &v47, &IoStatusBlock, 3u, 0) >= 0 )
      {
        ZwClose(FileHandle);
        v10 = 1;
      }
      goto LABEL_34;
    }
LABEL_56:
    if ( v16 )
      goto LABEL_34;
    goto LABEL_24;
  }
LABEL_42:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return (unsigned int)v6;
}
