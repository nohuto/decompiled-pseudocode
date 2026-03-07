void __fastcall CInputConfig::_NotifyExternalComponents(CInputConfig *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  if ( ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 751LL);
  RIMOnDisplayStateChange();
  CCursorClip::OnDisplayStateChange(v3, *((_BYTE *)this + 1505) != 0);
  do
    ResetAccelerationCurves(v2++);
  while ( v2 < 2 );
  InputConfig::Broadcast();
}
