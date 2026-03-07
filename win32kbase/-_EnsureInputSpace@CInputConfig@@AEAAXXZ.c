void __fastcall CInputConfig::_EnsureInputSpace(CInputConfig *this)
{
  if ( *(CInputConfig **)this == this )
  {
    if ( *((_BYTE *)this + 1504) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 779LL);
    *((_BYTE *)this + 1504) = 1;
    CInputConfig::_CreateLegacyInputSpace(this);
  }
}
