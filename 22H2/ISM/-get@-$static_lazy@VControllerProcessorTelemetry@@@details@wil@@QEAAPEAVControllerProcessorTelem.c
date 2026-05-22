/*
 * XREFs of ?get@?$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelemetry@@P6AXXZ@Z @ 0x180124FA0
 * Callers:
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z @ 0x1801246C0 (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z.c)
 *     ?LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z @ 0x180124C78 (-LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x180124D18 (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180036EB0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18003BC9C (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<ControllerProcessorTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`ControllerProcessorTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    v5 = qword_180209880;
    qword_180209880[0] = &RawInputProvidersContinuousTracing::`vftable';
    qword_180209898 = (struct _tlgProvider_t *)&`ControllerProcessorTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180209880, qword_180209898, 0LL);
    InitOnceComplete(&`ControllerProcessorTelemetry::Instance'::`2'::wrapper, 0, qword_180209880);
  }
  return v5;
}
