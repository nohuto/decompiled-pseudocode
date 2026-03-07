unsigned __int8 __fastcall FxTimer::Stop(FxTimer *this, unsigned __int8 Wait)
{
  unsigned __int8 v3; // si
  const void *_a1; // rax
  const void *_a2; // rdx
  KIRQL CurrentIrql; // al
  unsigned int v8; // edx
  __int64 v9; // r10
  _KTHREAD **p_m_StopThread; // rdi
  const void *ObjectHandleUnchecked; // rax
  const void *v12; // r8
  _FX_DRIVER_GLOBALS *v13; // r10
  unsigned __int8 v14; // dl
  FxSystemWorkItem *m_SystemWorkItem; // rbp
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF

  irql = 0;
  if ( !Wait )
    return MxTimer::Stop(&this->m_Timer);
  if ( this->m_CallbackThread == KeGetCurrentThread() )
  {
    _a1 = FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(this->m_Globals, 2u, 0x12u, 0x11u, WPP_FxTimer_cpp_Traceguids, _a1, _a2);
  }
  else
  {
    if ( !this->m_Globals->FxVerifierOn || !KeGetCurrentIrql() )
    {
      FxNonPagedObject::Lock(this, &irql);
      if ( this->m_Globals->FxVerifierOn
        && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v8, 9u) || *(_BYTE *)(v9 + 325)) )
      {
        p_m_StopThread = &this->m_StopThread;
        if ( this->m_StopThread )
        {
          ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
          WPP_IFR_SF_qqq(
            v13,
            2u,
            0x12u,
            0x13u,
            WPP_FxTimer_cpp_Traceguids,
            ObjectHandleUnchecked,
            v12,
            KeGetCurrentThread());
          FxVerifierDbgBreakPoint(this->m_Globals);
        }
      }
      else
      {
        p_m_StopThread = &this->m_StopThread;
      }
      this->m_StartAborted = 0;
      *p_m_StopThread = KeGetCurrentThread();
      do
      {
        v14 = irql;
        this->m_StopAgain = 0;
        FxNonPagedObject::Unlock(this, v14);
        v3 = MxTimer::Stop(&this->m_Timer);
        KeFlushQueuedDpcs();
        m_SystemWorkItem = this->m_SystemWorkItem;
        if ( m_SystemWorkItem )
        {
          KeEnterCriticalRegion();
          KeWaitForSingleObject(&m_SystemWorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
          KeLeaveCriticalRegion();
        }
        FxNonPagedObject::Lock(this, &irql);
      }
      while ( !v3 && this->m_StopAgain );
      *p_m_StopThread = 0LL;
      this->m_StopAgain = 0;
      if ( this->m_StartAborted )
      {
        v3 = 1;
        this->m_StartAborted = 0;
      }
      FxNonPagedObject::Unlock(this, irql);
      return v3;
    }
    CurrentIrql = KeGetCurrentIrql();
    WPP_IFR_SF_D(this->m_Globals, 2u, 0x12u, 0x12u, WPP_FxTimer_cpp_Traceguids, CurrentIrql);
  }
  FxVerifierDbgBreakPoint(this->m_Globals);
  return 0;
}
