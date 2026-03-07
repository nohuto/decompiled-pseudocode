NTSTATUS __fastcall UsbhFdoPowerWorker(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  return UsbhFdoPowerWorkerInternal(a1, a2);
}
