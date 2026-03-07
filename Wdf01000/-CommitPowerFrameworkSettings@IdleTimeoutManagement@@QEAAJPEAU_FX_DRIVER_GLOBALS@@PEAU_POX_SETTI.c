__int64 __fastcall IdleTimeoutManagement::CommitPowerFrameworkSettings(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _POX_SETTINGS *PoxSettings)
{
  char v3; // bp
  void (__fastcall *ComponentIdleConditionCallback)(void *, unsigned int); // r10
  unsigned int v7; // ebx
  const void *_a1; // rax
  int _a3; // edx
  __int64 v10; // r10
  unsigned __int16 v11; // r9
  IdleTimeoutManagement::IdleTimeoutStatusUpdateResult updated; // eax
  FxObject *v13; // r10
  __int32 v14; // eax
  __int32 v15; // eax

  v3 = 0;
  ComponentIdleConditionCallback = this[-2].m_PoxSettings[1].ComponentIdleConditionCallback;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_PoxSettings, (signed __int64)PoxSettings, 0LL) )
  {
    v7 = -1073741808;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)ComponentIdleConditionCallback);
    v11 = 14;
LABEL_3:
    WPP_IFR_SF_qid(
      DriverGlobals,
      2u,
      0xCu,
      v11,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      *(_QWORD *)(v10 + 144),
      _a3);
    FxVerifierDbgBreakPoint(DriverGlobals);
    goto LABEL_11;
  }
  v3 = 1;
  updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(this, IdleTimeoutPoxSettingsSpecified);
  if ( updated == IdleTimeoutStatusFlagsUpdated )
    return 0;
  v14 = updated - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
    {
      v7 = -1073741808;
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v13);
      v11 = 15;
      goto LABEL_3;
    }
    if ( v15 == 1 )
    {
      v7 = -1073741808;
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v13);
      v11 = 16;
      goto LABEL_3;
    }
  }
  v7 = -1073741595;
LABEL_11:
  if ( v3 )
    this->m_PoxSettings = 0LL;
  return v7;
}
