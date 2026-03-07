__int64 __fastcall FxPkgPnp::AssignPowerFrameworkSettings(
        FxPkgPnp *this,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  _PO_FX_COMPONENT_V1 *Component; // rax
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  _PO_FX_COMPONENT_IDLE_STATE *v5; // r14
  int _a3; // ebx
  const void *_a1; // rax
  __int64 v10; // r8
  unsigned __int16 v11; // r9
  __int64 Pool2; // rax
  const void *ObjectHandleUnchecked; // rax
  __int64 v14; // rdx
  unsigned __int16 v15; // r9
  _POX_SETTINGS *v16; // rbx
  _PO_FX_COMPONENT_V1 *v17; // rcx
  _PO_FX_COMPONENT_V1 *v18; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rsi

  Component = PowerFrameworkSettings->Component;
  LODWORD(v3) = 0;
  v4 = 0LL;
  v5 = 0LL;
  if ( Component )
  {
    v3 = 24LL * Component->IdleStateCount;
    if ( v3 > 0xFFFFFFFF )
    {
      _a3 = -1073741675;
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      v11 = 84;
      goto LABEL_5;
    }
    v4 = (unsigned int)(v3 + 32);
    if ( (unsigned int)v4 < (unsigned int)v3 )
    {
      _a3 = -1073741675;
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      v11 = 85;
LABEL_5:
      WPP_IFR_SF_qid(
        this->m_Globals,
        2u,
        0xCu,
        v11,
        (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
        _a1,
        *(_QWORD *)(v10 + 144),
        -1073741675);
      goto $exit_17;
    }
  }
  if ( (int)v4 + 64 < (unsigned int)v4 )
  {
    _a3 = -1073741675;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v15 = 86;
    goto LABEL_15;
  }
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(v4 + 64), this->m_Globals->Tag);
  v5 = (_PO_FX_COMPONENT_IDLE_STATE *)Pool2;
  if ( !Pool2 )
  {
    _a3 = -1073741670;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v15 = 87;
LABEL_15:
    WPP_IFR_SF_qid(
      this->m_Globals,
      2u,
      0xCu,
      v15,
      (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      ObjectHandleUnchecked,
      *(_QWORD *)(v14 + 144),
      _a3);
    goto $exit_17;
  }
  v16 = (_POX_SETTINGS *)(Pool2 + v4);
  v16->EvtDeviceWdmPostPoFxRegisterDevice = PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice;
  v16->EvtDeviceWdmPrePoFxUnregisterDevice = PowerFrameworkSettings->EvtDeviceWdmPrePoFxUnregisterDevice;
  v16->Component = PowerFrameworkSettings->Component;
  v16->ComponentActiveConditionCallback = PowerFrameworkSettings->ComponentActiveConditionCallback;
  v16->ComponentIdleConditionCallback = PowerFrameworkSettings->ComponentIdleConditionCallback;
  v16->ComponentIdleStateCallback = PowerFrameworkSettings->ComponentIdleStateCallback;
  v16->PowerControlCallback = PowerFrameworkSettings->PowerControlCallback;
  v16->PoFxDeviceContext = PowerFrameworkSettings->PoFxDeviceContext;
  if ( PowerFrameworkSettings->Component )
  {
    v17 = (_PO_FX_COMPONENT_V1 *)((unsigned int)v3 + Pool2);
    v16->Component = v17;
    v18 = PowerFrameworkSettings->Component;
    v17->Id = v18->Id;
    *(_OWORD *)&v17->IdleStateCount = *(_OWORD *)&v18->IdleStateCount;
    v16->Component->IdleStates = v5;
    memmove(v16->Component->IdleStates, PowerFrameworkSettings->Component->IdleStates, (unsigned int)v3);
  }
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  _a3 = IdleTimeoutManagement::CommitPowerFrameworkSettings(
          &m_Owner->m_IdleSettings.m_TimeoutMgmt,
          this->m_Globals,
          v16);
  if ( _a3 >= 0 )
  {
    _a3 = 0;
    m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsSupported = PowerFrameworkSettings->DirectedPoFxEnabled != WdfFalse;
    m_Owner->m_IdleSettings.m_TimeoutMgmt.m_PoFxDeviceFlags = PowerFrameworkSettings->PoFxDeviceFlags;
    return (unsigned int)_a3;
  }
$exit_17:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)_a3;
}
