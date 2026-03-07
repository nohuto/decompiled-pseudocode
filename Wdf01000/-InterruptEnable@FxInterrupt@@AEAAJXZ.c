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
