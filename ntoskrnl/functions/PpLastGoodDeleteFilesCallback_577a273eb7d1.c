NTSTATUS __fastcall PpLastGoodDeleteFilesCallback(UNICODE_STRING *a1, __int64 a2, char a3)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+10h] BYREF
  char FileInformation; // [rsp+90h] [rbp+20h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  IoStatusBlock = 0LL;
  IopFileUtilClearAttributes();
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = a1;
  result = ZwOpenFile(
             &FileHandle,
             0x10080u,
             &ObjectAttributes,
             &IoStatusBlock,
             7u,
             (a3 & 0x10) != 0 ? 2113537 : 2113600);
  if ( result >= 0 )
  {
    FileInformation = 1;
    ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 1u, FileDispositionInformation);
    ZwClose(FileHandle);
    return 0;
  }
  return result;
}
