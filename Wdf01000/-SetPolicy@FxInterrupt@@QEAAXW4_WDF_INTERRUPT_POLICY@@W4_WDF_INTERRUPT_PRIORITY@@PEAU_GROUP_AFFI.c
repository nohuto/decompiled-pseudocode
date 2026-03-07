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
