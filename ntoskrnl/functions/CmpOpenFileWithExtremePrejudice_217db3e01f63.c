__int64 __fastcall CmpOpenFileWithExtremePrejudice(
        PHANDLE FileHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FileAttributes,
        ULONG CreateOptions,
        __int64 a6)
{
  int AttributesFile; // eax
  unsigned int v11; // ebx
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  NTSTATUS File; // eax
  HANDLE FileHandlea; // [rsp+60h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlocka; // [rsp+68h] [rbp-31h] BYREF
  _OWORD FileInformation[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v19; // [rsp+98h] [rbp-1h]

  *FileHandle = 0LL;
  FileHandlea = 0LL;
  v19 = 0LL;
  IoStatusBlocka = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  AttributesFile = ZwQueryAttributesFile((__int64)ObjectAttributes, (__int64)FileInformation);
  v11 = AttributesFile;
  if ( AttributesFile >= 0 )
  {
    LODWORD(v19) = v19 & 0xFFFFFFFE;
    v12 = ZwOpenFile(&FileHandlea, 0x100u, ObjectAttributes, &IoStatusBlocka, 7u, 0x4000u);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v13 = ZwSetInformationFile(FileHandlea, &IoStatusBlocka, FileInformation, 0x28u, FileBasicInformation);
      v11 = v13;
      if ( v13 >= 0 )
      {
        ZwClose(FileHandlea);
        FileHandlea = 0LL;
        File = ZwCreateFile(
                 FileHandle,
                 3u,
                 ObjectAttributes,
                 IoStatusBlock,
                 0LL,
                 FileAttributes,
                 0,
                 1u,
                 CreateOptions,
                 0LL,
                 0);
        v11 = File;
        if ( File >= 0 )
          v11 = 0;
        else
          SetFailureLocation(a6, 0, 36, File, 64);
      }
      else
      {
        SetFailureLocation(a6, 0, 36, v13, 48);
      }
    }
    else
    {
      SetFailureLocation(a6, 0, 36, v12, 32);
    }
  }
  else
  {
    SetFailureLocation(a6, 0, 36, AttributesFile, 16);
  }
  if ( FileHandlea )
    ZwClose(FileHandlea);
  return v11;
}
