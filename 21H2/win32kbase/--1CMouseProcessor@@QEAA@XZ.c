/*
 * XREFs of ??1CMouseProcessor@@QEAA@XZ @ 0x1C005A904
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C005A850 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1MouseInterceptState@CMouseProcessor@@QEAA@XZ @ 0x1C005A8A8 (--1MouseInterceptState@CMouseProcessor@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::~CMouseProcessor(CMouseProcessor *this, __int64 a2, __int64 a3)
{
  bool v3; // zf

  v3 = *((_QWORD *)this + 5) == 0LL;
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((CMouseProcessor **)this + 482) != (CMouseProcessor *)((char *)this + 3856) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_QWORD *)this + 479) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  CMouseProcessor::MouseInterceptState::~MouseInterceptState((CMouseProcessor *)((char *)this + 3704), a2, a3);
  CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 3576));
  *(_QWORD *)this = &CBaseProcessor::`vftable';
}
