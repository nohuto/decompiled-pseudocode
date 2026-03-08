/*
 * XREFs of VhdiVerifyBootDisk @ 0x140A70CE0
 * Callers:
 *     IopCreateArcName @ 0x14086D7D8 (IopCreateArcName.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x14024FE00 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

bool __fastcall VhdiVerifyBootDisk(PDEVICE_OBJECT DeviceObject)
{
  bool v1; // bl
  __int64 v3; // rax
  ULONG OutputBufferLength; // ebp
  void *OutputBuffer; // rdi
  IRP *v6; // rax
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v1 = 0;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( DeviceObject )
  {
    if ( NtVhdBootFile )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( *(_WORD *)(NtVhdBootFile + 2 * v3) );
      OutputBufferLength = 2 * v3 + 2;
      OutputBuffer = (void *)ExAllocatePool2(64LL, OutputBufferLength, 1113876566LL);
      if ( OutputBuffer )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v6 = IoBuildDeviceIoControlRequest(
               0x2D5928u,
               DeviceObject,
               0LL,
               0,
               OutputBuffer,
               OutputBufferLength,
               0,
               &Event,
               &IoStatusBlock);
        if ( v6 )
        {
          Status = IofCallDriver(DeviceObject, v6);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          if ( Status >= 0 )
            v1 = wcsicmp((const wchar_t *)OutputBuffer, (const wchar_t *)(NtVhdBootFile + 2)) == 0;
        }
        ExFreePoolWithTag(OutputBuffer, 0x42646856u);
      }
    }
  }
  return v1;
}
