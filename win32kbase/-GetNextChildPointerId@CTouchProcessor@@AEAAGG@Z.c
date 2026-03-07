__int64 __fastcall CTouchProcessor::GetNextChildPointerId(struct _KTHREAD **this, unsigned __int16 a2)
{
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8862);
  if ( !a2 )
  {
    a2 = *((_WORD *)this + 52);
    if ( !a2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8872);
    if ( ++*((_WORD *)this + 52) < 0x4000u )
      *((_WORD *)this + 52) = 0x4000;
  }
  return a2;
}
