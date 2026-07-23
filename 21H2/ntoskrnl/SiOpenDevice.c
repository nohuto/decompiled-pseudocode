/*
 * XREFs of SiOpenDevice @ 0x140602AA4
 * Callers:
 *     SiGetDiskPartitionInformation @ 0x140602A10 (SiGetDiskPartitionInformation.c)
 *     SiGetDriveLayoutInformation @ 0x14077AECC (SiGetDriveLayoutInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140973950 (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140973A2C (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x140973AC8 (SiQueryProperty.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ZwOpenFile @ 0x1403FABE0 (ZwOpenFile.c)
 */

NTSTATUS __fastcall SiOpenDevice(PCWSTR SourceString, PHANDLE FileHandle)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IoStatusBlock = 0LL;
  return ZwOpenFile(FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
}
