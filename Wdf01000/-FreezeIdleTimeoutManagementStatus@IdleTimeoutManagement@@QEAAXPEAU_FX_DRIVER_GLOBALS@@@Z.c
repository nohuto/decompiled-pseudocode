void __fastcall IdleTimeoutManagement::FreezeIdleTimeoutManagementStatus(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals)
{
  volatile int m_IdleTimeoutStatus; // r8d
  int v4; // ebx
  void (__fastcall *ComponentIdleConditionCallback)(void *, unsigned int); // rbp
  const void **v6; // rdi
  const void *_a1; // rax
  const void *ObjectHandleUnchecked; // rax

  m_IdleTimeoutStatus = this->m_IdleTimeoutStatus;
  v4 = this->m_IdleTimeoutStatus | 1;
  ComponentIdleConditionCallback = this[-2].m_PoxSettings[1].ComponentIdleConditionCallback;
  v6 = (const void **)((char *)ComponentIdleConditionCallback + 144);
  if ( _InterlockedExchange(&this->m_IdleTimeoutStatus, v4) != m_IdleTimeoutStatus )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)ComponentIdleConditionCallback);
    WPP_IFR_SF_qq(DriverGlobals, 3u, 0xCu, 0xCu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, *v6);
    FxVerifierDbgBreakPoint(DriverGlobals);
  }
  if ( (v4 & 4) != 0 && (v4 & 2) == 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)ComponentIdleConditionCallback);
    WPP_IFR_SF_qq(DriverGlobals, 3u, 0xCu, 0xDu, WPP_PowerPolicyStateMachine_cpp_Traceguids, ObjectHandleUnchecked, *v6);
    FxVerifierDbgBreakPoint(DriverGlobals);
  }
}
