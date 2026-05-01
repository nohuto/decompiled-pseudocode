/*
 * XREFs of ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002B7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@@Z @ 0x18002AEA8 (-GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU-$IMap@PEAUHSTRING__.c)
 *     ?StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002BB08 (-StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ?Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z @ 0x18002BE80 (-Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801B5928 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1801BED68 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801DAE28 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?SetUnhandledException@?$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x180292204 (-SetUnhandledException@-$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18044E5A4 (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_18044E5A4.c)
 *     ?ReportStopActivity@?$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18045185C (-ReportStopActivity@-$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorT.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180457810 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_180457810.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall VoiceAssistantPositioner::ShouldHandleActivation(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2,
        RTL_SRWLOCK *a3)
{
  HRESULT v5; // eax
  int v6; // edx
  unsigned int v7; // r8d
  HSTRING v8; // rdi
  int v9; // eax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64); // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64); // rcx
  unsigned int v12; // edi
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64); // rcx
  char v15; // bl
  unsigned int v16; // eax
  void *v17; // rbx
  void *v18; // rbx
  HANDLE ProcessHeap; // rax
  void *v20; // rbx
  HANDLE v21; // rax
  void (*v22)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v23; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64); // [rsp+28h] [rbp-D8h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64); // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  PSRWLOCK SRWLock[3]; // [rsp+58h] [rbp-A8h] BYREF
  void **v31; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v32[3]; // [rsp+78h] [rbp-88h] BYREF
  int v33; // [rsp+90h] [rbp-70h]
  int *v34; // [rsp+98h] [rbp-68h]
  int *v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A8h] [rbp-58h] BYREF
  char v37; // [rsp+ACh] [rbp-54h]
  char v38[32]; // [rsp+B0h] [rbp-50h] BYREF
  int v39; // [rsp+D0h] [rbp-30h] BYREF
  const char *v40; // [rsp+D8h] [rbp-28h]
  LPVOID v41; // [rsp+E0h] [rbp-20h]
  char v42; // [rsp+E8h] [rbp-18h]
  __int64 v43; // [rsp+F0h] [rbp-10h]
  char v44[144]; // [rsp+F8h] [rbp-8h] BYREF
  LPVOID lpMem; // [rsp+188h] [rbp+88h]
  __int128 v46; // [rsp+190h] [rbp+90h]
  void *v47; // [rsp+1A0h] [rbp+A0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+1B0h] [rbp+B0h] BYREF
  HSTRING string; // [rsp+1C8h] [rbp+C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  SRWLock[1] = a3;
  v31 = &wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v32[0] = 0LL;
  v32[1] = &v31;
  v32[2] = 0LL;
  v33 = 0;
  v34 = &v39;
  v35 = &v36;
  v36 = 0;
  v37 = 0;
  v42 = 0;
  v39 = 0;
  v40 = "VAPositioner_ShouldHandleActivationActivity";
  v41 = 0LL;
  v43 = 1LL;
  lpMem = 0LL;
  memset_0(v44, 0, sizeof(v44));
  v46 = 0LL;
  v47 = 0LL;
  v31 = &VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::StartActivity(
    (VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *)&v31,
    a2,
    (struct IUnknown *)a3);
  LOBYTE(a2) = 0;
  v24 = 0LL;
  if ( !a3
    || (*(__int64 (__fastcall **)(RTL_SRWLOCK *, GUID *, _QWORD))a3->Ptr)(
         a3,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &v24) < 0 )
  {
    goto LABEL_18;
  }
  v25 = v24;
  if ( v24 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v24)[1])(v24);
  SRWLock[0] = (PSRWLOCK)&v25;
  v28 = v25;
  if ( v25 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v25)[1])(v25);
  string = 0LL;
  v5 = WindowsCreateStringReference(L"IsVoiceActivation", 0x11u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
  }
  else
  {
    v8 = string;
    v26 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    LODWORD(a2) = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropSetMap(&v28, (__int64)&v26);
    if ( (int)a2 < 0 )
      goto LABEL_11;
    v9 = (*(__int64 (__fastcall **)(__int64, HSTRING, int *))(*(_QWORD *)v26 + 64LL))(v26, v8, &v23);
    LODWORD(a2) = v9;
    if ( v9 >= 0 )
    {
      LODWORD(a2) = 0;
      goto LABEL_11;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x94,
    (unsigned int)"onecore\\internal\\shell\\inc\\propertysethelpers.h",
    (const char *)(unsigned int)v9,
    v23);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  if ( (int)a2 < 0 || (LOBYTE(a2) = 1, !(_BYTE)v23) )
    LOBYTE(a2) = 0;
  string = 0LL;
  v10 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v10)[2])(v10);
  }
  v11 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v11)[2])(v11);
  }
LABEL_18:
  VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::Stop(
    (VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *)&v31,
    (bool)a2);
  v12 = (unsigned __int8)a2;
  v13 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v13)[2])(v13);
  }
  v31 = &VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::`vftable';
  if ( !v47 )
    goto LABEL_21;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    &v31,
    SRWLock);
  if ( v47 && *(_DWORD *)v47 == 1 )
  {
    v15 = 1;
  }
  else
  {
    v15 = 0;
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v47);
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v15 )
  {
LABEL_21:
    if ( *v35 == 1 )
    {
      v16 = wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppUsageTelemetry,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException();
      wil::ActivityBase<WindowManagementLogging,1,0,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        &v31,
        v16);
    }
  }
  if ( v47 )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)v47) )
    {
      v17 = v47;
      if ( v47 )
      {
        wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v47 + 8);
        operator delete(v17, (const struct std::nothrow_t *)0x100);
      }
    }
    v47 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v18 = lpMem;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v18);
    }
    lpMem = 0LL;
    *(_QWORD *)&v46 = 0LL;
  }
  if ( v42 )
  {
    v20 = v41;
    v21 = GetProcessHeap();
    HeapFree(v21, 0, v20);
    v42 = 0;
  }
  v41 = 0LL;
  if ( v36 == 1 )
  {
    v36 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_180650618;
      qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
      qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v22);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v38);
  }
  v36 = 3;
  if ( v33 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v32);
  return v12;
}
