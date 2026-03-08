/*
 * XREFs of ?SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFINITY@@@Z @ 0x1C007F7CC
 * Callers:
 *     imp_WdfInterruptSetExtendedPolicy @ 0x1C0068350 (imp_WdfInterruptSetExtendedPolicy.c)
 *     imp_WdfInterruptSetPolicy @ 0x1C0068470 (imp_WdfInterruptSetPolicy.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::SetPolicy(
        FxInterrupt *this,
        _WDF_INTERRUPT_POLICY Policy,
        _WDF_INTERRUPT_PRIORITY Priority,
        _GROUP_AFFINITY *TargetProcessorSet)
{
  const void *_a1; // rax
  _GROUP_AFFINITY v9; // xmm0

  if ( this->m_CreatedInPrepareHardware )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(
      this->m_Globals,
      2u,
      0xCu,
      0x16u,
      (const _GUID *)&WPP_InterruptObject_cpp_Traceguids,
      _a1,
      -1073741808);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  this->m_Policy = Policy;
  this->m_Priority = Priority;
  v9 = *TargetProcessorSet;
  this->m_SetPolicy = 1;
  this->m_Processors = v9;
}
