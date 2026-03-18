/*
 * XREFs of VhdiQueryVolumeVhdFilePath @ 0x140B54FF8
 * Callers:
 *     VhdiInitializeBootDisk @ 0x140B54800 (VhdiInitializeBootDisk.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     ZwDeviceIoControlFile @ 0x14041B840 (ZwDeviceIoControlFile.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

ULONG_PTR __fastcall VhdiQueryVolumeVhdFilePath(HANDLE FileHandle)
{
  ULONG OutputBufferLength; // edi
  void *OutputBuffer; // rax
  ULONG_PTR v5; // rbx
  NTSTATUS v6; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  if ( !FileHandle )
    return 0LL;
  for ( OutputBufferLength = 520; ; OutputBufferLength *= 2 )
  {
    OutputBuffer = (void *)ExAllocatePool2(64LL, OutputBufferLength, 0x42646856u);
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
    {
      if ( v6 < 0 )
      {
        ExFreeHeapPool(v5);
        return 0LL;
      }
      return v5;
    }
    ExFreeHeapPool(v5);
  }
  return v5;
}
