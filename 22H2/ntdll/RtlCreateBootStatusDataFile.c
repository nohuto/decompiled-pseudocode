/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x1800EDD40
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     NtWriteFile @ 0x18009D5E0 (NtWriteFile.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     ZwCreateFile @ 0x18009DF80 (ZwCreateFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EE040 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetBootStatusPath @ 0x1800EE214 (RtlpGetBootStatusPath.c)
 */

NTSTATUS RtlCreateBootStatusDataFile(void)
{
  const WCHAR *v0; // rcx
  char v1; // di
  int v2; // ebx
  PCWSTR SourceString; // [rsp+60h] [rbp-19h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp+Fh] BYREF
  char v8; // [rsp+E0h] [rbp+67h] BYREF
  char Buffer; // [rsp+E8h] [rbp+6Fh] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  FileHandle = 0LL;
  v1 = 0;
  SourceString = 0LL;
  Buffer = 1;
  v8 = 0;
  if ( v0 )
  {
    RtlInitUnicodeString(&DestinationString, v0);
  }
  else
  {
    RtlpGetBootStatusPath(&SourceString, &v8);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v1 = v8;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ByteOffset.QuadPart = 67584LL;
  v2 = ZwCreateFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, &ByteOffset, 4u, 0, 2u, 0x8020u, 0LL, 0);
  if ( v2 >= 0 )
  {
    --ByteOffset.QuadPart;
    v2 = NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 1u, &ByteOffset, 0LL);
    if ( v2 >= 0 )
      v2 = RtlRestoreBootStatusDefaults(FileHandle);
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)SourceString);
  return v2;
}
