void __fastcall FxPkgPnp::SleepStudyEvaluateDripsConstraint(FxPkgPnp *this, unsigned __int8 IgnoreWnfQueryFailure)
{
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  const void *ObjectHandleUnchecked; // rax
  int v6; // edx
  unsigned __int16 v7; // r9
  FxDeviceBase *m_DeviceBase; // rax
  NTSTATUS v9; // edx
  const void *_a1; // rax
  int _a2; // edx
  int initLib[10]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 constraintsRegistered; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 isDripsConstraint; // [rsp+80h] [rbp+18h] BYREF
  unsigned int bufferSize; // [rsp+88h] [rbp+20h] BYREF

  m_SleepStudy = this->m_SleepStudy;
  initLib[0] = 0;
  constraintsRegistered = 0;
  bufferSize = 1;
  if ( (int)ExQueryWnfStateData(m_SleepStudy->WnfContext->Handle, initLib, &constraintsRegistered, &bufferSize) < 0 )
  {
    if ( IgnoreWnfQueryFailure == 1 )
      return;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v7 = 19;
    goto LABEL_16;
  }
  if ( !constraintsRegistered )
  {
    if ( IgnoreWnfQueryFailure == 1 )
      return;
    goto LABEL_17;
  }
  m_DeviceBase = this->m_DeviceBase;
  isDripsConstraint = 0;
  v9 = ZwPowerInformation(
         QueryPotentialDripsConstraint,
         m_DeviceBase->m_PhysicalDevice.m_DeviceObject,
         0x150u,
         &isDripsConstraint,
         1u);
  if ( v9 < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v7 = 20;
LABEL_16:
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, v7, WPP_FxPkgPnpKM_cpp_Traceguids, ObjectHandleUnchecked, v6);
LABEL_17:
    this->m_SleepStudyTrackReferences = 0;
    return;
  }
  if ( !isDripsConstraint )
    goto LABEL_17;
  if ( !_InterlockedCompareExchange(&this->m_SleepStudy->LibInitializing, 1, 0) )
  {
    if ( SleepstudyHelper_Initialize(&this->m_SleepStudy->SleepStudyLibContext, this->m_DeviceBase) < 0 )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x15u, WPP_FxPkgPnpKM_cpp_Traceguids, _a1, _a2);
    }
    v9 = FxPkgPnp::SleepStudyRegisterBlockingComponents(this);
  }
  if ( v9 < 0 )
    goto LABEL_17;
}
