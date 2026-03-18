/*
 * XREFs of HalpQueryAcpiWakeAlarmSystemPowerState @ 0x14093508C
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A88510 (HaliQuerySystemInformation.c)
 * Callees:
 *     IofCallDriver @ 0x14022EF10 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x140251430 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     HalpGetDynamicDevicePointer @ 0x140933974 (HalpGetDynamicDevicePointer.c)
 */

__int64 __fastcall HalpQueryAcpiWakeAlarmSystemPowerState(PLARGE_INTEGER Timeout)
{
  unsigned int Status; // ebx
  IRP *v3; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp+10h] BYREF

  DeviceObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( (int)HalpGetDynamicDevicePointer((__int64)Timeout, &DeviceObject) >= 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v3 = IoBuildDeviceIoControlRequest(0x294218u, DeviceObject, 0LL, 0, Timeout, 4u, 0, &Event, &IoStatusBlock);
    if ( v3 )
    {
      Status = IofCallDriver(DeviceObject, v3);
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
  else
  {
    Status = -1073741823;
  }
  if ( DeviceObject )
    ObfDereferenceObject(DeviceObject);
  return Status;
}
