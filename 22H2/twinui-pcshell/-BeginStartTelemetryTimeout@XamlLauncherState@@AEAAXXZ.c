/*
 * XREFs of ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1800141AC
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180014B50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800143D0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180058460 (-StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x180071584 (-IsEnabled@StartWindowTelemetry@@SA_NE_K@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802178DC (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall XamlLauncherState::BeginStartTelemetryTimeout(struct _TP_TIMER **pv)
{
  struct _TP_TIMER **v1; // rdi
  PTP_TIMER ThreadpoolTimer; // rax
  const char *v4; // r9
  struct _TP_TIMER *v5; // rcx
  struct _TP_TIMER **v6; // rdi
  PTP_TIMER v7; // rax
  const char *v8; // r9
  struct _TP_TIMER *v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // cl
  struct _TP_TIMER **v12; // rdi
  PTP_TIMER v13; // rax
  const char *v14; // r9
  struct _TP_TIMER *v15; // rcx
  struct _TP_TIMER **v16; // rdi
  PTP_TIMER v17; // rax
  const char *v18; // r9
  struct _TP_TIMER *v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v1 = pv + 115;
  if ( !pv[115] )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_2216b6773a5e063d18d5c04029dbe682_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      ThreadpoolTimer);
    v5 = *v1;
    if ( *v1
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x45C,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v4),
          (v5 = *v1) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)-20000000LL;
      SetThreadpoolTimer(v5, &pftDueTime, 0, 0x3E8u);
    }
  }
  v6 = pv + 116;
  if ( !pv[116] )
  {
    v7 = CreateThreadpoolTimer(lambda_7d4110d78cc01a05f5b707b296dc697f_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      pv + 116,
      v7);
    v9 = *v6;
    if ( *v6
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x471,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v8),
          (v9 = *v6) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)(-10000000LL * *((unsigned int *)pv + 17));
      SetThreadpoolTimer(v9, &pftDueTime, 0, 0x3E8u);
      if ( StartWindowTelemetry::IsEnabled(v11, v10) )
        XamlLauncherState::StartTrackingCpuUsageOfCriticalProcesses((XamlLauncherState *)pv);
    }
  }
  v12 = pv + 117;
  if ( !pv[117] )
  {
    v13 = CreateThreadpoolTimer(lambda_dbd9fe4bd83f68f5aca5f168865b6025_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      pv + 117,
      v13);
    v15 = *v12;
    if ( *v12
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x48C,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v14),
          (v15 = *v12) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)-100000000LL;
      SetThreadpoolTimer(v15, &pftDueTime, 0, 0x3E8u);
    }
  }
  v16 = pv + 118;
  if ( !pv[118] )
  {
    v17 = CreateThreadpoolTimer(lambda_3497390cd098d46010ad730f30d1e158_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      pv + 118,
      v17);
    v19 = *v16;
    if ( *v16
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x4A1,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v18),
          (v19 = *v16) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)-300000000LL;
      SetThreadpoolTimer(v19, &pftDueTime, 0, 0x3E8u);
    }
  }
}
