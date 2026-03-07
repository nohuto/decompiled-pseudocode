__int64 __fastcall CTouchProcessor::IsFrameReferenced(struct _KTHREAD **this, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8154);
  result = CTouchProcessor::FindAndReferenceFrameById((__int64)this, a2, 4u);
  if ( result )
  {
    LOBYTE(v2) = (unsigned int)CTouchProcessor::UnreferenceFrameInt(this, result) != 0;
    return v2;
  }
  return result;
}
