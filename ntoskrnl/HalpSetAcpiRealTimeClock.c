/*
 * XREFs of HalpSetAcpiRealTimeClock @ 0x140930098
 * Callers:
 *     HalSetRealTimeClock @ 0x1404FCC40 (HalSetRealTimeClock.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x14024FE00 (IoBuildDeviceIoControlRequest.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     HalpGetDynamicDevicePointer @ 0x140930A44 (HalpGetDynamicDevicePointer.c)
 */

__int64 __fastcall HalpSetAcpiRealTimeClock(PVOID InputBuffer)
{
  NTSTATUS DynamicDevicePointer; // ebx
  IRP *v3; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp+10h] BYREF

  DeviceObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  DynamicDevicePointer = HalpGetDynamicDevicePointer(InputBuffer, &DeviceObject);
  if ( DynamicDevicePointer >= 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v3 = IoBuildDeviceIoControlRequest(0x298214u, DeviceObject, InputBuffer, 0x10u, 0LL, 0, 0, &Event, &IoStatusBlock);
    if ( v3 )
    {
      DynamicDevicePointer = IofCallDriver(DeviceObject, v3);
      if ( DynamicDevicePointer == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        DynamicDevicePointer = IoStatusBlock.Status;
      }
    }
    else
    {
      DynamicDevicePointer = -1073741670;
    }
  }
  if ( DeviceObject )
    ObfDereferenceObject(DeviceObject);
  return (unsigned int)DynamicDevicePointer;
}
