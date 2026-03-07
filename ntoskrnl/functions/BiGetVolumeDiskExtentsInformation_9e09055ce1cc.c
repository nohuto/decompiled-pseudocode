__int64 __fastcall BiGetVolumeDiskExtentsInformation(HANDLE FileHandle, _QWORD *a2)
{
  ULONG OutputBufferLength; // esi
  unsigned int i; // ebp
  _DWORD *OutputBuffer; // rax
  _DWORD *v7; // rdi
  NTSTATUS v8; // eax
  int v9; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF

  IoStatusBlock = 0LL;
  OutputBufferLength = 32;
  for ( i = 0; i < 2; ++i )
  {
    OutputBuffer = (_DWORD *)ExAllocatePool2(258LL, OutputBufferLength, 1262764866LL);
    v7 = OutputBuffer;
    if ( !OutputBuffer )
      return (unsigned int)-1073741670;
    v8 = ZwDeviceIoControlFile(
           FileHandle,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           0x560000u,
           0LL,
           0,
           OutputBuffer,
           OutputBufferLength);
    v9 = v8;
    if ( v8 != -1073741789 && v8 != -2147483643 )
      break;
    OutputBufferLength += 24 * *v7;
    ExFreePoolWithTag(v7, 0x4B444342u);
    v7 = 0LL;
  }
  if ( v9 < 0 )
  {
    if ( v7 )
      ExFreePoolWithTag(v7, 0x4B444342u);
  }
  else
  {
    *a2 = v7;
  }
  return (unsigned int)v9;
}
