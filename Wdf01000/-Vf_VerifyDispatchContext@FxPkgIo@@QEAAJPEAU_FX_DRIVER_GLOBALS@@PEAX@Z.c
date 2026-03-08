/*
 * XREFs of ?Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00BB030
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00042E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgIo::Vf_VerifyDispatchContext(
        FxPkgIo *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _LIST_ENTRY *DispatchContext)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // r9
  unsigned int v4; // ebx
  _LIST_ENTRY *Flink; // rax
  bool v7; // cl

  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  v4 = 0;
  Flink = this->m_DynamicDispatchInfoListHead.Flink;
  v7 = DispatchContext == &this->m_DynamicDispatchInfoListHead;
  while ( Flink != p_m_DynamicDispatchInfoListHead )
  {
    if ( DispatchContext == Flink )
      return v4;
    Flink = Flink->Flink;
  }
  if ( !v7 )
  {
    v4 = -1073741811;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0xDu, WPP_FxPkgIo_cpp_Traceguids, DispatchContext, -1073741811);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v4;
}
