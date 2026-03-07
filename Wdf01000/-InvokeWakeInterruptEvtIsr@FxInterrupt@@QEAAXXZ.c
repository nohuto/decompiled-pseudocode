void __fastcall FxInterrupt::InvokeWakeInterruptEvtIsr(FxInterrupt *this, _FX_DRIVER_GLOBALS *a2)
{
  unsigned __int64 ObjectHandleUnchecked; // rax

  FxInterrupt::AcquireLock(this, a2);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  this->m_WakeInterruptMachine->m_Claimed = ((__int64 (__fastcall *)(unsigned __int64))this->m_EvtInterruptIsr)(ObjectHandleUnchecked);
  FxInterrupt::ReleaseLock(this);
}
