/*
 * XREFs of AslDoesDirectoryExistNtPath @ 0x140A51428
 * Callers:
 *     SdbpCheckMatchingDir @ 0x140A4C9D0 (SdbpCheckMatchingDir.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 */

__int64 __fastcall AslDoesDirectoryExistNtPath(PCWSTR SourceString)
{
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp+18h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v1 = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 1u);
  if ( v2 >= 0 )
  {
    ZwClose(FileHandle);
    return 1;
  }
  if ( v2 == -1073741790 || v2 == -1073741757 )
    return 1;
  return v1;
}
