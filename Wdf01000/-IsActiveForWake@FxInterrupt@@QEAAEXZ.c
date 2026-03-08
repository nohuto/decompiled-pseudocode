/*
 * XREFs of ?IsActiveForWake@FxInterrupt@@QEAAEXZ @ 0x1C007F77C
 * Callers:
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C007E91C (-Connect@FxInterrupt@@QEAAJK@Z.c)
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C007ED80 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxInterrupt::IsActiveForWake(FxInterrupt *this)
{
  FxWakeInterruptMachine *m_WakeInterruptMachine; // rax

  m_WakeInterruptMachine = this->m_WakeInterruptMachine;
  if ( m_WakeInterruptMachine )
    LOBYTE(m_WakeInterruptMachine) = m_WakeInterruptMachine->m_ActiveForWake != 0;
  return (unsigned __int8)m_WakeInterruptMachine;
}
