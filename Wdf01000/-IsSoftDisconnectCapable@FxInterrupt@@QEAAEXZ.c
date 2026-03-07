bool __fastcall FxInterrupt::IsSoftDisconnectCapable(FxInterrupt *this)
{
  bool result; // al

  result = 0;
  if ( this->m_UseSoftDisconnect && WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceRoutine )
  {
    if ( this->m_Interrupt )
      return this->m_Connected != 0;
  }
  return result;
}
