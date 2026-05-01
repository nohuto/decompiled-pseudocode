/*
 * XREFs of _anonymous_namespace_::GetScreenClippingAUMID @ 0x180257718
 * Callers:
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180256EF0 (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180259238 (-RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180075210 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18008CD70 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D1A (WINRT_WindowsGetStringRawBuffer.c)
 *     ??4hstring@winrt@@QEAAAEAU01@QEBG@Z @ 0x18009B9BC (--4hstring@winrt@@QEAAAEAU01@QEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING *__fastcall anonymous_namespace_::GetScreenClippingAUMID(HSTRING *a1)
{
  HSTRING *v2; // rcx
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v4; // rdi
  __int64 v5; // r9
  HSTRING *fPending; // [rsp+50h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+10h] BYREF
  __int64 StringRawBuffer; // [rsp+60h] [rbp+18h] BYREF

  fPending = a1;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
  winrt::hstring::operator=(v2, L"MicrosoftWindows.Client.CBS_cw5n1h2txyewy!ScreenClipping");
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    Context = qword_180650690;
    qword_180650690[0] = &ShellScreenClippingLogging::`vftable';
    qword_1806506A8 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650690, qword_1806506A8, v3);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180650690);
  }
  v4 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v4 > 5u )
  {
    StringRawBuffer = (__int64)WINRT_WindowsGetStringRawBuffer(*a1, 0LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (__int64)v4,
      (unsigned __int8 *)dword_18057CC17,
      0LL,
      v5,
      (const WCHAR **)&StringRawBuffer);
  }
  return a1;
}
