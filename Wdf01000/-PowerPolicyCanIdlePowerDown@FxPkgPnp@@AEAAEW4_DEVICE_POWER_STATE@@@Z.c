char __fastcall FxPkgPnp::PowerPolicyCanIdlePowerDown(FxPkgPnp *this, _FX_DRIVER_GLOBALS *DxState)
{
  _DEVICE_POWER_STATE v3; // esi
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  char v6; // bl
  const void *_a1; // rax
  __int64 v8; // rdx
  int _a3; // r8d
  FxEnumerationInfo *v10; // rcx

  v3 = (int)DxState;
  m_EnumInfo = this->m_EnumInfo;
  if ( !m_EnumInfo )
  {
    v6 = 1;
LABEL_8:
    if ( FxPkgPnp::PowerPolicySendDevicePowerRequest(this, v3, NoRetry, RequestDxForIdleOut) < 0 )
    {
      FxPkgPnp::PowerPolicyChildrenCanPowerUp(this);
      return 0;
    }
    return v6;
  }
  FxWaitLockInternal::AcquireLock(&m_EnumInfo->m_PowerStateLock, DxState, 0LL);
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner->m_ChildrenPoweredOnCount )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qid(
      this->m_Globals,
      4u,
      0xCu,
      0x34u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      *(_QWORD *)(v8 + 144),
      _a3);
    v6 = 0;
  }
  else
  {
    m_Owner->m_ChildrenCanPowerUp = 0;
    v6 = 1;
  }
  v10 = this->m_EnumInfo;
  v10->m_PowerStateLock.m_OwningThread = 0LL;
  KeSetEvent(&v10->m_PowerStateLock.m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  if ( v6 )
    goto LABEL_8;
  return v6;
}
