__int64 __fastcall FxPkgPdo::DispatchDeviceSetPower(FxPkgPdo *this, FxIrp *Irp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  int v3; // ebx
  const void *_a2; // rax
  __int64 v7; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxPowerPolicyOwnerSettings *v9; // rax

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v3 = 0;
  if ( m_Owner )
  {
    if ( !m_Owner->m_RequestedPowerUpIrp && !m_Owner->m_RequestedPowerDownIrp )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqq(
        this->m_Globals,
        2u,
        0xCu,
        0xAu,
        WPP_PdoPower_cpp_Traceguids,
        Irp->m_Irp,
        _a2,
        *(const void **)(v7 + 144));
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerifierOn )
        FxVerifierBugCheckWorker(
          m_Globals,
          WDF_POWER_MULTIPLE_PPO,
          (ULONG_PTR)this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
          (ULONG_PTR)Irp->m_Irp);
    }
    v9 = this->m_PowerPolicyMachine.m_Owner;
    if ( v9->m_RequestedPowerUpIrp )
      v9->m_RequestedPowerUpIrp = 0;
    else
      v9->m_RequestedPowerDownIrp = 0;
  }
  FxPkgPnp::SetPendingDevicePowerIrp(this, Irp);
  LOBYTE(v3) = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1;
  FxPkgPnp::PowerProcessEvent(this, v3 + 1, 0);
  return 259LL;
}
