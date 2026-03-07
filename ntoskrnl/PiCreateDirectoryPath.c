__int64 __fastcall PiCreateDirectoryPath(UNICODE_STRING *SourceString, void *a2, HANDLE *a3)
{
  wchar_t *v6; // rax
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  wchar_t *Buffer; // rcx
  unsigned __int16 Length; // r15
  unsigned __int16 v11; // r14
  wchar_t *v12; // rdi
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+67h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( SourceString && a3 && SourceString->Length >= 4u && (v6 = SourceString->Buffer, *v6 == 92) && v6[1] != 92 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = SourceString;
    ObjectAttributes.SecurityDescriptor = a2;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v7 = ZwCreateFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 3u, 3u, 0x21u, 0LL, 0);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *a3 = FileHandle;
LABEL_8:
      FileHandle = 0LL;
      goto LABEL_25;
    }
    if ( v7 == -1073741766 )
    {
      v8 = PnpConcatenateUnicodeStrings(&DestinationString, SourceString);
      if ( v8 >= 0 )
      {
        Buffer = DestinationString.Buffer;
        Length = DestinationString.Length;
        v11 = DestinationString.Length >> 1;
        v12 = DestinationString.Buffer + 2;
        if ( (unsigned __int16)(DestinationString.Length >> 1) <= 2u )
          goto LABEL_22;
        do
        {
          if ( !*v12 )
            break;
          if ( *v12 == 92 )
          {
            *v12 = 0;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            DestinationString.Length = 2 * (v12 - DestinationString.Buffer);
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v8 = ZwCreateFile(
                   &FileHandle,
                   0x100001u,
                   &ObjectAttributes,
                   &IoStatusBlock,
                   0LL,
                   0x80u,
                   3u,
                   3u,
                   0x21u,
                   0LL,
                   0);
            *v12 = 92;
            if ( v8 != -1073741788 && v8 != -1073741811 && v8 < 0 )
              goto LABEL_25;
            if ( FileHandle )
            {
              ZwClose(FileHandle);
              FileHandle = 0LL;
            }
            Buffer = DestinationString.Buffer;
          }
          ++v12;
        }
        while ( (unsigned __int16)(v12 - Buffer) < v11 );
        if ( v8 >= 0 )
        {
LABEL_22:
          ObjectAttributes.ObjectName = &DestinationString;
          DestinationString.Length = Length;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.SecurityDescriptor = a2;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          v8 = ZwCreateFile(
                 &FileHandle,
                 0x100001u,
                 &ObjectAttributes,
                 &IoStatusBlock,
                 0LL,
                 0x80u,
                 3u,
                 3u,
                 0x21u,
                 0LL,
                 0);
          if ( v8 >= 0 )
          {
            *a3 = FileHandle;
            goto LABEL_8;
          }
        }
      }
    }
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_25:
  RtlFreeUnicodeString(&DestinationString);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v8;
}
