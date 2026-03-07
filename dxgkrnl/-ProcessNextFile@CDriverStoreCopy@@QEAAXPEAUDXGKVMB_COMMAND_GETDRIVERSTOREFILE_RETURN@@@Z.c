void __fastcall CDriverStoreCopy::ProcessNextFile(
        CDriverStoreCopy *this,
        struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *a2)
{
  void *FileInformation; // rax
  void *v5; // rcx
  NTSTATUS v6; // eax
  unsigned int v7; // eax
  unsigned __int64 v8; // rbx
  wchar_t *v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  _WORD *v12; // r11
  _WORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  signed int v16; // ecx
  char *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  signed __int64 v20; // r8
  __int16 v21; // r9
  char *v22; // rax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  NTSTATUS v30; // eax
  char v31; // cl
  int v32; // edx
  __int64 Pool2; // rax
  unsigned __int16 *v34; // rcx
  char *v35; // rsi
  _QWORD *v36; // rax
  __int64 v37; // rdx
  NTSTATUS v38; // eax
  ULONG Length; // [rsp+30h] [rbp-99h]
  void *FileHandle; // [rsp+60h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-51h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-41h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-1h]
  __int128 v46; // [rsp+D0h] [rbp+7h] BYREF
  __int128 v47; // [rsp+E0h] [rbp+17h]
  __int64 v48; // [rsp+F0h] [rbp+27h]

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
    WdLogSingleEntry1(3LL, v6);
  }
  else
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(*(_QWORD *)this + 8LL);
      if ( v7 > 0x206 )
        v7 = 518;
      v8 = v7;
      memmove((char *)this + 1064, (const void *)(*(_QWORD *)this + 12LL), v7);
      *((_WORD *)this + (v8 >> 1) + 532) = 0;
      _wcslwr((wchar_t *)this + 532);
      if ( *((_WORD *)this + 532) != 46 )
      {
        v9 = wcsstr((const wchar_t *)this + 532, L".sys");
        if ( !v9 || v9[4] )
          break;
      }
      v6 = ZwQueryDirectoryFile(
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
      *((_DWORD *)a2 + 4) = v6;
      if ( v6 < 0 )
        goto LABEL_8;
    }
    v10 = RtlStringCbCopyW((unsigned __int16 *)a2 + 30, 0x208uLL, (size_t *)this + 68);
    *((_DWORD *)a2 + 4) = v10;
    if ( v10 >= 0 )
    {
      if ( !*v12 )
        goto LABEL_47;
      v11 = 260LL;
      v13 = (_WORD *)((char *)a2 + 60);
      v14 = 260LL;
      do
      {
        if ( !*v13 )
          break;
        ++v13;
        --v14;
      }
      while ( v14 );
      v15 = (260 - v14) & -(__int64)(v14 != 0);
      v16 = v14 == 0 ? 0xC000000D : 0;
      if ( v14 )
      {
        v17 = (char *)a2 + 2 * v15 + 60;
        v18 = 260 - v15;
        if ( 260 != v15 )
        {
          v19 = 2147483646LL;
          v20 = (char *)L"\\" - v17;
          do
          {
            if ( !v19 )
              break;
            v21 = *(_WORD *)&v17[v20];
            if ( !v21 )
              break;
            *(_WORD *)v17 = v21;
            --v19;
            v17 += 2;
            --v18;
          }
          while ( v18 );
        }
        v22 = v17 - 2;
        if ( v18 )
          v22 = v17;
        v11 = -v18;
        v16 = v11 == 0 ? 0x80000005 : 0;
        *(_WORD *)v22 = 0;
      }
      *((_DWORD *)a2 + 4) = v16;
      if ( v16 >= 0 )
      {
LABEL_47:
        v23 = RtlStringCbCatW((unsigned __int16 *)a2 + 30, v11, (size_t *)this + 133);
        *((_DWORD *)a2 + 4) = v23;
        if ( v23 >= 0 )
        {
          v24 = RtlStringCbCopyW((unsigned __int16 *)this + 532, 0x208uLL, (size_t *)this + 3);
          *((_DWORD *)a2 + 4) = v24;
          if ( v24 >= 0 )
          {
            v26 = RtlStringCbCatW((unsigned __int16 *)this + 532, v25, (size_t *)((char *)a2 + 60));
            *((_DWORD *)a2 + 4) = v26;
            if ( v26 >= 0 )
            {
              FileHandle = 0LL;
              RtlInitUnicodeString(&DestinationString, (PCWSTR)this + 532);
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 64;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v27 = ZwOpenFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
              *((_DWORD *)a2 + 4) = v27;
              if ( v27 < 0 )
              {
                v28 = v27;
                v29 = 1262LL;
LABEL_30:
                WdLogSingleEntry2(3LL, v28, v29);
                return;
              }
              v48 = 0LL;
              v45 = 0LL;
              v46 = 0LL;
              v47 = 0LL;
              v44 = 0LL;
              v30 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &v44, 0x18u, FileStandardInformation);
              *((_DWORD *)a2 + 4) = v30;
              if ( v30 >= 0 && !BYTE5(v45) )
                *((_DWORD *)a2 + 4) = ZwQueryInformationFile(
                                        FileHandle,
                                        &IoStatusBlock,
                                        &v46,
                                        0x28u,
                                        FileBasicInformation);
              ZwClose(FileHandle);
              if ( *((int *)a2 + 4) < 0 )
              {
                v28 = *((int *)a2 + 4);
                v29 = 1289LL;
                goto LABEL_30;
              }
              v31 = BYTE5(v45);
              v32 = DWORD2(v44);
              *((_QWORD *)a2 + 1) = *((_QWORD *)&v44 + 1);
              *(_BYTE *)a2 = v31;
              if ( !v31 )
              {
                *((_QWORD *)a2 + 3) = v46;
                *((_QWORD *)a2 + 6) = *((_QWORD *)&v47 + 1);
                *((_QWORD *)a2 + 4) = *((_QWORD *)&v46 + 1);
                *((_QWORD *)a2 + 5) = v47;
                *((_DWORD *)a2 + 14) = v48;
              }
              *((_DWORD *)this + 396) = v32;
              if ( !v31 )
                goto LABEL_44;
              Pool2 = ExAllocatePool2(256LL, 536LL, 1265072196LL);
              v34 = (unsigned __int16 *)Pool2;
              if ( !Pool2 )
              {
                *((_DWORD *)a2 + 4) = -1073741801;
                return;
              }
              v35 = (char *)this + 1592;
              v36 = (_QWORD *)(Pool2 + 520);
              v37 = *(_QWORD *)v35;
              if ( *(char **)(*(_QWORD *)v35 + 8LL) != v35 )
                __fastfail(3u);
              *v36 = v37;
              v36[1] = v35;
              *(_QWORD *)(v37 + 8) = v36;
              *(_QWORD *)v35 = v36;
              v38 = RtlStringCbCopyW(v34, 0x208uLL, (size_t *)((char *)a2 + 60));
              *((_DWORD *)a2 + 4) = v38;
              if ( v38 >= 0 )
LABEL_44:
                *((_DWORD *)a2 + 4) = 0;
            }
          }
        }
      }
    }
  }
}
