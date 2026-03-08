/*
 * XREFs of HalpQueryAcpiWakeAlarmSystemPowerState @ 0x14093207C
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A85470 (HaliQuerySystemInformation.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x14024FE00 (IoBuildDeviceIoControlRequest.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     HalpGetDynamicDevicePointer @ 0x140930A44 (HalpGetDynamicDevicePointer.c)
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
