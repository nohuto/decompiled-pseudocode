void *__fastcall hGetHandleFromFilePath(PCWSTR SourceString, int a2)
{
  BOOLEAN v3; // di
  NTSTATUS v4; // eax
  int v5; // ebx
  void *result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+E8h] [rbp+77h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v3 = IoSetThreadHardErrorMode(0);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( a2 )
    v4 = IoCreateFile(
           &FileHandle,
           0x12019Fu,
           &ObjectAttributes,
           &IoStatusBlock,
           0LL,
           0x80u,
           7u,
           3u,
           0x10u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x301u);
  else
    v4 = IoCreateFile(
           &FileHandle,
           0x120089u,
           &ObjectAttributes,
           &IoStatusBlock,
           0LL,
           0x80u,
           5u,
           1u,
           0x10u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x301u);
  v5 = v4;
  IoSetThreadHardErrorMode(v3);
  result = FileHandle;
  if ( v5 < 0 )
    return 0LL;
  return result;
}
