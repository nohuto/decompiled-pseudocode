/*
 * XREFs of ?TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicationView@@PEAUIShellTab@2345@W4WINDOW_SNAP_STATE@@@Z @ 0x18030C430
 * Callers:
 *     ?WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18030C710 (-WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicat.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18003F870 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180071D94 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$TabWindowSnapped@AEAIAEAU_GUID@@PEBGI@TabCompanionTelemetry@@SAXAEAIAEAU_GUID@@$$QEAPEBG$$QEAI@Z @ 0x180309AC0 (--$TabWindowSnapped@AEAIAEAU_GUID@@PEBGI@TabCompanionTelemetry@@SAXAEAIAEAU_GUID@@$$QEAPEBG$$QEA.c)
 *     ?get@?$static_lazy@VTabCompanionLogger@@@details@wil@@QEAAPEAVTabCompanionLogger@@P6AXXZ@Z @ 0x18030CE00 (-get@-$static_lazy@VTabCompanionLogger@@@details@wil@@QEAAPEAVTabCompanionLogger@@P6AXXZ@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediator::TraceLogTabWindowSnapped(
        __int64 (__fastcall ***a1)(ApplicationViewHelpers *, GUID *, __int64 *),
        __int64 a2,
        int a3)
{
  wil::TraceLoggingProvider *v6; // rax
  char result; // al
  struct IApplicationView *v8; // rdx
  const char *v9; // r9
  HSTRING v10; // rcx
  int v11; // eax
  __int64 (__fastcall *v12)(__int64, HSTRING *); // r14
  int v13; // eax
  HSTRING string; // [rsp+20h] [rbp-58h] BYREF
  int v15; // [rsp+28h] [rbp-50h] BYREF
  int WindowForView; // [rsp+2Ch] [rbp-4Ch] BYREF
  PCWSTR StringRawBuffer; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = (wil::TraceLoggingProvider *)wil::details::static_lazy<TabCompanionLogger>::get(
                                      a1,
                                      _lambda_7ddd513c8c70d581733925d1e8d989fc_::_lambda_invoker_cdecl_);
  result = wil::TraceLoggingProvider::IsEnabled_(v6, 0);
  try
  {
    if ( result )
    {
      WindowForView = ApplicationViewHelpers::GetWindowForView(a1, v8);
      v18 = 0LL;
      v10 = 0LL;
      string = 0LL;
      if ( a2 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 48LL))(a2, &v18);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            44LL,
            (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\TabSetMediatorImpl.h",
            (const char *)(unsigned int)v11);
        v12 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 56LL);
        string = 0LL;
        v13 = v12(a2, &string);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            45LL,
            (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\TabSetMediatorImpl.h",
            (const char *)(unsigned int)v13);
        v10 = string;
      }
      v15 = a3;
      StringRawBuffer = WindowsGetStringRawBuffer(v10, 0LL);
      result = TabCompanionTelemetry::TabWindowSnapped<unsigned int &,_GUID &,unsigned short const *,unsigned int>(
                 &WindowForView,
                 (__int64)&v18,
                 (__int64 *)&StringRawBuffer,
                 &v15);
      if ( string )
        result = WindowsDeleteString(string);
    }
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x32,
             (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\TabSetMediatorImpl.h",
             v9);
  }
  return result;
}
