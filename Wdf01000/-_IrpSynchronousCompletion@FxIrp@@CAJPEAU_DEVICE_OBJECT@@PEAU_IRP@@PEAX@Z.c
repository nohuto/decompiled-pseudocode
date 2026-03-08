/*
 * XREFs of ?_IrpSynchronousCompletion@FxIrp@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C002BAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxIrp::_IrpSynchronousCompletion(_DEVICE_OBJECT *DeviceObject, _IRP *OriginalIrp, _KEVENT *Context)
{
  if ( OriginalIrp->PendingReturned )
    KeSetEvent(Context, 0, 0);
  return 3221225494LL;
}
