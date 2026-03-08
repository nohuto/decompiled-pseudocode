/*
 * XREFs of ?ReportActive@FxInterrupt@@QEAAXE@Z @ 0x1C00800F8
 * Callers:
 *     imp_WdfInterruptReportActive @ 0x1C00682D0 (imp_WdfInterruptReportActive.c)
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C007E91C (-Connect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 */

void __fastcall FxInterrupt::ReportActive(FxInterrupt *this, unsigned __int8 Internal)
{
  __int64 v3; // rcx
  const void *_a1; // rax
  _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS parameters; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  if ( !Internal )
  {
    if ( !this->m_Connected || !this->m_Interrupt )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, 0xAu, WPP_InterruptObjectKm_cpp_Traceguids, _a1);
      goto LABEL_7;
    }
    if ( !*(_QWORD *)(v3 + 1160) )
    {
      WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0xBu, WPP_InterruptObjectKm_cpp_Traceguids);
LABEL_7:
      FxVerifierDbgBreakPoint(this->m_Globals);
      return;
    }
  }
  if ( !this->m_Active )
  {
    parameters.ConnectionContext.Generic = this->m_Interrupt;
    *(_QWORD *)&parameters.Version = 4LL;
    (*(void (__fastcall **)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))(v3 + 1160))(&parameters);
    this->m_Active = 1;
  }
}
