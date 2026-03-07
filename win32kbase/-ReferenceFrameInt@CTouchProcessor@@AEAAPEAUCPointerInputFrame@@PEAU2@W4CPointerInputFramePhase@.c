__int64 __fastcall CTouchProcessor::ReferenceFrameInt(__int64 a1, __int64 a2)
{
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8232);
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 44));
  return a2;
}
