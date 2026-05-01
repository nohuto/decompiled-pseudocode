/*
 * XREFs of ?InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180038960
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180032684 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x180032784 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?StartActivity@InitializePosition@ShellPositionerTelemetry@@QEAAXXZ @ 0x180035E88 (-StartActivity@InitializePosition@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800691E4 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006ABA8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180083430 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801B5928 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerManager::InitializePosition(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        struct IApplicationView *a5)
{
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // rdx
  void *v13; // rbx
  HANDLE ProcessHeap; // rax
  void (*v15)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  IUnknown **v16; // [rsp+20h] [rbp-E0h]
  IUnknown *v17; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  void **v20; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v21[3]; // [rsp+68h] [rbp-98h] BYREF
  int v22; // [rsp+80h] [rbp-80h]
  int *v23; // [rsp+88h] [rbp-78h]
  int *v24; // [rsp+90h] [rbp-70h]
  int v25; // [rsp+98h] [rbp-68h] BYREF
  char v26; // [rsp+9Ch] [rbp-64h]
  _BYTE v27[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v28; // [rsp+C0h] [rbp-40h] BYREF
  const char *v29; // [rsp+C8h] [rbp-38h]
  LPVOID lpMem; // [rsp+D0h] [rbp-30h]
  char v31; // [rsp+D8h] [rbp-28h]
  __int64 v32; // [rsp+E0h] [rbp-20h]
  _BYTE v33[144]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v34; // [rsp+178h] [rbp+78h] BYREF
  __int128 v35; // [rsp+180h] [rbp+80h]
  __int64 v36; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v20 = &wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v21[0] = 0LL;
  v21[1] = &v20;
  v21[2] = 0LL;
  v22 = 0;
  v23 = &v28;
  v24 = &v25;
  v25 = 0;
  v26 = 0;
  v31 = 0;
  v28 = 0;
  v29 = "InitializePosition";
  lpMem = 0LL;
  v32 = 1LL;
  v34 = 0LL;
  memset_0(v33, 0, sizeof(v33));
  v35 = 0LL;
  v36 = 0LL;
  v20 = &ShellPositionerTelemetry::InitializePosition::`vftable';
  ShellPositionerTelemetry::InitializePosition::StartActivity((ShellPositionerTelemetry::InitializePosition *)&v20);
  v17 = 0LL;
  v16 = &v17;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, GUID *))(**((_QWORD **)this + 5) + 72LL))(
         *((_QWORD *)this + 5),
         0LL,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 515LL;
  }
  else
  {
    v9 = ShellPositionerManager::HandleActivationRequest(
           (unsigned int *)this - 28,
           0,
           a2,
           v17,
           a3,
           (__int64)a4,
           (int)a5);
    v10 = v9;
    if ( v9 >= 0 )
    {
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v20);
      v10 = 0;
      goto LABEL_4;
    }
    v12 = 516LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v9,
    (int)v16);
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v20 = &ShellPositionerTelemetry::InitializePosition::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v20);
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v36);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)&v34);
  if ( v31 )
  {
    v13 = lpMem;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v13);
    v31 = 0;
  }
  lpMem = 0LL;
  if ( v25 == 1 )
  {
    v25 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_180650618;
      qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
      qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v15);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v27);
  }
  v25 = 3;
  if ( v22 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v21);
  return v10;
}
