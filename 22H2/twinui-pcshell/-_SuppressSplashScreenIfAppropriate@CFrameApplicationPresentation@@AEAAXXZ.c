/*
 * XREFs of ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x18002FDA8
 * Callers:
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x180085350 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x18000FFA4 (-_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800300EC (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180030134 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004EB68 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006ABA8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z @ 0x18006BF14 (-StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180070A9C (--4-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180081D84 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_180081D84.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801D64CC (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F9684 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F9708 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindow.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1801F9CD4 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 */

void __fastcall CFrameApplicationPresentation::_SuppressSplashScreenIfAppropriate(
        CFrameApplicationPresentation *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r15d
  int v7; // eax
  unsigned int v8; // ebx
  HWND v9; // r8
  const unsigned __int16 *v10; // rdx
  bool v11; // zf
  __int64 v12; // r8
  void *v13; // rbx
  HANDLE ProcessHeap; // rax
  void (*v15)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *v16; // rbx
  HANDLE v17; // rax
  void (*v18)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *v19; // rbx
  HANDLE v20; // rax
  void (*v21)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  unsigned int v22; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  void **v25; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v26[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+60h] [rbp-A0h]
  int *v28; // [rsp+68h] [rbp-98h]
  int *v29; // [rsp+70h] [rbp-90h]
  int v30; // [rsp+78h] [rbp-88h] BYREF
  char v31; // [rsp+7Ch] [rbp-84h]
  _BYTE v32[32]; // [rsp+80h] [rbp-80h] BYREF
  int v33; // [rsp+A0h] [rbp-60h] BYREF
  const char *v34; // [rsp+A8h] [rbp-58h]
  LPVOID v35; // [rsp+B0h] [rbp-50h]
  char v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  _BYTE v38[144]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v39; // [rsp+158h] [rbp+58h] BYREF
  __int128 v40; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+170h] [rbp+70h] BYREF
  void **v42; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v43[24]; // [rsp+188h] [rbp+88h] BYREF
  int v44; // [rsp+1A0h] [rbp+A0h]
  int v45; // [rsp+1B8h] [rbp+B8h]
  _BYTE v46[48]; // [rsp+1C0h] [rbp+C0h] BYREF
  LPVOID v47; // [rsp+1F0h] [rbp+F0h]
  char v48; // [rsp+1F8h] [rbp+F8h]
  _BYTE v49[24]; // [rsp+298h] [rbp+198h] BYREF
  _BYTE v50[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  void **v51; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v52[24]; // [rsp+2C8h] [rbp+1C8h] BYREF
  int v53; // [rsp+2E0h] [rbp+1E0h]
  int v54; // [rsp+2F8h] [rbp+1F8h]
  _BYTE v55[48]; // [rsp+300h] [rbp+200h] BYREF
  LPVOID lpMem; // [rsp+330h] [rbp+230h]
  char v57; // [rsp+338h] [rbp+238h]
  _BYTE v58[24]; // [rsp+3D8h] [rbp+2D8h] BYREF
  _BYTE v59[16]; // [rsp+3F0h] [rbp+2F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+438h] [rbp+338h]

  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
    a2,
    a3);
  if ( *((_DWORD *)this + 56) != 1 || !*((_BYTE *)this + 556) || *((_DWORD *)this + 57) )
    return;
  if ( !*((_BYTE *)this + 557) )
  {
    LOBYTE(v4) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::GetImpl'::`2'::impl,
      v4);
  }
  v5 = **((_QWORD **)this + 13);
  if ( v5 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) )
  {
    v6 = 2;
  }
  else
  {
    if ( !*((_BYTE *)this + 557) )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps>::GetImpl'::`2'::impl,
        0LL);
      goto LABEL_42;
    }
    v6 = 3;
  }
  v7 = CFrameApplicationPresentation::_QueueUnsuppressSplashScreenAfterTimeout(this);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x78C,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v7,
      v22);
LABEL_42:
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen((char *)this + 224, 0LL);
    return;
  }
  v8 = dword_18064ED90;
  v26[1] = &v25;
  *((_DWORD *)this + 57) = 1;
  v28 = &v33;
  v26[0] = 0LL;
  v29 = &v30;
  v26[2] = 0LL;
  v34 = "SplashScreenSuppressed";
  v27 = 0;
  v30 = 0;
  v31 = 0;
  v36 = 0;
  v33 = 0;
  v35 = 0LL;
  v37 = 1LL;
  v39 = 0LL;
  memset_0(v38, 0, sizeof(v38));
  v9 = (HWND)*((_QWORD *)this + 16);
  v10 = (const unsigned __int16 *)*((_QWORD *)this + 75);
  v25 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  v40 = 0LL;
  v41 = 0LL;
  CFramePresentationTelemetry::SplashScreenSuppressed::StartActivity(
    (CFramePresentationTelemetry::SplashScreenSuppressed *)&v25,
    v10,
    v9,
    v6,
    v8);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    &v42,
    &v25,
    0LL);
  v11 = *((_DWORD *)this + 66) == 0;
  v42 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  LOBYTE(v12) = !v11;
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    &v51,
    (char *)this + 232,
    v12);
  v51 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (char *)this + 232,
    &v42);
  v51 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v51);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v59);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v58);
  if ( v57 )
  {
    v13 = lpMem;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v13);
    v57 = 0;
  }
  lpMem = 0LL;
  if ( v54 == 1 )
  {
    v54 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1806504F0;
      qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v15);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
    }
    _tlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)Context + 1), v55);
  }
  v54 = 3;
  if ( v53 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v52);
  v42 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v42);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v50);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v49);
  if ( v48 )
  {
    v16 = v47;
    v17 = GetProcessHeap();
    HeapFree(v17, 0, v16);
    v48 = 0;
  }
  v47 = 0LL;
  if ( v45 == 1 )
  {
    v45 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1806504F0;
      qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v18);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
    }
    _tlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)Context + 1), v46);
  }
  v45 = 3;
  if ( v44 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v43);
  v25 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v25);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v41);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)&v39);
  if ( v36 )
  {
    v19 = v35;
    v20 = GetProcessHeap();
    HeapFree(v20, 0, v19);
    v36 = 0;
  }
  v35 = 0LL;
  if ( v30 == 1 )
  {
    v30 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1806504F0;
      qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v21);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
    }
    _tlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)Context + 1), v32);
  }
  v30 = 3;
  if ( v27 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v26);
}
