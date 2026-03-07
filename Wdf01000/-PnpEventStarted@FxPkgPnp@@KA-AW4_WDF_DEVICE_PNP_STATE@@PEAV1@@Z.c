__int64 __fastcall FxPkgPnp::PnpEventStarted(FxPkgPnp *This)
{
  FxDevice *m_Device; // rdi
  unsigned __int8 v3; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rsi

  m_Device = This->m_Device;
  This->m_AchievedStart = 1;
  if ( !FxDevice::IsPdo(m_Device) )
  {
    m_Globals = m_Device->m_Globals;
    if ( IsLoggingEnabledAndNeeded(m_Globals) )
      LogDriverInfoStream(m_Globals, m_Device);
  }
  FxPkgPnp::PnpFinishProcessingIrp(This, v3);
  return 314LL;
}
