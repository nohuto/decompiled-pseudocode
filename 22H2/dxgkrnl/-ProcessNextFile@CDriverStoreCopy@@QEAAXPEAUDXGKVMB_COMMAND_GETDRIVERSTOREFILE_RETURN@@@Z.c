/*
 * XREFs of ?ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0263D9C
 * Callers:
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C02633BC (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000C2B4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C0038E94 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall CDriverStoreCopy::ProcessNextFile(
        CDriverStoreCopy *this,
        struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *a2)
{
  void *FileInformation; // rax
  void *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // eax
  unsigned __int64 v11; // rbx
  wchar_t *v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  _WORD *v18; // rax
  __int64 v19; // r8
  signed int v20; // ecx
  __int64 v21; // rax
  char *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  signed __int64 v25; // rax
  __int16 v26; // r9
  char *v27; // rax
  NTSTATUS v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  NTSTATUS v31; // eax
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  NTSTATUS v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  char v40; // dl
  int v41; // r8d
  char *PoolWithTag; // rax
  unsigned __int16 *v43; // rcx
  char *v44; // rsi
  _QWORD *v45; // rax
  __int64 v46; // rdx
  int v47; // eax
  ULONG Length; // [rsp+30h] [rbp-99h]
  void *FileHandle; // [rsp+60h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-51h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-41h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-1h]
  __int128 v55; // [rsp+D0h] [rbp+7h] BYREF
  __int128 v56; // [rsp+E0h] [rbp+17h]
  __int64 v57; // [rsp+F0h] [rbp+27h]

  Length = *((_DWORD *)this + 2);
  FileInformation = *(void **)this;
  v5 = (void *)*((_QWORD *)this + 2);
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v6 = ZwQueryDirectoryFile(
         v5,
         0LL,
         0LL,
         0LL,
         &IoStatusBlock,
         FileInformation,
         Length,
         FileNamesInformation,
         1u,
         0LL,
         0);
  *((_DWORD *)a2 + 4) = v6;
  if ( v6 < 0 )
  {
LABEL_8:
    v14 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    v15 = *((int *)a2 + 4);
LABEL_9:
    *(_QWORD *)(v14 + 24) = v15;
    WdLogEvent5_WdWarning(v14);
    return;
  }
  while ( 1 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)this + 8LL);
    if ( v10 > 0x206 )
      v10 = 518;
    v11 = v10;
    memmove((char *)this + 1064, (const void *)(*(_QWORD *)this + 12LL), v10);
    *((_WORD *)this + (v11 >> 1) + 532) = 0;
    _wcslwr((wchar_t *)this + 532);
    if ( *((_WORD *)this + 532) != 46 )
    {
      v12 = wcsstr((const wchar_t *)this + 532, L".sys");
      if ( !v12 || v12[4] )
        break;
    }
    v13 = ZwQueryDirectoryFile(
            *((HANDLE *)this + 2),
            0LL,
            0LL,
            0LL,
            &IoStatusBlock,
            *(PVOID *)this,
            *((_DWORD *)this + 2),
            FileNamesInformation,
            1u,
            0LL,
            0);
    *((_DWORD *)a2 + 4) = v13;
    if ( v13 < 0 )
      goto LABEL_8;
  }
  v16 = RtlStringCbCopyW((unsigned __int16 *)a2 + 30, 0x208uLL, (size_t *)this + 68);
  *((_DWORD *)a2 + 4) = v16;
  if ( v16 >= 0 )
  {
    if ( !*((_WORD *)this + 272) )
      goto LABEL_50;
    v17 = 260LL;
    v18 = (_WORD *)((char *)a2 + 60);
    v19 = 260LL;
    do
    {
      if ( !*v18 )
        break;
      ++v18;
      --v19;
    }
    while ( v19 );
    v20 = v19 == 0 ? 0xC000000D : 0;
    if ( v19 )
      v21 = 260 - v19;
    else
      v21 = 0LL;
    if ( v19 )
    {
      v22 = (char *)a2 + 2 * v21 + 60;
      v23 = 260 - v21;
      if ( 260 != v21 )
      {
        v24 = 2147483646LL;
        v25 = (char *)L"\\" - v22;
        do
        {
          if ( !v24 )
            break;
          v26 = *(_WORD *)&v22[v25];
          if ( !v26 )
            break;
          *(_WORD *)v22 = v26;
          --v24;
          v22 += 2;
          --v23;
        }
        while ( v23 );
      }
      v27 = v22 - 2;
      if ( v23 )
        v27 = v22;
      v17 = -v23;
      v20 = v17 == 0 ? 0x80000005 : 0;
      *(_WORD *)v27 = 0;
    }
    *((_DWORD *)a2 + 4) = v20;
    if ( v20 >= 0 )
    {
LABEL_50:
      v28 = RtlStringCbCatW((unsigned __int16 *)a2 + 30, v17, (size_t *)this + 133);
      *((_DWORD *)a2 + 4) = v28;
      if ( v28 >= 0 )
      {
        v29 = RtlStringCbCopyW((unsigned __int16 *)this + 532, 0x208uLL, (size_t *)this + 3);
        *((_DWORD *)a2 + 4) = v29;
        if ( v29 >= 0 )
        {
          v31 = RtlStringCbCatW((unsigned __int16 *)this + 532, v30, (size_t *)((char *)a2 + 60));
          *((_DWORD *)a2 + 4) = v31;
          if ( v31 >= 0 )
          {
            FileHandle = 0LL;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)this + 532);
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v32 = ZwOpenFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
            *((_DWORD *)a2 + 4) = v32;
            if ( v32 < 0 )
            {
              v14 = WdLogNewEntry5_WdWarning(v34, v33, v35);
              v15 = *((int *)a2 + 4);
              *(_QWORD *)(v14 + 32) = 1258LL;
              goto LABEL_9;
            }
            v57 = 0LL;
            v54 = 0LL;
            v55 = 0LL;
            v56 = 0LL;
            v53 = 0LL;
            v36 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &v53, 0x18u, FileStandardInformation);
            *((_DWORD *)a2 + 4) = v36;
            if ( v36 >= 0 && !BYTE5(v54) )
              *((_DWORD *)a2 + 4) = ZwQueryInformationFile(
                                      FileHandle,
                                      &IoStatusBlock,
                                      &v55,
                                      0x28u,
                                      FileBasicInformation);
            ZwClose(FileHandle);
            if ( *((int *)a2 + 4) < 0 )
            {
              v14 = WdLogNewEntry5_WdWarning(v38, v37, v39);
              v15 = *((int *)a2 + 4);
              *(_QWORD *)(v14 + 32) = 1285LL;
              goto LABEL_9;
            }
            v40 = BYTE5(v54);
            v41 = DWORD2(v53);
            *((_QWORD *)a2 + 1) = *((_QWORD *)&v53 + 1);
            *(_BYTE *)a2 = v40;
            if ( !v40 )
            {
              *((_QWORD *)a2 + 3) = v55;
              *((_QWORD *)a2 + 6) = *((_QWORD *)&v56 + 1);
              *((_QWORD *)a2 + 4) = *((_QWORD *)&v55 + 1);
              *((_QWORD *)a2 + 5) = v56;
              *((_DWORD *)a2 + 14) = v57;
            }
            *((_DWORD *)this + 396) = v41;
            if ( !v40 )
              goto LABEL_47;
            PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x218uLL, 0x4B677844u);
            v43 = (unsigned __int16 *)PoolWithTag;
            if ( !PoolWithTag )
            {
              *((_DWORD *)a2 + 4) = -1073741801;
              return;
            }
            v44 = (char *)this + 1592;
            v45 = PoolWithTag + 520;
            v46 = *(_QWORD *)v44;
            if ( *(char **)(*(_QWORD *)v44 + 8LL) != v44 )
              __fastfail(3u);
            *v45 = v46;
            v45[1] = v44;
            *(_QWORD *)(v46 + 8) = v45;
            *(_QWORD *)v44 = v45;
            v47 = RtlStringCbCopyW(v43, 0x208uLL, (size_t *)((char *)a2 + 60));
            *((_DWORD *)a2 + 4) = v47;
            if ( v47 >= 0 )
LABEL_47:
              *((_DWORD *)a2 + 4) = 0;
          }
        }
      }
    }
  }
}
