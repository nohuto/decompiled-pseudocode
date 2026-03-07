__int64 __fastcall CTouchProcessor::ReferenceFrame(__int64 a1, unsigned int a2)
{
  if ( *(struct _KTHREAD **)(a1 + 40) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8255);
  return CTouchProcessor::FindAndReferenceFrameById(a1, a2, 4u);
}
