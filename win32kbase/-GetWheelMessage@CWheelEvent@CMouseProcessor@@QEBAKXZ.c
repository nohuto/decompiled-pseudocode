__int64 __fastcall CMouseProcessor::CWheelEvent::GetWheelMessage(CMouseProcessor::CWheelEvent *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 7);
  if ( !v1 )
    return 522LL;
  if ( v1 != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7495);
  return 526LL;
}
