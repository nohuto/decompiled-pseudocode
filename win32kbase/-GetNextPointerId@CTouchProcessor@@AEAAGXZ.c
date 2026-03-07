__int64 __fastcall CTouchProcessor::GetNextPointerId(struct _KTHREAD **this)
{
  unsigned __int16 v2; // di

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8802);
  v2 = *((_WORD *)this + 52);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8814);
  if ( ++*((_WORD *)this + 52) < 2u )
    *((_WORD *)this + 52) = 2;
  return v2;
}
