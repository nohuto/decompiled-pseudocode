__int64 __fastcall FxPkgPnp::_PowerPolicyUsbSelectiveSuspendCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxPkgPnp *Context)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  unsigned __int8 v5; // r8

  m_Owner = Context->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
    _InterlockedCompareExchange((volatile signed __int32 *)&m_Owner->m_DevicePowerIrpTracker.m_D0IrpReasonHint, 14, 5);
  WPP_IFR_SF_qqqd(
    Context->m_Globals,
    4u,
    0xCu,
    0x32u,
    WPP_PowerPolicyStateMachine_cpp_Traceguids,
    Context->m_DeviceBase,
    Context->m_DeviceBase->m_DeviceObject.m_DeviceObject,
    (__int64)Irp,
    Irp->IoStatus.Status);
  FxPkgPnp::PowerPolicyProcessEvent(Context, PwrPolUsbSelectiveSuspendCompleted, v5);
  return 3221225494LL;
}
