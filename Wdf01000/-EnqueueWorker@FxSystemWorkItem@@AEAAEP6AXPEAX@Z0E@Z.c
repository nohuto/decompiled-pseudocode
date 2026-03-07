unsigned __int8 __fastcall FxSystemWorkItem::EnqueueWorker(
        FxSystemWorkItem *this,
        void (__fastcall *Func)(void *),
        void *Parameter,
        unsigned __int8 AssertIfAlreadyQueued)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // r8
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Parameter);
  if ( !this->m_Enqueued )
  {
    if ( !this->m_RunningDown )
    {
      KeClearEvent(&this->m_WorkItemCompleted.m_Event.m_Event);
      this->m_Callback = Func;
      this->m_CallbackArg = Parameter;
      this->m_Enqueued = 1;
      _InterlockedIncrement(&this->m_OutStandingWorkItem);
      FxNonPagedObject::Unlock(this, irql, v10);
      IoQueueWorkItem(this->m_WorkItem.m_WorkItem, FxSystemWorkItem::_WorkItemThunk, DelayedWorkQueue, this);
      return 1;
    }
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, this);
    goto LABEL_7;
  }
  if ( AssertIfAlreadyQueued )
  {
    WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0xEu, WPP_FxSystemWorkitem_cpp_Traceguids, this, this->m_WorkItem.m_WorkItem);
LABEL_7:
    FxVerifierDbgBreakPoint(m_Globals);
  }
  FxNonPagedObject::Unlock(this, irql, v9);
  return 0;
}
