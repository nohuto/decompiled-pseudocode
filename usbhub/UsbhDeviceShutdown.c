/*
 * XREFs of UsbhDeviceShutdown @ 0x1C00427C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhUxdShutdown @ 0x1C005B1D0 (UsbhUxdShutdown.c)
 */

__int64 __fastcall UsbhDeviceShutdown(__int64 a1, IRP *a2)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = UsbhUxdShutdown();
  a2->IoStatus.Status = v3;
  v4 = v3;
  IofCompleteRequest(a2, 0);
  return v4;
}
