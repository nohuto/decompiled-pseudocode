/*
 * XREFs of ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0064AEC
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004CF0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0034C84 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x1C0064740 (-IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ.c)
 */

unsigned __int8 __fastcall FxIoQueue::ProcessCancelledRequestsOnQueue(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  __int64 v5; // rcx
  _QWORD **v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  FxRequestBase *v11; // rsi
  const void *_a1; // rax
  const void *_a2; // rdx
  unsigned __int8 v14; // r8
  WDFREQUEST__ *ObjectHandleUnchecked; // rsi
  WDFQUEUE__ *v16; // rbp
  unsigned __int8 v17; // r8
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v19; // rdx
  FxCallbackLock *v20; // rcx
  char v21; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( FxIoQueue::IsPowerStateNotifyingDriver(this) )
    return 0;
  v7 = (_QWORD **)(v5 + 288);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      break;
    v9 = *v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    v11 = (FxRequestBase *)(v8 - 36);
    *(_QWORD *)(v9 + 8) = v10;
    v8[1] = v8;
    *v8 = v8;
    FxObject::GetObjectHandleUnchecked(this);
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v11);
    WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x55u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v11, 64, v14);
    FxNonPagedObject::Unlock(this, *PreviousIrql, v14);
    ObjectHandleUnchecked = (WDFREQUEST__ *)FxObject::GetObjectHandleUnchecked(v11);
    v16 = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
    if ( this->m_IoCanceledOnQueue.Method )
    {
      m_CallbackLock = this->m_IoCanceledOnQueue.m_CallbackLock;
      v21 = 0;
      if ( m_CallbackLock )
        m_CallbackLock->Lock(m_CallbackLock, (unsigned __int8 *)&v21);
      this->m_IoCanceledOnQueue.Method(v16, ObjectHandleUnchecked);
      v20 = this->m_IoCanceledOnQueue.m_CallbackLock;
      if ( v20 )
      {
        LOBYTE(v19) = v21;
        v20->Unlock(v20, v19);
      }
    }
    FxNonPagedObject::Lock(this, PreviousIrql, v17);
  }
  return 1;
}
