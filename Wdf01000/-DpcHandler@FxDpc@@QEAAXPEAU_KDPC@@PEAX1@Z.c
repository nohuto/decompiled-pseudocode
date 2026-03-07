void __fastcall FxDpc::DpcHandler(FxDpc *this, _KDPC *Dpc, void *SystemArgument1, void *SystemArgument2)
{
  void (__fastcall **p_m_Callback)(WDFDPC__ *); // rdi
  void (__fastcall *v6)(void (__fastcall **)(WDFDPC__ *), __int64, __int64, __int64, char); // rax
  FxCallbackLock *m_CallbackLock; // rcx
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  char v11; // [rsp+20h] [rbp-18h]
  void *irql; // [rsp+58h] [rbp+20h] BYREF

  irql = SystemArgument2;
  FX_TRACK_DRIVER(this->m_Globals);
  p_m_Callback = &this->m_Callback;
  if ( this->m_Callback )
  {
    v6 = *(void (__fastcall **)(void (__fastcall **)(WDFDPC__ *), __int64, __int64, __int64, char))(unk_1C009FF30 + 8LL);
    if ( v6 )
    {
      v11 = 2;
      v6(&this->m_Callback, 8LL, 2164260864LL, 3938LL, v11);
    }
    m_CallbackLock = this->m_CallbackLock;
    if ( m_CallbackLock )
    {
      LOBYTE(irql) = 0;
      m_CallbackLock->Lock(m_CallbackLock, (unsigned __int8 *)&irql);
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
      (*p_m_Callback)((WDFDPC__ *)ObjectHandleUnchecked);
      LOBYTE(v9) = (_BYTE)irql;
      this->m_CallbackLock->Unlock(this->m_CallbackLock, v9);
    }
    else
    {
      v10 = FxObject::GetObjectHandleUnchecked(this);
      (*p_m_Callback)((WDFDPC__ *)v10);
    }
  }
}
