/*
 * XREFs of ?SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z @ 0x1C0085300
 * Callers:
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1C00854C0 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 *     ?_SleepStudyWnfCallback@FxPkgPnp@@SAJPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAX@Z @ 0x1C0085AE0 (-_SleepStudyWnfCallback@FxPkgPnp@@SAJPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1C00856B8 (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 */

void __fastcall FxPkgPnp::SleepStudyEvaluateDripsConstraint(FxPkgPnp *this, unsigned __int8 IgnoreWnfQueryFailure)
{
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  NTSTATUS _a2; // edi
  const void *_a1; // rax
  FxDeviceBase *m_DeviceBase; // rax
  const void *v8; // rax
  unsigned int v9; // edx
  const void *ObjectHandleUnchecked; // rax
  int initLib[10]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 constraintsRegistered; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 isDripsConstraint; // [rsp+80h] [rbp+18h] BYREF
  unsigned int bufferSize; // [rsp+88h] [rbp+20h] BYREF

  m_SleepStudy = this->m_SleepStudy;
  initLib[0] = 0;
  constraintsRegistered = 0;
  bufferSize = 1;
  _a2 = ExQueryWnfStateData(m_SleepStudy->WnfContext->Handle, initLib, &constraintsRegistered, &bufferSize);
  if ( _a2 < 0 )
  {
    if ( IgnoreWnfQueryFailure == 1 )
      return;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxPkgPnpKM_cpp_Traceguids, _a1, _a2);
$Done_63:
    if ( _a2 >= 0 )
      return;
    goto LABEL_16;
  }
  if ( constraintsRegistered )
  {
    m_DeviceBase = this->m_DeviceBase;
    isDripsConstraint = 0;
    _a2 = ZwPowerInformation(
            QueryPotentialDripsConstraint,
            m_DeviceBase->m_PhysicalDevice.m_DeviceObject,
            0x150u,
            &isDripsConstraint,
            1u);
    if ( _a2 < 0 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x14u, WPP_FxPkgPnpKM_cpp_Traceguids, ObjectHandleUnchecked, _a2);
    }
    else if ( isDripsConstraint )
    {
      if ( !_InterlockedCompareExchange(&this->m_SleepStudy->LibInitializing, 1, 0) )
      {
        if ( (int)SleepstudyHelper_Initialize(this->m_SleepStudy, this->m_DeviceBase) < 0 )
        {
          v8 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
          WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x15u, WPP_FxPkgPnpKM_cpp_Traceguids, v8, v9);
        }
        _a2 = FxPkgPnp::SleepStudyRegisterBlockingComponents(this);
      }
      goto $Done_63;
    }
    _a2 = -1073741637;
    goto $Done_63;
  }
  if ( IgnoreWnfQueryFailure == 1 )
    goto $Done_63;
LABEL_16:
  this->m_SleepStudyTrackReferences = 0;
}
