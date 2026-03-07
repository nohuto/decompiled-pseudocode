struct CPointerCaptureData *__fastcall CTouchProcessor::GetPointerCaptureData(CTouchProcessor *this, __int64 a2)
{
  struct CPointerMsgData *NonConstMsgData; // rdi

  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(this, a2);
  if ( *((struct _KTHREAD **)this + 5) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10910);
  return (struct CPointerCaptureData *)*((_QWORD *)NonConstMsgData + 5);
}
