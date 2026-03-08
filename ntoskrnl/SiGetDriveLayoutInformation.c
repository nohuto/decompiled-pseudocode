/*
 * XREFs of SiGetDriveLayoutInformation @ 0x140A5C928
 * Callers:
 *     SiFindSystemPartition @ 0x140A5C744 (SiFindSystemPartition.c)
 *     SiGetEfiSystemDevice @ 0x140A5CDB0 (SiGetEfiSystemDevice.c)
 *     SiGetBiosSystemPartition @ 0x140A5D7C4 (SiGetBiosSystemPartition.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1404123F0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     SiOpenDevice @ 0x14076EB34 (SiOpenDevice.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetDriveLayoutInformation(const WCHAR *a1, _QWORD *a2)
{
  NTSTATUS v3; // ebx
  ULONG OutputBufferLength; // esi
  __int64 i; // rdx
  void *OutputBuffer; // rax
  void *v7; // rdi
  NTSTATUS v8; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+18h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v3 = SiOpenDevice(a1, &FileHandle);
  if ( v3 >= 0 )
  {
    OutputBufferLength = 18480;
    for ( i = 18480LL; ; i = OutputBufferLength )
    {
      OutputBuffer = (void *)ExAllocatePool2(256LL, i, 1263556947LL);
      v7 = OutputBuffer;
      if ( !OutputBuffer )
      {
        v3 = -1073741670;
        goto LABEL_10;
      }
      v8 = ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x70050u,
             0LL,
             0,
             OutputBuffer,
             OutputBufferLength);
      v3 = v8;
      if ( v8 != -1073741789 )
        break;
      ExFreePoolWithTag(v7, 0);
      OutputBufferLength += 9216;
    }
    if ( v8 < 0 )
      ExFreePoolWithTag(v7, 0);
    else
      *a2 = v7;
  }
LABEL_10:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
