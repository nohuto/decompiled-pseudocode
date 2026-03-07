void __fastcall FxPkgPnp::PowerPolicyUpdateSystemWakeSource(FxPkgPnp *this, FxIrp *Irp)
{
  const void *_a1; // rax
  __int64 v5; // r8

  this->m_PowerPolicyMachine.m_Owner->m_SystemWakeSource = PoGetSystemWake(Irp->m_Irp);
  if ( this->m_PowerPolicyMachine.m_Owner->m_SystemWakeSource )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqq(
      this->m_Globals,
      4u,
      0xCu,
      0xAu,
      (const _GUID *)&WPP_PowerPolicyStateMachineKM_cpp_Traceguids,
      _a1,
      *(const void **)(v5 + 144),
      Irp->m_Irp);
  }
}
