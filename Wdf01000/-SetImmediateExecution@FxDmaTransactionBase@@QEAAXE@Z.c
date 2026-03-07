void __fastcall FxDmaTransactionBase::SetImmediateExecution(FxDmaTransactionBase *this, unsigned __int8 Value)
{
  FxDmaTransactionState m_State; // r8d
  const void *_a1; // rax
  int _a2; // r8d
  unsigned int v7; // ecx

  m_State = this->m_State;
  if ( ((m_State - 1) & 0xFFFFFFF9) != 0 || m_State == FxDmaTransactionStateTransferCompleted )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_ql(this->m_Globals, 2u, 0xFu, 0x1Eu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  v7 = this->m_Flags | 1;
  if ( !Value )
    v7 = this->m_Flags & 0xFFFFFFFE;
  this->m_Flags = v7;
}
