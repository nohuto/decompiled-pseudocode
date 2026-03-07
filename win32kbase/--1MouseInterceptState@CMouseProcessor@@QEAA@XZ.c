void __fastcall CMouseProcessor::MouseInterceptState::~MouseInterceptState(CMouseProcessor::MouseInterceptState *this)
{
  if ( *((_QWORD *)this + 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor::MouseInterceptState *)((char *)this + 112));
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor::MouseInterceptState *)((char *)this + 112));
}
