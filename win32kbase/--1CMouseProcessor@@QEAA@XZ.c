void __fastcall CMouseProcessor::~CMouseProcessor(CMouseProcessor *this)
{
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  if ( *((_QWORD *)this + 5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
  if ( *((CMouseProcessor **)this + 482) != (CMouseProcessor *)((char *)this + 3856) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6994LL);
  if ( *((_QWORD *)this + 479) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
  CMouseProcessor::MouseInterceptState::~MouseInterceptState((CMouseProcessor *)((char *)this + 3704));
  CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 3576));
  *(_QWORD *)this = &CBaseProcessor::`vftable';
}
