unsigned __int8 __fastcall FxTimer::Start(FxTimer *this, _LARGE_INTEGER DueTime)
{
  unsigned __int8 v4; // r14
  char v5; // bp
  const void *_a1; // rax
  const void *ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  irql = 0;
  v4 = 0;
  v5 = 0;
  FxNonPagedObject::Lock(this, &irql);
  if ( this->m_RunningDown )
  {
    _a1 = FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xFu, WPP_FxTimer_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  else if ( this->m_StopThread )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(this->m_Globals, 2u, 0x12u, 0x10u, WPP_FxTimer_cpp_Traceguids, ObjectHandleUnchecked, _a2);
    this->m_StartAborted = 1;
  }
  else
  {
    v5 = 1;
  }
  FxNonPagedObject::Unlock(this, irql);
  if ( v5 )
  {
    FxObject::AddRef(this, this, 629, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
    v4 = MxTimer::StartWithReturn(&this->m_Timer, DueTime, this->m_TolerableDelay);
    FxNonPagedObject::Lock(this, &irql);
    if ( this->m_StopThread )
      this->m_StopAgain = 1;
    FxNonPagedObject::Unlock(this, irql);
    this->Release(this, this, 646, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
  }
  return v4;
}
