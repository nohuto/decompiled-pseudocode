/*
 * XREFs of StopIdleWorker @ 0x1C0031584
 * Callers:
 *     imp_WdfDeviceStopIdleActual @ 0x1C0033920 (imp_WdfDeviceStopIdleActual.c)
 *     imp_WdfDeviceStopIdleNoTrack @ 0x1C0033950 (imp_WdfDeviceStopIdleNoTrack.c)
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0008998 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 */

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
