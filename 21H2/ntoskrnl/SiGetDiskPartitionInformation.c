/*
 * XREFs of SiGetDiskPartitionInformation @ 0x140602A10
 * Callers:
 *     SiValidateSystemPartition @ 0x14023C080 (SiValidateSystemPartition.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1403FA660 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     SiOpenDevice @ 0x140602AA4 (SiOpenDevice.c)
 */

__int64 __fastcall SiGetDiskPartitionInformation(const WCHAR *a1, void *a2)
{
  NTSTATUS v3; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+18h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v3 = SiOpenDevice(a1, &FileHandle);
  if ( v3 >= 0 )
    v3 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, a2, 0x90u);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
