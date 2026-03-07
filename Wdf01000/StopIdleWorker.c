__int64 __fastcall StopIdleWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        unsigned __int8 WaitForD0,
        void *Tag,
        int Line,
        char *File)
{
  int _a2; // ebp
  FxDevice *v9; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  int v13; // ebx
  unsigned int _a3; // eax
  FxPkgPnp *m_PkgPnp; // rcx
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  SS_COMPONENT__ *ComponentPowerRef; // rcx
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  _a2 = WaitForD0;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  v9 = pDevice;
  m_Globals = pDevice->m_Globals;
  if ( (_BYTE)_a2 )
  {
    result = FxVerifierCheckIrqlLevel(pDevice->m_Globals, 0);
    if ( (int)result < 0 )
      return result;
    v9 = pDevice;
  }
  m_Owner = v9->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)&m_Owner->m_DevicePowerIrpTracker.m_D0IrpReasonHint, 12, 5);
    _a3 = FxPowerIdleMachine::PowerReferenceWorker(
            &pDevice->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine,
            _a2,
            FxPowerReferenceDefault,
            Tag,
            Line,
            File);
    v13 = _a3;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qdd(m_Globals, 5u, 0x12u, 0x26u, WPP_FxDeviceApi_cpp_Traceguids, Device, _a2, _a3);
    if ( v13 >= 0 )
    {
      m_PkgPnp = pDevice->m_PkgPnp;
      if ( m_PkgPnp->m_SleepStudyTrackReferences == 1
        && _InterlockedIncrement(&m_PkgPnp->m_SleepStudyPowerRefIoCount) == 1 )
      {
        m_SleepStudy = m_PkgPnp->m_SleepStudy;
        if ( m_SleepStudy )
        {
          ComponentPowerRef = m_SleepStudy->ComponentPowerRef;
          if ( ComponentPowerRef )
          {
            if ( SleepstudyHelperRoutineBlock.ComponentActive )
              SleepstudyHelperRoutineBlock.ComponentActive(ComponentPowerRef);
          }
        }
      }
    }
  }
  else
  {
    v13 = -1073741436;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x25u, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741436);
  }
  return (unsigned int)v13;
}
