/*
 * XREFs of SiOpenDevice @ 0x1407C0764
 * Callers:
 *     SiGetDiskPartitionInformation @ 0x1407C06D0 (SiGetDiskPartitionInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140A5F54C (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140A5F628 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140A5F728 (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x140A5F7C4 (SiQueryProperty.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwOpenFile @ 0x14041AD00 (ZwOpenFile.c)
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
