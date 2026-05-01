/*
 * XREFs of ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180256EF0
 * Callers:
 *     wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(unsigned_long_const_&)_::operator() @ 0x180256D60 (wistd--__function--__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(un_ea_180256D60.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D1A (WINRT_WindowsGetStringRawBuffer.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x180256590 (--$Write@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x180256BA0 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x180256BD8 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x180257718 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 *     ?StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180259EC4 (-StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1804E5514 (-SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1804EA1E4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CScreenClippingExperienceManager::CheckAndUpdateHostedAumid(HSTRING *this)
{
  BOOL inited; // eax
  void *v3; // rcx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v5; // rsi
  __int64 v6; // r9
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v8; // rcx
  int started; // eax
  HSTRING *ScreenClippingAUMID; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  __int64 StringRawBuffer; // [rsp+50h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  anonymous_namespace_::GetScreenClippingAUMID(&string);
  Context = 0LL;
  inited = InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  v3 = &`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
  if ( inited && fPending )
  {
    Context = qword_180650690;
    qword_180650690[0] = &ShellScreenClippingLogging::`vftable';
    qword_1806506A8 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650690, qword_1806506A8, v4);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180650690);
  }
  v5 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v5 > 5u )
  {
    StringRawBuffer = (__int64)WINRT_WindowsGetStringRawBuffer(string, 0LL);
    v15 = (__int64)WINRT_WindowsGetStringRawBuffer(this[42], 0LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      (__int64)v5,
      (unsigned __int8 *)dword_18057CB1B,
      0LL,
      v6,
      (const WCHAR **)&v15,
      (const WCHAR **)&StringRawBuffer);
  }
  if ( !string )
    MicrosoftTelemetryAssertTriggeredNoArgs(v3);
  if ( !winrt::operator==((__int64)&string, (__int64)(this + 42)) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_180650690;
      qword_180650690[0] = &ShellScreenClippingLogging::`vftable';
      qword_1806506A8 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650690, qword_1806506A8, v7);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180650690);
    }
    v8 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v8 > 5u )
      tlgWriteTransfer_EventWriteTransfer((__int64)v8, (unsigned __int8 *)dword_18057CA6E, 0LL, 0LL, 2u, &v17);
    winrt::hstring::operator=(this + 42, (winrt::impl **)&string);
    if ( *((_DWORD *)this + 24) == 2 )
    {
      started = CScreenClippingExperienceManager::StartAppClose((CScreenClippingExperienceManager *)this);
      if ( started < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1C8,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)started);
    }
    ScreenClippingAUMID = (HSTRING *)anonymous_namespace_::GetScreenClippingAUMID(&v15);
    CSingleViewShellExperience::SwapAumid((CSingleViewShellExperience *)(this + 7), *ScreenClippingAUMID);
    winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v15);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&string);
  return 0LL;
}
