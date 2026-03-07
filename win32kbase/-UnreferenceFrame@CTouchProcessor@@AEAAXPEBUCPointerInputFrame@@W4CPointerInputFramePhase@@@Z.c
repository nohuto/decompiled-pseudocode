__int64 __fastcall CTouchProcessor::UnreferenceFrame(__int64 a1, __int64 a2)
{
  if ( *(struct _KTHREAD **)(a1 + 40) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8377);
  return CTouchProcessor::UnreferenceFrameInt(a1, a2);
}
