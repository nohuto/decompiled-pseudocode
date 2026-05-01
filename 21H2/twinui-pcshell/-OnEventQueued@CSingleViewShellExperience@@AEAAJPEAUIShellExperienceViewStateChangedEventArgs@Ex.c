/*
 * XREFs of ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180052670
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180032E64 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800529BC (-StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180052E44 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180052ED0 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??$OnEventQueued_EventName@PEBGPEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SAX$$QEAPEBG00@Z @ 0x180052FF4 (--$OnEventQueued_EventName@PEBGPEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SAX$$QEAPEB.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180053070 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflector_ea_180053070.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006ABA8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801B5AD8 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::OnEventQueued(
        HSTRING *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v10; // rdx
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v12; // [rsp+20h] [rbp-E0h]
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-B8h] BYREF
  PCWSTR v17[2]; // [rsp+50h] [rbp-B0h] BYREF
  void **v18; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[3]; // [rsp+68h] [rbp-98h] BYREF
  int v20; // [rsp+80h] [rbp-80h]
  int *v21; // [rsp+88h] [rbp-78h]
  int *v22; // [rsp+90h] [rbp-70h]
  int v23; // [rsp+98h] [rbp-68h] BYREF
  char v24; // [rsp+9Ch] [rbp-64h]
  _BYTE v25[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v26; // [rsp+C0h] [rbp-40h] BYREF
  const char *v27; // [rsp+C8h] [rbp-38h]
  __int64 v28; // [rsp+D0h] [rbp-30h]
  char v29; // [rsp+D8h] [rbp-28h]
  __int64 v30; // [rsp+E0h] [rbp-20h]
  _BYTE v31[144]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v32; // [rsp+178h] [rbp+78h] BYREF
  __int128 v33; // [rsp+180h] [rbp+80h]
  __int64 v34; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v5 = WindowsGetStringRawBuffer(this[1], 0LL);
  v19[0] = 0LL;
  v19[1] = &v18;
  v19[2] = 0LL;
  v20 = 0;
  v21 = &v26;
  v22 = &v23;
  v23 = 0;
  v24 = 0;
  v29 = 0;
  v26 = 0;
  v27 = "OnEventQueued";
  v28 = 0LL;
  v30 = 1LL;
  v32 = 0LL;
  memset_0(v31, 0, sizeof(v31));
  v33 = 0LL;
  v34 = 0LL;
  v18 = &SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  SingleViewExperienceTelemetry::OnEventQueued::StartActivity(
    (SingleViewExperienceTelemetry::OnEventQueued *)&v18,
    v5,
    StringRawBuffer);
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, HSTRING *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    Context = (LPVOID)WindowsGetStringRawBuffer(string, 0LL);
    *(_QWORD *)fPending = WindowsGetStringRawBuffer(this[2], 0LL);
    v17[0] = WindowsGetStringRawBuffer(this[1], 0LL);
    SingleViewExperienceTelemetry::OnEventQueued::OnEventQueued_EventName<unsigned short const *,unsigned short const *,unsigned short const *>(
      v17,
      fPending,
      &Context);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 72LL))(
           a2,
           &v15);
    v7 = v8;
    if ( v8 < 0 )
    {
      v10 = 671LL;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *, HSTRING, __int64))(*(_QWORD *)this[11] + 88LL))(
             this[11],
             this,
             string,
             v15);
      v7 = v8;
      if ( v8 >= 0 )
      {
        wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v18);
        v7 = 0;
LABEL_5:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
        goto LABEL_6;
      }
      v10 = 672LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v8,
      v12);
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x29A,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v6,
    v12);
LABEL_6:
  WindowsDeleteString(string);
  string = 0LL;
  v18 = &SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v18);
  wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v34);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)&v32);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)&v26);
  if ( v23 == 1 )
  {
    v23 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      Context = qword_180650690;
      qword_180650690[0] = &ShellScreenClippingLogging::`vftable';
      qword_1806506A8 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650690, qword_1806506A8, v11);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180650690);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v25);
  }
  v23 = 3;
  if ( v20 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v19);
  return v7;
}
