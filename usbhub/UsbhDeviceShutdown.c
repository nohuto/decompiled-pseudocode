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
