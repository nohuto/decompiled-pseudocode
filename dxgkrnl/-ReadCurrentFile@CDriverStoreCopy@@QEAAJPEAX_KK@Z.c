__int64 __fastcall CDriverStoreCopy::ReadCurrentFile(const WCHAR *this, void *a2, union _LARGE_INTEGER a3, ULONG a4)
{
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  NTSTATUS v9; // eax
  union _LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+Fh] BYREF
  void *FileHandle; // [rsp+D0h] [rbp+67h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, this + 532);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  v8 = v7;
  if ( v7 >= 0 )
  {
    ByteOffset = a3;
    v9 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a2, a4, &ByteOffset, 0LL);
    v8 = v9;
    if ( v9 < 0 )
      WdLogSingleEntry2(3LL, v9, 1365LL);
    ZwClose(FileHandle);
  }
  else
  {
    WdLogSingleEntry1(3LL, v7);
  }
  return v8;
}
