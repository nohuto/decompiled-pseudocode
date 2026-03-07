__int64 __fastcall FxInterrupt::InterruptEnableInvokeCallback(FxInterrupt *this, _FX_DRIVER_GLOBALS *a2)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  unsigned int v4; // edi
  unsigned __int64 v5; // rax

  if ( this->m_PassiveHandling )
  {
    FxInterrupt::AcquireLock(this, a2);
    FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    v4 = ((__int64 (__fastcall *)(unsigned __int64))this->m_EvtInterruptEnable)(ObjectHandleUnchecked);
    FxInterrupt::ReleaseLock(this);
  }
  else
  {
    FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v5 = FxObject::GetObjectHandleUnchecked(this);
    return ((unsigned int (__fastcall *)(unsigned __int64))this->m_EvtInterruptEnable)(v5);
  }
  return v4;
}
