void *__fastcall VhdiQueryVolumeVhdFilePath(HANDLE FileHandle)
{
  ULONG OutputBufferLength; // edi
  void *OutputBuffer; // rax
  void *v5; // rbx
  NTSTATUS v6; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  if ( !FileHandle )
    return 0LL;
  for ( OutputBufferLength = 520; ; OutputBufferLength *= 2 )
  {
    OutputBuffer = (void *)ExAllocatePool2(64LL, OutputBufferLength, 0x42646856u);
    v5 = OutputBuffer;
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
        ExFreePoolWithTag(v5, 0x42646856u);
        return 0LL;
      }
      return v5;
    }
    ExFreePoolWithTag(v5, 0x42646856u);
  }
  return v5;
}
