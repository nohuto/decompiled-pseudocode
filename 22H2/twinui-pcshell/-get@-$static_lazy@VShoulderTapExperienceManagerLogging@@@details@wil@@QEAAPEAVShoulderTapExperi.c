/*
 * XREFs of ?get@?$static_lazy@VShoulderTapExperienceManagerLogging@@@details@wil@@QEAAPEAVShoulderTapExperienceManagerLogging@@P6AXXZ@Z @ 0x18024100C
 * Callers:
 *     ??1Completer@?$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x18023F778 (--1Completer@-$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?PositionShoulderTapEnd_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBGHHHHHHHHHHHHH@Z @ 0x180240468 (-PositionShoulderTapEnd_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBGHHHHHHHHHHHHH@Z.c)
 *     ?PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z @ 0x1802405C0 (-PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?ShoulderTap_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG00HHH@Z @ 0x180240F40 (-ShoulderTap_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG00HHH@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090164 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<ShoulderTapExperienceManagerLogging>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(
         &`ShoulderTapExperienceManagerLogging::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v5,
         (LPVOID *)&v6)
    && (_DWORD)v5 )
  {
    v6 = qword_1806517C0;
    qword_1806517C0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1806517D8 = (struct _tlgProvider_t *)&`ShoulderTapExperienceManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806517C0, qword_1806517D8, v3);
    InitOnceComplete(&`ShoulderTapExperienceManagerLogging::Instance'::`2'::wrapper, 0, qword_1806517C0);
  }
  return v6;
}
