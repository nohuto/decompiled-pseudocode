void __fastcall FxVerifierLock::Lock(FxVerifierLock *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  struct _KTHREAD *_a1; // r12
  KIRQL v4; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a4; // rax
  const void *_a3; // rdx
  ULONG_PTR ObjectHandleUnchecked; // rax
  KIRQL v11; // al
  unsigned __int64 *p_m_Lock; // rdi
  unsigned __int64 *v13; // rcx
  _LIST_ENTRY **ThreadTableEntry; // rax
  unsigned __int8 m_UseMutex; // cl
  bool v16; // zf
  unsigned __int64 *v17; // rcx
  FxVerifierLock **v18; // r14
  FxVerifierLock **v19; // r15
  FxVerifierLock *v20; // rsi
  _LARGE_INTEGER sleepTime; // [rsp+80h] [rbp+8h] BYREF

  _a1 = KeGetCurrentThread();
  v4 = 0;
  m_Globals = this->m_Globals;
  if ( this->m_OwningThread == _a1 )
  {
    _a4 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_ParentObject);
    WPP_IFR_SF_qqqq(m_Globals, 1u, 0x12u, 0xAu, WPP_FxVerifierLock_cpp_Traceguids, _a1, this, _a3, _a4);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_ParentObject);
    FxVerifierBugCheckWorker(m_Globals, WDF_RECURSIVE_LOCK, ObjectHandleUnchecked, (ULONG_PTR)this);
  }
  if ( this->m_UseMutex )
  {
    KeEnterCriticalRegion();
    ExAcquireFastMutexUnsafe(&this->m_Mutex.m_Lock);
    *PreviousIrql = KeGetCurrentIrql();
  }
  else
  {
    if ( !KeGetCurrentIrql() )
    {
      sleepTime.QuadPart = 0LL;
      KeDelayExecutionThread(0, 1u, &sleepTime);
    }
    v11 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
    *PreviousIrql = v11;
    this->m_OldIrql = v11;
  }
  p_m_Lock = &m_Globals->ThreadTableLock.m_Lock;
  v13 = &m_Globals->ThreadTableLock.m_Lock;
  if ( this->m_UseMutex )
    v4 = KeAcquireSpinLockRaiseToDpc(v13);
  else
    KeAcquireSpinLockAtDpcLevel(v13);
  this->m_OwningThread = _a1;
  ThreadTableEntry = FxVerifierLock::GetThreadTableEntry(_a1, this, 0);
  m_UseMutex = this->m_UseMutex;
  if ( ThreadTableEntry )
  {
    v18 = (FxVerifierLock **)(ThreadTableEntry + 2);
    v19 = (FxVerifierLock **)(ThreadTableEntry + 1);
    if ( m_UseMutex )
      v20 = *v19;
    else
      v20 = *v18;
    if ( v20 )
    {
      if ( this->m_Order < v20->m_Order )
      {
        FxVerifierLock::DumpDetails(this, _a1, v20);
        m_UseMutex = this->m_UseMutex;
      }
    }
    v16 = m_UseMutex == 0;
    this->m_OwnedLink = v20;
    v17 = p_m_Lock;
    if ( !v16 )
    {
      *v19 = this;
LABEL_22:
      KeReleaseSpinLock(v17, v4);
      return;
    }
    *v18 = this;
  }
  else
  {
    v16 = m_UseMutex == 0;
    v17 = &m_Globals->ThreadTableLock.m_Lock;
    if ( !v16 )
      goto LABEL_22;
  }
  KeReleaseSpinLockFromDpcLevel(v17);
}
