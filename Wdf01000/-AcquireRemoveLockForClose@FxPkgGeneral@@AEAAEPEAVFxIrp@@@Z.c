/*
 * XREFs of ?AcquireRemoveLockForClose@FxPkgGeneral@@AEAAEPEAVFxIrp@@@Z @ 0x1C0084E50
 * Callers:
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00859BC (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int8 __fastcall FxPkgGeneral::AcquireRemoveLockForClose(FxPkgGeneral *this, FxIrp *FxIrp)
{
  FxDeviceBase *m_DeviceBase; // r8
  char v4; // bl
  NTSTATUS _a2; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int v8; // edx
  _FX_DRIVER_GLOBALS *v9; // rcx

  m_DeviceBase = this->m_DeviceBase;
  v4 = 0;
  if ( *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized
    && ((__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject[1].CurrentIrp & 1) == 0 )
  {
    _a2 = IoAcquireRemoveLockEx(
            (PIO_REMOVE_LOCK)&m_DeviceBase->m_DeviceObject.m_DeviceObject[1],
            FxIrp->m_Irp,
            a5,
            1u,
            0x20u);
    if ( _a2 < 0 )
    {
      m_Globals = this->m_Globals;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Eu, WPP_FxPkgGeneral_cpp_Traceguids, FxIrp->m_Irp, _a2);
      if ( m_Globals->FxVerifierOn
        && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v8, 9u) || m_Globals->FxVerifyDownlevel) )
      {
        FxVerifierDbgBreakPoint(v9);
      }
    }
    else
    {
      return 1;
    }
  }
  return v4;
}
