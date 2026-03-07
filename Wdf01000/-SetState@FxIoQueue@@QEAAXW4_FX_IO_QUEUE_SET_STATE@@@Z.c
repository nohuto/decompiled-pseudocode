void __fastcall FxIoQueue::SetState(FxIoQueue *this, _FX_IO_QUEUE_SET_STATE NewStatus)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  char v3; // di
  const void *_a1; // rax
  _FX_IO_QUEUE_STATE *p_m_QueueState; // rbx
  const void *ObjectHandleUnchecked; // rax

  m_Globals = this->m_Globals;
  v3 = NewStatus;
  if ( (NewStatus & 0x7FFCFFF0) != 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x16u, WPP_FxIoQueue_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    p_m_QueueState = &this->m_QueueState;
    if ( (NewStatus & 0x20000) != 0 )
      *p_m_QueueState &= ~0x10000u;
    if ( (NewStatus & 0x10000) != 0 )
      *p_m_QueueState |= 0x10000u;
    if ( (NewStatus & 1) != 0 )
    {
      if ( (*p_m_QueueState & 0x10000) != 0 )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(m_Globals, 4u, 0xDu, 0x17u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked);
      }
      else
      {
        *p_m_QueueState |= 1u;
      }
    }
    if ( (v3 & 2) != 0 )
      *p_m_QueueState &= ~1u;
    if ( (v3 & 4) != 0 )
    {
      *p_m_QueueState |= 2u;
      this->m_CancelDispatchedRequests = 0;
    }
    if ( (v3 & 8) != 0 )
      *p_m_QueueState &= ~2u;
  }
}
