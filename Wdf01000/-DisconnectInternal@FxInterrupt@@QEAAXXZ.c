void __fastcall FxInterrupt::DisconnectInternal(FxInterrupt *this)
{
  __int64 v1; // rdx
  struct _KINTERRUPT *m_Interrupt; // rax
  _IO_DISCONNECT_INTERRUPT_PARAMETERS params; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  m_Interrupt = this->m_Interrupt;
  this->m_Interrupt = 0LL;
  *(&params.Version + 1) = 0;
  params.Version = 4;
  params.ConnectionContext.Generic = m_Interrupt;
  (*(void (__fastcall **)(_IO_DISCONNECT_INTERRUPT_PARAMETERS *))(v1 + 1152))(&params);
}
