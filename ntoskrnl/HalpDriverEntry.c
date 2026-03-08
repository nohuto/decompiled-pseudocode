/*
 * XREFs of HalpDriverEntry @ 0x1408025A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAddDevice @ 0x140802640 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 */

NTSTATUS __fastcall HalpDriverEntry(PDRIVER_OBJECT DriverObject)
{
  PDRIVER_EXTENSION DriverExtension; // rax
  NTSTATUS result; // eax
  PDEVICE_OBJECT TargetDevice; // [rsp+50h] [rbp+8h] BYREF

  DriverExtension = DriverObject->DriverExtension;
  TargetDevice = 0LL;
  HalpDriverObject = DriverObject;
  DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)HalpAddDevice;
  DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)HalpDispatchPnp;
  DriverObject->MajorFunction[22] = (PDRIVER_DISPATCH)&HalpDispatchPower;
  DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)&HalpDispatchWmi;
  result = IoReportDetectedDevice(
             DriverObject,
             InterfaceTypeUndefined,
             0xFFFFFFFF,
             0xFFFFFFFF,
             0LL,
             0LL,
             0,
             &TargetDevice);
  if ( result >= 0 )
  {
    HalpAddDevice(DriverObject, TargetDevice);
    return 0;
  }
  return result;
}
