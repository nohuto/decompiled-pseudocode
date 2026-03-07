__int64 __fastcall FxIrp::_IrpSynchronousCompletion(_DEVICE_OBJECT *DeviceObject, _IRP *OriginalIrp, _KEVENT *Context)
{
  if ( OriginalIrp->PendingReturned )
    KeSetEvent(Context, 0, 0);
  return 3221225494LL;
}
