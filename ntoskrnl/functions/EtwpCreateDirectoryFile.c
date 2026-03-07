__int64 __fastcall EtwpCreateDirectoryFile(
        PCWSTR SourceString,
        char a2,
        char a3,
        char a4,
        HANDLE *a5,
        PIO_STATUS_BLOCK IoStatusBlock,
        int a7)
{
  ACCESS_MASK v10; // edx
  ULONG CreateOptions; // ecx
  ULONG CreateDisposition; // eax
  NTSTATUS v13; // ebx
  HANDLE FileHandle; // [rsp+68h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  if ( !a2 && !a5 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = a4 != 0 ? 576 : 1600;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( a2 )
  {
    CreateDisposition = 3;
    v10 = 1180063;
    CreateOptions = 33;
  }
  else
  {
    v10 = a4 != 0 ? 1245323 : 1179787;
    CreateOptions = a3 != 0 ? 40 : 32;
    CreateDisposition = a7 != 0 ? 3 : 5;
  }
  v13 = ZwCreateFile(
          &FileHandle,
          v10,
          &ObjectAttributes,
          IoStatusBlock,
          0LL,
          0x80u,
          5u,
          CreateDisposition,
          CreateOptions,
          0LL,
          0);
  if ( v13 >= 0 && a2 && FileHandle )
  {
    ZwClose(FileHandle);
    if ( a5 )
      *a5 = 0LL;
  }
  else
  {
    if ( a5 )
      *a5 = FileHandle;
    if ( a2 )
    {
      if ( v13 == -1073741757 )
        return 0;
    }
  }
  return (unsigned int)v13;
}
