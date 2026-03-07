__int64 __fastcall FxRequest::RemoveFromIrpQueue(FxRequest *this, FxIrpQueue *IrpQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rax
  FxRequest_vtbl *v6; // rax

  m_Globals = this->m_Globals;
  if ( !FxIrpQueue::RemoveIrpFromQueueByContext(IrpQueue, &this->m_CsqContext) )
    return 3221225760LL;
  if ( m_Globals->FxVerifierOn )
  {
    if ( !this->m_IrpQueue )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 2u, 0x10u, 0x29u, WPP_FxRequest_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(m_Globals);
    }
  }
  v6 = this->__vftable;
  this->m_IrpQueue = 0LL;
  v6->Release(this, (void *)1969583441, 2030, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  return 0LL;
}
