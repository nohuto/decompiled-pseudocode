/*
 * XREFs of HalpQueryAcpiRealTimeClock @ 0x14092FF88
 * Callers:
 *     HalQueryRealTimeClock @ 0x1402D0F30 (HalQueryRealTimeClock.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140930198 (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x14024FE00 (IoBuildDeviceIoControlRequest.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     HalpGetDynamicDevicePointer @ 0x140930A44 (HalpGetDynamicDevicePointer.c)
 */

__int64 __fastcall HalpQueryAcpiRealTimeClock(PLARGE_INTEGER Timeout)
{
  int DynamicDevicePointer; // eax
  unsigned int Status; // ebx
  IRP *v4; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp+10h] BYREF

  DeviceObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  DynamicDevicePointer = HalpGetDynamicDevicePointer(Timeout, &DeviceObject);
  Status = DynamicDevicePointer;
  if ( DynamicDevicePointer == -1073741275 )
  {
    Status = -1073741822;
  }
  else if ( DynamicDevicePointer >= 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v4 = IoBuildDeviceIoControlRequest(0x294210u, DeviceObject, 0LL, 0, Timeout, 0x10u, 0, &Event, &IoStatusBlock);
    if ( v4 )
    {
      Status = IofCallDriver(DeviceObject, v4);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( DeviceObject )
    ObfDereferenceObject(DeviceObject);
  return Status;
}
