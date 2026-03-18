/*
 * XREFs of ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000FE30
 * Callers:
 *     ?_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C000FE00 (-_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C001029C (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011910 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?SaveStateFromSystemPowerIrp@FxDevicePowerIrpTracker@@QEAAXPEAVFxIrp@@@Z @ 0x1C001D3EC (-SaveStateFromSystemPowerIrp@FxDevicePowerIrpTracker@@QEAAXPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPdo::DispatchSystemSetPower(FxPkgPdo *this, FxIrp *Irp)
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
  return 259;
}
