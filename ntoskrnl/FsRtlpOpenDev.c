/*
 * XREFs of FsRtlpOpenDev @ 0x14084EFE0
 * Callers:
 *     FsRtlpRegisterUncProvider @ 0x14084EEE8 (FsRtlpRegisterUncProvider.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwCreateFile @ 0x140412DB0 (ZwCreateFile.c)
 */

NTSTATUS __fastcall FsRtlpOpenDev(PHANDLE FileHandle)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+27h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\Mup");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateFile(FileHandle, 0x40000000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 3u, 1u, 0, 0LL, 0);
  if ( result < 0 || (result = IoStatusBlock.Status, IoStatusBlock.Status < 0) )
    *FileHandle = (HANDLE)-1LL;
  return result;
}
