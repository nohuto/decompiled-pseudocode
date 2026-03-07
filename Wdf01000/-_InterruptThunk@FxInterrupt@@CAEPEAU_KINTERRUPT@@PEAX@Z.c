unsigned __int8 __fastcall FxInterrupt::_InterruptThunk(struct _KINTERRUPT *Interrupt, FxInterrupt *ServiceContext)
{
  __int64 (__fastcall **p_m_EvtInterruptIsr)(unsigned __int64); // rdi
  void (__fastcall *v4)(__int64 (__fastcall **)(unsigned __int64), __int64, __int64, __int64, char); // rax
  unsigned __int64 v5; // rax
  char v6; // di
  void (__fastcall *v8)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char); // rax
  void (__fastcall *v9)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char); // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  char v11; // [rsp+20h] [rbp-18h]
  char v12; // [rsp+20h] [rbp-18h]
  char v13; // [rsp+20h] [rbp-18h]

  if ( ServiceContext->m_IsEdgeTriggeredNonMsiInterrupt != 1 )
  {
    if ( ServiceContext->m_Interrupt )
      goto LABEL_3;
    return 0;
  }
  if ( ServiceContext->m_Disconnecting == 1 )
    return 0;
  ServiceContext->m_InterruptCaptured = Interrupt;
LABEL_3:
  if ( ServiceContext->m_WakeInterruptMachine )
  {
    v8 = *(void (__fastcall **)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char))(unk_1C009FF30 + 16LL);
    if ( v8 )
    {
      v11 = 2;
      v8(&ServiceContext->m_EvtInterruptIsr, 8LL, 2181038080LL, 3937LL, v11);
    }
    return FxInterrupt::WakeInterruptIsr(ServiceContext);
  }
  else
  {
    if ( ServiceContext->m_PassiveHandling )
    {
      FxInterrupt::AcquireLock(ServiceContext, (_FX_DRIVER_GLOBALS *)ServiceContext);
      v9 = *(void (__fastcall **)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char))(unk_1C009FF30 + 16LL);
      if ( v9 )
      {
        v12 = 2;
        v9(&ServiceContext->m_EvtInterruptIsr, 8LL, 2181038080LL, 3937LL, v12);
      }
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(ServiceContext);
      v6 = ((__int64 (__fastcall *)(unsigned __int64))ServiceContext->m_EvtInterruptIsr)(ObjectHandleUnchecked);
      FxInterrupt::ReleaseLock(ServiceContext);
    }
    else
    {
      p_m_EvtInterruptIsr = (__int64 (__fastcall **)(unsigned __int64))&ServiceContext->m_EvtInterruptIsr;
      v4 = *(void (__fastcall **)(__int64 (__fastcall **)(unsigned __int64), __int64, __int64, __int64, char))(unk_1C009FF30 + 16LL);
      if ( v4 )
      {
        v13 = 2;
        v4(p_m_EvtInterruptIsr, 8LL, 2181038080LL, 3936LL, v13);
      }
      v5 = FxObject::GetObjectHandleUnchecked(ServiceContext);
      return (*p_m_EvtInterruptIsr)(v5);
    }
    return v6;
  }
}
