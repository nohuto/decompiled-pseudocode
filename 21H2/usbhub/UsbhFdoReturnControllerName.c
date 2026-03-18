/*
 * XREFs of UsbhFdoReturnControllerName @ 0x1C003036C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0017C10 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C000EE64 (UsbhDecPdoIoCount.c)
 *     UsbhGetControllerName @ 0x1C002AE68 (UsbhGetControllerName.c)
 */

__int64 __fastcall UsbhFdoReturnControllerName(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  int ControllerName; // eax
  unsigned int v6; // ebx

  ControllerName = UsbhGetControllerName(
                     a1,
                     a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext,
                     a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options);
  a3->IoStatus.Status = ControllerName;
  v6 = ControllerName;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v6;
}
