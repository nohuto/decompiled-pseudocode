/*
 * XREFs of imp_WdfInterruptTryToAcquireLock @ 0x1C0068530
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?TryToAcquireLock@FxInterrupt@@QEAAEXZ @ 0x1C007F86C (-TryToAcquireLock@FxInterrupt@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall imp_WdfInterruptTryToAcquireLock(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt)
{
  FxInterrupt *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxInterrupt *pFxInterrupt; // [rsp+40h] [rbp+8h] BYREF

  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  v3 = pFxInterrupt;
  m_Globals = pFxInterrupt->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( !pFxInterrupt->m_PassiveHandling )
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0x20u, WPP_FxInterruptApi_cpp_Traceguids, Interrupt);
      FxVerifierDbgBreakPoint(pFxInterrupt->m_Globals);
      return 0;
    }
    if ( (int)FxVerifierCheckIrqlLevel(pFxInterrupt->m_Globals, 0) < 0 )
      return 0;
    v3 = pFxInterrupt;
  }
  return FxInterrupt::TryToAcquireLock(v3);
}
