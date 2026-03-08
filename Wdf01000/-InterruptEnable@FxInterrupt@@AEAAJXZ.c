/*
 * XREFs of ?InterruptEnable@FxInterrupt@@AEAAJXZ @ 0x1C007F65C
 * Callers:
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C007E91C (-Connect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxInterrupt::InterruptEnable(FxInterrupt *this)
{
  __int64 result; // rax
  FxInterruptEnableParameters params; // [rsp+20h] [rbp-18h] BYREF

  result = 0LL;
  params.Interrupt = this;
  *(_QWORD *)&params.ReturnVal = 0LL;
  if ( this->m_EvtInterruptEnable )
  {
    KeSynchronizeExecution(this->m_Interrupt, FxInterrupt::_InterruptEnableThunk, &params);
    return (unsigned int)params.ReturnVal;
  }
  return result;
}
