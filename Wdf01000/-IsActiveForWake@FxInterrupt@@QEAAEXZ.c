unsigned __int8 __fastcall FxInterrupt::IsActiveForWake(FxInterrupt *this)
{
  FxWakeInterruptMachine *m_WakeInterruptMachine; // rax

  m_WakeInterruptMachine = this->m_WakeInterruptMachine;
  if ( m_WakeInterruptMachine )
    LOBYTE(m_WakeInterruptMachine) = m_WakeInterruptMachine->m_ActiveForWake != 0;
  return (unsigned __int8)m_WakeInterruptMachine;
}
