/*
 * XREFs of ?get@?$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAAPEAVStartWindowTelemetry@@P6AXXZ@Z @ 0x1800715A8
 * Callers:
 *     ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x180071584 (-IsEnabled@StartWindowTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     ?Create@StartWindowTelemetry@@IEAAXXZ @ 0x180071644 (-Create@StartWindowTelemetry@@IEAAXXZ.c)
 *     atexit @ 0x180090184 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<StartWindowTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`StartWindowTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v4, &v5) && (_DWORD)v4 )
  {
    qword_180650E48 = &IamTraceLogging::`vftable';
    v5 = &qword_180650E48;
    atexit(a2);
    StartWindowTelemetry::Create((StartWindowTelemetry *)&qword_180650E48);
    InitOnceComplete(&`StartWindowTelemetry::Instance'::`2'::wrapper, 0, &qword_180650E48);
  }
  return v5;
}
