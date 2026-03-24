/*
 * XREFs of SmKmSendDeviceControl @ 0x14092BEB4
 * Callers:
 *     SmKmVolumeQueryUniqueId @ 0x14092D0EC (SmKmVolumeQueryUniqueId.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x14022BAA0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 */

NTSTATUS __fastcall SmKmSendDeviceControl(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        __int64 a3,
        __int64 a4,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  IRP *v7; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v7 = IoBuildDeviceIoControlRequest(0x4D0000u, a2, 0LL, 0, OutputBuffer, OutputBufferLength, 0, &Event, &IoStatusBlock);
  if ( !v7 )
    return -1073741670;
  result = IofCallDriver(a2, v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
