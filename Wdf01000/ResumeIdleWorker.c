/*
 * XREFs of ResumeIdleWorker @ 0x1C00314AC
 * Callers:
 *     imp_WdfDeviceResumeIdleActual @ 0x1C00331A0 (imp_WdfDeviceResumeIdleActual.c)
 *     imp_WdfDeviceResumeIdleNoTrack @ 0x1C00331C0 (imp_WdfDeviceResumeIdleNoTrack.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C00088EC (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 */

void __fastcall ResumeIdleWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        void *Tag,
        int Line,
        char *File)
{
  FxPkgPnp *m_PkgPnp; // rax
  FxPkgPnp *v8; // rcx
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  SS_COMPONENT__ *ComponentPowerRef; // rcx
  FxDevice *pDevice; // [rsp+30h] [rbp-18h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    FxPowerIdleMachine::IoDecrement(&m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, Tag, Line, File);
    v8 = pDevice->m_PkgPnp;
    if ( v8->m_SleepStudyTrackReferences == 1
      && _InterlockedExchangeAdd(&v8->m_SleepStudyPowerRefIoCount, 0xFFFFFFFF) == 1 )
    {
      m_SleepStudy = v8->m_SleepStudy;
      if ( m_SleepStudy )
      {
        ComponentPowerRef = m_SleepStudy->ComponentPowerRef;
        if ( ComponentPowerRef )
        {
          if ( SleepstudyHelperRoutineBlock.ComponentInactive )
            SleepstudyHelperRoutineBlock.ComponentInactive(ComponentPowerRef);
        }
      }
    }
  }
  else
  {
    WPP_IFR_SF_(pDevice->m_Globals, 2u, 0x12u, 0x27u, WPP_FxDeviceApi_cpp_Traceguids);
  }
}
