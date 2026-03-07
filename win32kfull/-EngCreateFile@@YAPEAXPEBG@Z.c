void *__fastcall EngCreateFile(const unsigned __int16 *a1)
{
  NTSTATUS v1; // eax
  __int64 v2; // rcx
  struct _UNICODE_STRING Destination; // [rsp+70h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+D8h] [rbp+6Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  FileHandle = (void *)-1LL;
  Destination = 0LL;
  if ( (unsigned int)MakeSystemRelativePath(a1, &Destination) )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = IoCreateFile(
           &FileHandle,
           0x120089u,
           &ObjectAttributes,
           &IoStatusBlock,
           0LL,
           0x80u,
           1u,
           1u,
           0x10u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x309u);
    v2 = (__int64)FileHandle;
    if ( v1 < 0 )
      v2 = -1LL;
    FileHandle = (void *)v2;
    Win32FreePool(Destination.Buffer);
  }
  return FileHandle;
}
