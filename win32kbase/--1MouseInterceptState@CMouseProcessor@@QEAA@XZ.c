/*
 * XREFs of ??1MouseInterceptState@CMouseProcessor@@QEAA@XZ @ 0x1C009528C
 * Callers:
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x1C0095570 (--1CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C00952C0 (-FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::~MouseInterceptState(CMouseProcessor::MouseInterceptState *this)
{
  if ( *((_QWORD *)this + 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor::MouseInterceptState *)((char *)this + 112));
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor::MouseInterceptState *)((char *)this + 112));
}
