__int64 __fastcall SendSynchronousIoControl(
        ULONG IoControlCode,
        struct _FILE_OBJECT *a2,
        struct _DEVICE_OBJECT *a3,
        void *a4,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        _DWORD *a8)
{
  PIRP v12; // rax
  __int64 result; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( a8 )
    *a8 = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v12 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          a3,
          a4,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v12 )
    return 3221225473LL;
  v12->Tail.Overlay.CurrentStackLocation[-1].FileObject = a2;
  if ( IofCallDriver(a3, v12) == 259 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  result = (unsigned int)IoStatusBlock.Status;
  if ( IoStatusBlock.Status >= 0 )
  {
    if ( a8 )
      *a8 = IoStatusBlock.Information;
  }
  return result;
}
