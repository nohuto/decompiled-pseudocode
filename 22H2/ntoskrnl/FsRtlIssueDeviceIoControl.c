/*
 * XREFs of FsRtlIssueDeviceIoControl @ 0x1406954F0
 * Callers:
 *     FsRtlVolumeDeviceToCorrelationId @ 0x140695060 (FsRtlVolumeDeviceToCorrelationId.c)
 *     FsRtlGetSectorSizeInformation @ 0x1406950F0 (FsRtlGetSectorSizeInformation.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x14022BAA0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 */

__int64 __fastcall FsRtlIssueDeviceIoControl(
        PDEVICE_OBJECT DeviceObject,
        ULONG IoControlCode,
        char a3,
        void *a4,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        ULONG_PTR *a8)
{
  PIRP v12; // rax
  NTSTATUS Status; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v12 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          DeviceObject,
          a4,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Object,
          &IoStatusBlock);
  if ( !v12 )
    return 3221225626LL;
  v12->Tail.Overlay.CurrentStackLocation[-1].Flags |= a3;
  Status = IofCallDriver(DeviceObject, v12);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( a8 )
      *a8 = IoStatusBlock.Information;
  }
  return (unsigned int)Status;
}
