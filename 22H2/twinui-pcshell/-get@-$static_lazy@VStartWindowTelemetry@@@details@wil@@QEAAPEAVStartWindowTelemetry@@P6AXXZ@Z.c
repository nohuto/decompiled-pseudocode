/*
 * XREFs of ?get@?$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAAPEAVStartWindowTelemetry@@P6AXXZ@Z @ 0x1800715A8
 * Callers:
 *     ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x180071584 (-IsEnabled@StartWindowTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     ?Create@StartWindowTelemetry@@IEAAXXZ @ 0x180071644 (-Create@StartWindowTelemetry@@IEAAXXZ.c)
 *     atexit @ 0x180090164 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<StartWindowTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`StartWindowTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    qword_180650E40[0] = &IamTraceLogging::`vftable';
    v5 = qword_180650E40;
    atexit(a2);
    StartWindowTelemetry::Create((StartWindowTelemetry *)qword_180650E40);
    InitOnceComplete(&`StartWindowTelemetry::Instance'::`2'::wrapper, 0, qword_180650E40);
  }
  return v5;
}
