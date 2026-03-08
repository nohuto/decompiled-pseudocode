/*
 * XREFs of ?Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ @ 0x1C022C834
 * Callers:
 *     ExecuteMarshaledInterceptRequest @ 0x1C02178E0 (ExecuteMarshaledInterceptRequest.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C022E838 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::Extensibility_ExecuteMarshaledInterceptRequest(CMouseProcessor *this)
{
  if ( *((_DWORD *)this + 12) == (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1923);
  CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest((CMouseProcessor *)((char *)this + 3704));
}
