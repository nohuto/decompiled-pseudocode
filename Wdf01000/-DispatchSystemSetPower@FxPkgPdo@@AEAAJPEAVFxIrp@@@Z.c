__int64 __fastcall FxPkgPdo::DispatchSystemSetPower(FxPkgPdo *this, FxIrp *Irp)
{
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxIrp *v6; // rdx
  unsigned __int8 v7; // r8
  KIRQL v8; // bl
  unsigned __int8 v9; // r8

  m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  this->m_SystemPowerState = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart;
  PoSetPowerState(
    m_DeviceObject,
    SystemPowerState,
    Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Power.State);
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v6 = Irp;
  if ( !m_Owner )
    return FxPkgPnp::CompletePowerRequest(this, v6, 0);
  FxDevicePowerIrpTracker::SaveStateFromSystemPowerIrp(&m_Owner->m_DevicePowerIrpTracker, Irp);
  if ( this->m_SystemPowerState == 1 )
  {
    v8 = KfRaiseIrql(2u);
    FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolS0, v9);
    KeLowerIrql(v8);
    v6 = Irp;
    return FxPkgPnp::CompletePowerRequest(this, v6, 0);
  }
  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  this->m_PendingSystemPowerIrp = Irp->m_Irp;
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolSx, v7);
  return 259LL;
}
