__int64 __fastcall CTouchProcessor::FindAndReferenceFrameById(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  if ( *(struct _KTHREAD **)(a1 + 40) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8132);
  result = CTouchProcessor::FindFrameById(a1, a2, a3);
  if ( result )
    _InterlockedIncrement((volatile signed __int32 *)(result + 44));
  return result;
}
