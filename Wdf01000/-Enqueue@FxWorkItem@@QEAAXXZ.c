void __fastcall FxWorkItem::Enqueue(FxWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char v5; // si
  unsigned __int8 v6; // r8
  const void *_a1; // rax
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  v5 = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( this->m_Enqueued )
  {
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0x12u, 0xEu, WPP_FxWorkItem_cpp_Traceguids, _a1);
    }
  }
  else if ( this->m_RunningDown )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxWorkItem_cpp_Traceguids, ObjectHandleUnchecked);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    KeClearEvent(&this->m_WorkItemCompleted.m_Event.m_Event);
    this->m_Enqueued = 1;
    FxObject::AddRef(this, FxWorkItem::WorkItemThunk, 322, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
    _InterlockedIncrement(&m_Globals->Refcnt);
    v5 = 1;
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  if ( v5 )
    IoQueueWorkItem(this->m_WorkItem.m_WorkItem, FxWorkItem::WorkItemThunk, DelayedWorkQueue, this);
}
