/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_8f853f3308fdbebd25aa75747bd09082___ @ 0x18002C930
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x18002C2F0 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002CC44 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002F6D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18003183C (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006ABA8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800712B0 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1800712B0.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180072B90 (--4-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801B5B30 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x1801F8960 (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_8f853f3308fdbebd25aa75747bd09082___(
        _DWORD *a1,
        int *a2)
{
  unsigned int v4; // r15d
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  int v8; // r15d
  _DWORD *v9; // rcx
  void *v11; // rbx
  HANDLE ProcessHeap; // rax
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *v14; // rbx
  HANDLE v15; // rax
  void (*v16)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v17; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v20; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v21; // [rsp+48h] [rbp-B8h]
  int v22; // [rsp+50h] [rbp-B0h]
  char v23; // [rsp+54h] [rbp-ACh]
  char v24; // [rsp+55h] [rbp-ABh]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  void **v26; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v27[3]; // [rsp+68h] [rbp-98h] BYREF
  int v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  int *v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+98h] [rbp-68h] BYREF
  char v32; // [rsp+9Ch] [rbp-64h]
  char v33[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  LPVOID lpMem; // [rsp+D0h] [rbp-30h]
  char v37; // [rsp+D8h] [rbp-28h]
  __int64 v38; // [rsp+E0h] [rbp-20h]
  char v39[144]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v40; // [rsp+178h] [rbp+78h] BYREF
  __int128 v41; // [rsp+180h] [rbp+80h]
  __int64 v42; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FE,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v17);
    CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual((CFramePresentationTelemetry::SetSystemVisual *)(a2 + 4));
    return 2147947423LL;
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v20 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v22 = *a2;
    v23 = *((_BYTE *)a2 + 4);
    v24 = *((_BYTE *)a2 + 5);
    v25 = *((_QWORD *)a2 + 1);
    v26 = &wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v27[1] = &v26;
    v21 = a1;
    v27[0] = 0LL;
    v27[2] = 0LL;
    v28 = 0;
    v29 = 0LL;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v27);
    v31 = 0;
    v30 = &v31;
    v32 = 0;
    v37 = 0;
    v34 = 0;
    v35 = 0LL;
    lpMem = 0LL;
    v38 = 1LL;
    v40 = 0LL;
    memset_0(v39, 0, sizeof(v39));
    v42 = 0LL;
    v41 = 0LL;
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
      &v26,
      a2 + 4);
    v4 = a1[12];
    v26 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    v5 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    v7 = 0LL;
    if ( v5 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v5);
      v6[2] = 0LL;
      if ( v6 + 2 != &v20 )
      {
        v6[2] = v20;
        v20 = 0LL;
      }
      v6[3] = v21;
      *((_DWORD *)v6 + 8) = v22;
      *((_BYTE *)v6 + 36) = v23;
      *((_BYTE *)v6 + 37) = v24;
      v6[5] = v25;
      wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        v6 + 6,
        &v26);
      v6[6] = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
      *v6 = off_180500200;
      v7 = v6;
    }
    v8 = SHTaskPoolQueueTask(3LL, 2LL, v4, 0LL, v7, 0LL);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
    v26 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v26);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v42);
    wil::details::shared_buffer::reset((wil::details::shared_buffer *)&v40);
    if ( v37 )
    {
      v11 = lpMem;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v11);
      v37 = 0;
    }
    lpMem = 0LL;
    if ( v31 == 1 )
    {
      v31 = 2;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
      {
        Context = qword_1806504F0;
        qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
        qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v13);
        InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
      }
      _tlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)Context + 1), v33);
    }
    v31 = 3;
    if ( v28 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v27);
    v9 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v8 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    *((_QWORD *)a2 + 2) = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(a2 + 4);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a2 + 80);
    wil::details::shared_buffer::reset((wil::details::shared_buffer *)(a2 + 74));
    if ( *((_BYTE *)a2 + 136) )
    {
      v14 = (void *)*((_QWORD *)a2 + 16);
      v15 = GetProcessHeap();
      HeapFree(v15, 0, v14);
      *((_BYTE *)a2 + 136) = 0;
    }
    *((_QWORD *)a2 + 16) = 0LL;
    if ( a2[18] == 1 )
    {
      a2[18] = 2;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
      {
        Context = qword_1806504F0;
        qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
        qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v16);
        InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
      }
      _tlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)Context + 1), a2 + 20);
    }
    a2[18] = 3;
    if ( a2[12] )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 6));
    return (unsigned int)v8;
  }
}
