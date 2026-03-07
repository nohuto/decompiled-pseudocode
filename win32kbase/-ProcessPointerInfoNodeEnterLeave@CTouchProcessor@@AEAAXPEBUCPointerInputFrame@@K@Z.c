void __fastcall CTouchProcessor::ProcessPointerInfoNodeEnterLeave(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2)
{
  CTouchProcessor *v4; // rcx
  const struct CPointerInputFrame *v5; // rdi
  struct CPointerInfoNode *v6; // rsi

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15747);
  v5 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a2);
  if ( v5 )
  {
    v6 = CTouchProcessor::LookupNode(v4, a2, 0);
    if ( (*((_DWORD *)v6 + 45) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15756);
    CTouchProcessor::ProcessEnterLeave(this, v5, v6);
    CTouchProcessor::UnreferenceFrameInt(this, v5);
  }
}
