/*
 * XREFs of VhdiQueryVolumeVhdFilePath @ 0x140A961A8
 * Callers:
 *     VhdiInitializeBootDisk @ 0x140A95990 (VhdiInitializeBootDisk.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     ZwDeviceIoControlFile @ 0x1403FA660 (ZwDeviceIoControlFile.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

ULONG_PTR __fastcall VhdiQueryVolumeVhdFilePath(HANDLE FileHandle)
{
  ULONG OutputBufferLength; // edi
  PVOID OutputBuffer; // rax
  ULONG_PTR v5; // rbx
  NTSTATUS v6; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  if ( !FileHandle )
    return 0LL;
  for ( OutputBufferLength = 520; ; OutputBufferLength *= 2 )
  {
    OutputBuffer = ExAllocatePoolWithTag(NonPagedPoolNx, OutputBufferLength, 0x42646856u);
    v5 = (ULONG_PTR)OutputBuffer;
    if ( !OutputBuffer )
      break;
    v6 = ZwDeviceIoControlFile(
           FileHandle,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           0x2D5928u,
           0LL,
           0,
           OutputBuffer,
           OutputBufferLength);
    if ( v6 != -1073741789 )
      goto LABEL_8;
    ExFreeHeapPool(v5);
  }
  v6 = -1073741801;
LABEL_8:
  if ( v6 < 0 )
  {
    if ( v5 )
    {
      ExFreeHeapPool(v5);
      return 0LL;
    }
  }
  return v5;
}
