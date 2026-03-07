unsigned __int8 __fastcall FxInterrupt::WakeInterruptIsr(FxInterrupt *this)
{
  void *ObjectHandleUnchecked; // rax

  FxWakeInterruptMachine::ProcessEvent(this->m_WakeInterruptMachine, WakeInterruptEventIsr);
  ObjectHandleUnchecked = (void *)FxObject::GetObjectHandleUnchecked(this);
  _FX_DRIVER_GLOBALS::WaitForSignal(
    this->m_Globals,
    &this->m_WakeInterruptMachine->m_IsrEvent,
    "Wake Interrupt ISR is stuck waiting for the deviceto power back up and driver calllback to be processed",
    ObjectHandleUnchecked,
    this->m_Globals->DbgWaitForWakeInterruptIsrTimeoutInSec,
    3);
  return this->m_WakeInterruptMachine->m_Claimed;
}
