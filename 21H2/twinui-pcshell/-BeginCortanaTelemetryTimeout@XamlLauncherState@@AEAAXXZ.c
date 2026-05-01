/*
 * XREFs of ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1803A3060
 * Callers:
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1803A5E50 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1803A6710 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800140B4 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_1800140B4.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800143D0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1800147C4 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_1800147C4.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180217A8C (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x18039AC84 (--0CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x18039B0B8 (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803A2FE0 (--4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StartActivity@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ @ 0x1803A60B4 (-StartActivity@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ.c)
 */

void __fastcall XamlLauncherState::BeginCortanaTelemetryTimeout(char *pv)
{
  struct _TP_TIMER **v1; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v4; // r9
  struct _TP_TIMER *v5; // rcx
  struct _FILETIME pftDueTime; // [rsp+28h] [rbp-E0h] BYREF
  volatile signed __int32 *v7[40]; // [rsp+38h] [rbp-D0h] BYREF
  volatile signed __int32 *v8[40]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  v1 = (struct _TP_TIMER **)(pv + 960);
  if ( !*((_QWORD *)pv + 120) )
  {
    StartWindowTelemetry::CortanaLauncherInvokeActivity::CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v8);
    if ( **((_DWORD **)pv + 82) != 1 )
    {
      wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v7,
        (__int64)"CortanaLauncherInvokeActivity");
      v7[0] = (volatile signed __int32 *)&StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
      StartWindowTelemetry::CortanaLauncherInvokeActivity::StartActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v7);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::operator=((__int64)v8, (__int64)v7);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity(v7);
    }
    ThreadpoolTimer = CreateThreadpoolTimer(
                        (PTP_TIMER_CALLBACK)lambda_60cb15bc49b56a4841a9ce291f1dd20e_::_lambda_invoker_cdecl_,
                        pv,
                        0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      ThreadpoolTimer);
    v5 = *v1;
    if ( *v1
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            1273LL,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v4),
          (v5 = (struct _TP_TIMER *)*((_QWORD *)pv + 120)) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)(-10000000LL * *((unsigned int *)pv + 17));
      SetThreadpoolTimer(v5, &pftDueTime, 0, 0x3E8u);
    }
    if ( *v8[6] == 1 )
    {
      wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v7,
        (__int64)v8,
        0);
      v7[0] = (volatile signed __int32 *)&StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
      StartWindowTelemetry::CortanaLauncherInvokeActivity::operator=((__int64)(pv + 608), (__int64)v7);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity(v7);
    }
    StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity(v8);
  }
}
