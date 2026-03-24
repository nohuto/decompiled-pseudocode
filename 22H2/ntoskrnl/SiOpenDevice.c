/*
 * XREFs of SiOpenDevice @ 0x140687F44
 * Callers:
 *     SiGetDiskPartitionInformation @ 0x140687EB0 (SiGetDiskPartitionInformation.c)
 *     SiGetDriveLayoutInformation @ 0x14077AC0C (SiGetDriveLayoutInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1409737C0 (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x14097389C (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x140973938 (SiQueryProperty.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     ZwOpenFile @ 0x1403FA080 (ZwOpenFile.c)
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
