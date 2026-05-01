/*
 * XREFs of ?HandleRecoveryForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1802B13D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _LogEventWithApplicationViewData__ @ 0x1802AD994 (_LogEventWithApplicationViewData__.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802B37FC (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall HolographicPositioner::HandleRecoveryForView(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LogEventWithApplicationViewData__(
    (__int64)a2,
    (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::HolographicViewRecovered<unsigned short const *>);
  v4 = HolographicPositioner::_CloseView((HolographicPositioner *)((char *)this - 168), a2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x40D,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
