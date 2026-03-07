__int64 __fastcall DxgkpCopyFile(PCWSTR SourceString, PCWSTR a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // rdi
  void *v5; // rsi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-49h] BYREF
  struct _UNICODE_STRING v12; // [rsp+80h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES v14; // [rsp+C0h] [rbp+7h] BYREF
  void *FileHandle; // [rsp+130h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+138h] [rbp+7Fh] BYREF

  DestinationString = 0LL;
  v12 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v12, a2);
  FileHandle = (void *)-1LL;
  Handle = (HANDLE)-1LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_QWORD *)&v14.Length = 48LL;
  *(_QWORD *)&v14.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v14.RootDirectory = 0LL;
  v14.ObjectName = &v12;
  *(_OWORD *)&v14.SecurityDescriptor = 0LL;
  IoStatusBlock = 0LL;
  v3 = ZwCreateFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x4010u, 0LL, 0);
  LODWORD(v4) = v3;
  if ( v3 >= 0 )
  {
    v5 = (void *)operator new[](0x10000uLL, 0x4B677844u, 258LL);
    if ( v5 )
    {
      v6 = ZwCreateFile(&Handle, 0x1F019Fu, &v14, &IoStatusBlock, 0LL, 0x80u, 7u, 5u, 0x4010u, 0LL, 0);
      v4 = v6;
      if ( v6 >= 0 )
      {
        LODWORD(v4) = DxgkpCopyAttributes(FileHandle, Handle);
        if ( (int)v4 >= 0 )
        {
          while ( 1 )
          {
            v8 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v5, 0x10000u, 0LL, 0LL);
            LODWORD(v4) = v8;
            if ( v8 < 0 )
              break;
            v7 = ZwWriteFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, v5, IoStatusBlock.Information, 0LL, 0LL);
            v4 = v7;
            if ( v7 < 0 )
            {
              WdLogSingleEntry2(2LL, v7, 546LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed ZwWriteFile in DxgkpCopyFile: 0x%I64x",
                v4,
                546LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_17;
            }
          }
          if ( v8 == -1073741807 )
          {
            LODWORD(v4) = 0;
          }
          else
          {
            WdLogSingleEntry2(2LL, v8, 526LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed ZwReadFile in DxgkpCopyFile: 0x%I64x",
              (int)v4,
              526LL,
              0LL,
              0LL,
              0LL);
          }
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, v6, 492LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed ZwCreateFile for dest in DxgkpCopyFile: 0x%I64x",
          v4,
          492LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry1(6LL, 473LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed allocate memory for CopyBuffer",
        473LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v4) = -1073741801;
    }
LABEL_17:
    if ( Handle != (HANDLE)-1LL )
    {
      ZwClose(Handle);
      if ( (int)v4 < 0 )
        DxgkpDeleteFile(a2);
    }
    operator delete(v5);
    if ( FileHandle != (void *)-1LL )
      ZwClose(FileHandle);
  }
  else
  {
    if ( v3 == -1073741772 )
      LODWORD(v4) = 0;
    WdLogSingleEntry2(2LL, (int)v4, 465LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed ZwCreateFile for source in DxgkpCopyFile: 0x%I64x",
      (int)v4,
      465LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v4;
}
