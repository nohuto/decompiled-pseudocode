__int64 __fastcall USBD_SyncCompletionRoutine(_DEVICE_OBJECT *DeviceObject, _IRP *Irp, _KEVENT *Context)
{
  KeSetEvent(Context, 0, 0);
  return 3221225494LL;
}
