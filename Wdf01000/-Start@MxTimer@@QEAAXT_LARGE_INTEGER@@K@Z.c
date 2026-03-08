/*
 * XREFs of ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C003FB68
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0006670 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?StartTimer@FxWatchdog@@QEAAXK@Z @ 0x1C00708C8 (-StartTimer@FxWatchdog@@QEAAXK@Z.c)
 *     ?StartTimer@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0077640 (-StartTimer@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 * Callees:
 *     ?StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z @ 0x1C00064A8 (-StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z.c)
 */

void __fastcall MxTimer::Start(MxTimer *this, _LARGE_INTEGER DueTime, ULONG TolerableDelay)
{
  if ( this->m_Timer.m_IsExtTimer )
    MxTimer::StartWithReturn(this, DueTime, TolerableDelay);
  else
    KeSetCoalescableTimer(
      &this->m_Timer.KernelTimer,
      DueTime,
      this->m_Timer.m_Period,
      TolerableDelay,
      &this->m_Timer.TimerDpc);
}
