/*
 * XREFs of ??1MouseInterceptState@CMouseProcessor@@QEAA@XZ @ 0x1C005A8A8
 * Callers:
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x1C005A904 (--1CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C005A8E0 (-FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::~MouseInterceptState(
        CMouseProcessor::MouseInterceptState *this,
        __int64 a2,
        __int64 a3)
{
  if ( *((_QWORD *)this + 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor::MouseInterceptState *)((char *)this + 112));
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor::MouseInterceptState *)((char *)this + 112));
}
