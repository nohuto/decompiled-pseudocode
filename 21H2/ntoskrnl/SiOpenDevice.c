/*
 * XREFs of SiOpenDevice @ 0x1406BB6BC
 * Callers:
 *     SiGetDiskPartitionInformation @ 0x1406BB628 (SiGetDiskPartitionInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140A216DC (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140A217B8 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140A218B8 (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x140A21954 (SiQueryProperty.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 */

NTSTATUS __fastcall SiOpenDevice(PCWSTR SourceString, PHANDLE FileHandle)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *FileHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IoStatusBlock = 0LL;
  return ZwOpenFile(FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
}
