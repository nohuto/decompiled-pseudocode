/*
 * XREFs of ?CheckOwnership@FxCallbackLock@@QEAAXXZ @ 0x1C0019E84
 * Callers:
 *     ?Unlock@FxCallbackMutexLock@@UEAAXE@Z @ 0x1C0019E20 (-Unlock@FxCallbackMutexLock@@UEAAXE@Z.c)
 *     ?Unlock@FxCallbackSpinLock@@UEAAXE@Z @ 0x1C004DBE0 (-Unlock@FxCallbackSpinLock@@UEAAXE@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxCallbackLock::CheckOwnership(FxCallbackLock *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierLock )
  {
    if ( !this->IsOwner(this) )
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xAu, WPP_FxCallbackLock_hpp_Traceguids, this);
      FxVerifierDbgBreakPoint(m_Globals);
    }
  }
}
