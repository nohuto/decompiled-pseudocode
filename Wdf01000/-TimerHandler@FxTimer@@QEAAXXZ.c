/*
 * XREFs of ?TimerHandler@FxTimer@@QEAAXXZ @ 0x1C0008C04
 * Callers:
 *     ?_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z @ 0x1C0008BA0 (-_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z.c)
 *     ?_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0008BC0 (-_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C00093D0 (-_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxTimer::TimerHandler(FxTimer *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxCallbackLock *m_CallbackLock; // rcx
  WDFTIMER__ *v4; // rax
  WDFTIMER__ *ObjectHandleUnchecked; // rax
  __int64 v6; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C009FEF8.m_DriverUsage->FxDriverGlobals
                                    + stru_1C009FEF8.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  if ( this->m_Callback )
  {
    m_CallbackLock = this->m_CallbackLock;
    this->m_CallbackThread = KeGetCurrentThread();
    if ( m_CallbackLock )
    {
      irql = 0;
      m_CallbackLock->Lock(m_CallbackLock, &irql);
      ObjectHandleUnchecked = (WDFTIMER__ *)FxObject::GetObjectHandleUnchecked(this);
      this->m_Callback(ObjectHandleUnchecked);
      LOBYTE(v6) = irql;
      this->m_CallbackLock->Unlock(this->m_CallbackLock, v6);
    }
    else
    {
      v4 = (WDFTIMER__ *)FxObject::GetObjectHandleUnchecked(this);
      this->m_Callback(v4);
    }
    this->m_CallbackThread = 0LL;
  }
}
