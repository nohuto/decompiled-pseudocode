/*
 * XREFs of VhdiQueryVolumeVhdFilePath @ 0x140A951A8
 * Callers:
 *     VhdiInitializeBootDisk @ 0x140A94990 (VhdiInitializeBootDisk.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     ZwDeviceIoControlFile @ 0x1403FA480 (ZwDeviceIoControlFile.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

ULONG_PTR __fastcall VhdiQueryVolumeVhdFilePath(HANDLE FileHandle)
{
  ULONG OutputBufferLength; // edi
  PVOID OutputBuffer; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9
  ULONG_PTR v8; // rbx
  NTSTATUS v9; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  if ( !FileHandle )
    return 0LL;
  for ( OutputBufferLength = 520; ; OutputBufferLength *= 2 )
  {
    OutputBuffer = ExAllocatePoolWithTag(NonPagedPoolNx, OutputBufferLength, 0x42646856u);
    v8 = (ULONG_PTR)OutputBuffer;
    if ( !OutputBuffer )
      break;
    v9 = ZwDeviceIoControlFile(
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
    if ( v9 != -1073741789 )
      goto LABEL_8;
    ExFreeHeapPool(v8, v5, v6, v7);
  }
  v9 = -1073741801;
LABEL_8:
  if ( v9 < 0 )
  {
    if ( v8 )
    {
      ExFreeHeapPool(v8, v5, v6, v7);
      return 0LL;
    }
  }
  return v8;
}
