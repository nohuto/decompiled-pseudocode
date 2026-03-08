/*
 * XREFs of ??1CMouseProcessor@@QEAA@XZ @ 0x1C0095570
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C0094A90 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1MouseInterceptState@CMouseProcessor@@QEAA@XZ @ 0x1C009528C (--1MouseInterceptState@CMouseProcessor@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

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
