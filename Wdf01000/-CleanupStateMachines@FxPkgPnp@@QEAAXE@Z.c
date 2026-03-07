void __fastcall FxPkgPnp::CleanupStateMachines(FxPkgPnp *this, unsigned __int8 CleanupPnp)
{
  const void *_a1; // rax
  __int64 v5; // rdx
  const void *ObjectHandleUnchecked; // rax
  __int64 v7; // rdx
  const void *v8; // rax
  __int64 v9; // rdx
  FxDevicePwrRequirementMachine *m_DevicePowerRequirementMachine; // rcx
  const void *v11; // rax
  __int64 v12; // r10
  FxCREvent eventOnStack; // [rsp+40h] [rbp-20h] BYREF

  FxCREvent::FxCREvent(&eventOnStack, CleanupPnp);
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  if ( CleanupPnp && !FxEventQueue::SetFinished(&this->m_PnpMachine, &eventOnStack) )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qq(
      this->m_Globals,
      4u,
      0xCu,
      0x25u,
      (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      _a1,
      *(const void **)(v5 + 144));
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  KeClearEvent(&eventOnStack.m_Event.m_Event);
  if ( !FxEventQueue::SetFinished(&this->m_PowerPolicyMachine, &eventOnStack) )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qq(
      this->m_Globals,
      4u,
      0xCu,
      0x26u,
      (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      ObjectHandleUnchecked,
      *(const void **)(v7 + 144));
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  KeClearEvent(&eventOnStack.m_Event.m_Event);
  if ( !FxEventQueue::SetFinished(&this->m_PowerMachine, &eventOnStack) )
  {
    v8 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qq(
      this->m_Globals,
      4u,
      0xCu,
      0x27u,
      (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      v8,
      *(const void **)(v9 + 144));
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( this->m_PowerPolicyMachine.m_Owner )
  {
    KeClearEvent(&eventOnStack.m_Event.m_Event);
    m_DevicePowerRequirementMachine = this->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DevicePowerRequirementMachine;
    if ( m_DevicePowerRequirementMachine && !FxEventQueue::SetFinished(m_DevicePowerRequirementMachine, &eventOnStack) )
    {
      v11 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qq(
        this->m_Globals,
        4u,
        0xCu,
        0x28u,
        (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
        v11,
        *(const void **)(v12 + 144));
      KeEnterCriticalRegion();
      KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
      KeLeaveCriticalRegion();
    }
    FxPowerPolicyOwnerSettings::CleanupPowerCallback(this->m_PowerPolicyMachine.m_Owner);
  }
  FxPkgPnp::ReleasePowerThread(this);
  this->ReleaseReenumerationInterface(this);
}
