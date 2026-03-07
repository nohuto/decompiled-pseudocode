struct CPointerMsgData *__fastcall CTouchProcessor::GetNonConstMsgData(CTouchProcessor *this, __int64 a2)
{
  if ( a2 && (*(_DWORD *)(a2 + 36) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10668);
  return (struct CPointerMsgData *)a2;
}
