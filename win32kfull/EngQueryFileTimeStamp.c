LARGE_INTEGER __stdcall EngQueryFileTimeStamp(LPWSTR pwsz)
{
  NTSTATUS v1; // ebx
  void *FileHandle; // [rsp+30h] [rbp-49h] BYREF
  LARGE_INTEGER v4; // [rsp+38h] [rbp-41h] BYREF
  __int64 v5; // [rsp+40h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  __int128 FileInformation; // [rsp+98h] [rbp+1Fh] BYREF
  __int128 v10; // [rsp+A8h] [rbp+2Fh]
  __int64 v11; // [rsp+B8h] [rbp+3Fh]

  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v4.QuadPart = 0LL;
  v11 = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v10 = 0LL;
  RtlInitUnicodeString(&DestinationString, pwsz);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x10u) >= 0 )
  {
    v1 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
    ZwClose(FileHandle);
    if ( !v1 )
    {
      v5 = v10;
      GreSystemTimeToLocalTime(&v5, &v4);
    }
  }
  return v4;
}
