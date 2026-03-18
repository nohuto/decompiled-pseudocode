/*
 * XREFs of ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C0010DEC
 * Callers:
 *     ?RaiseDevicePower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0010D44 (-RaiseDevicePower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0080034 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0084370 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?PowerPolicySubmitUsbIdleNotification@FxPkgPnp@@IEAAXXZ @ 0x1C008C528 (-PowerPolicySubmitUsbIdleNotification@FxPkgPnp@@IEAAXXZ.c)
 *     ?ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z @ 0x1C008DBE8 (-ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIrp::SetCompletionRoutineEx(
        FxIrp *this,
        _DEVICE_OBJECT *DeviceObject,
        int (__fastcall *CompletionRoutine)(_DEVICE_OBJECT *, _IRP *, void *),
        void *Context)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx

  if ( IoSetCompletionRoutineEx(DeviceObject, this->m_Irp, CompletionRoutine, Context, 1u, 1u, 1u) < 0 )
  {
    CurrentStackLocation = this->m_Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = CompletionRoutine;
    CurrentStackLocation[-1].Context = Context;
    CurrentStackLocation[-1].Control = -32;
  }
}
