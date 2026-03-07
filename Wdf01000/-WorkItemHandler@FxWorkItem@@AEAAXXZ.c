void __fastcall FxWorkItem::WorkItemHandler(FxWorkItem *this)
{
  unsigned __int8 v2; // dl
  FxCallbackLock *m_CallbackLock; // rcx
  void (__fastcall **p_m_Callback)(WDFWORKITEM__ *); // rdi
  void (__fastcall *v5)(void (__fastcall **)(WDFWORKITEM__ *), __int64, __int64, __int64, char); // rax
  WDFWORKITEM__ *v6; // rax
  bool v7; // zf
  void (__fastcall *v8)(void (__fastcall **)(WDFWORKITEM__ *), __int64, __int64, __int64, char); // rax
  WDFWORKITEM__ *ObjectHandleUnchecked; // rax
  __int64 v10; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  irql = 0;
  FX_TRACK_DRIVER(this->m_Globals);
  FxNonPagedObject::Lock(this, &irql);
  v2 = irql;
  ++this->m_WorkItemRunningCount;
  this->m_Enqueued = 0;
  FxNonPagedObject::Unlock(this, v2);
  m_CallbackLock = this->m_CallbackLock;
  p_m_Callback = &this->m_Callback;
  if ( m_CallbackLock )
  {
    m_CallbackLock->Lock(m_CallbackLock, &irql);
    v8 = *(void (__fastcall **)(void (__fastcall **)(WDFWORKITEM__ *), __int64, __int64, __int64, char))(unk_1C009FF30 + 24LL);
    if ( v8 )
      v8(&this->m_Callback, 8LL, 1207959552LL, 3943LL, 2);
    ObjectHandleUnchecked = (WDFWORKITEM__ *)FxObject::GetObjectHandleUnchecked(this);
    (*p_m_Callback)(ObjectHandleUnchecked);
    LOBYTE(v10) = irql;
    this->m_CallbackLock->Unlock(this->m_CallbackLock, v10);
  }
  else
  {
    v5 = *(void (__fastcall **)(void (__fastcall **)(WDFWORKITEM__ *), __int64, __int64, __int64, char))(unk_1C009FF30 + 24LL);
    if ( v5 )
      v5(&this->m_Callback, 8LL, 1207959552LL, 3943LL, 2);
    v6 = (WDFWORKITEM__ *)FxObject::GetObjectHandleUnchecked(this);
    (*p_m_Callback)(v6);
  }
  FxNonPagedObject::Lock(this, &irql);
  v7 = this->m_WorkItemRunningCount-- == 1;
  if ( v7 && !this->m_Enqueued )
    KeSetEvent(&this->m_WorkItemCompleted.m_Event.m_Event, 0, 0);
  FxNonPagedObject::Unlock(this, irql);
}
