/*
 * XREFs of ?get@?$static_lazy@VDesktopPositionerTelemetry@@@details@wil@@QEAAPEAVDesktopPositionerTelemetry@@P6AXXZ@Z @ 0x1804601BC
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x18004F358 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 * Callees:
 *     atexit @ 0x180090184 (atexit.c)
 *     ?Create@DesktopPositionerTelemetry@@IEAAXXZ @ 0x180443B60 (-Create@DesktopPositionerTelemetry@@IEAAXXZ.c)
 */

_QWORD *__fastcall wil::details::static_lazy<DesktopPositionerTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`DesktopPositionerTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    qword_180651F10[0] = &IamTraceLogging::`vftable';
    v5 = qword_180651F10;
    atexit(a2);
    DesktopPositionerTelemetry::Create((DesktopPositionerTelemetry *)qword_180651F10);
    InitOnceComplete(&`DesktopPositionerTelemetry::Instance'::`2'::wrapper, 0, qword_180651F10);
  }
  return v5;
}
