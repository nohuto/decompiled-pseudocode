/*
 * XREFs of ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18002F260
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180013C78 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180019D40 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002F6D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18002F7D4 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18002F840 (-_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VI.c)
 *     ?_ComputeDesiredApplicationRect@CFrameApplicationPresentation@@AEAAJPEAUtagRECT@@@Z @ 0x18002FB40 (-_ComputeDesiredApplicationRect@CFrameApplicationPresentation@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005BF90 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006EE88 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008EE20 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801B5928 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801C1340 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::ReconcileApplicationViewState(
        CFrameApplicationPresentation *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  const WCHAR *v4; // rbx
  __int64 v5; // rdi
  int v6; // edi
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  int v10; // r10d
  int v11; // r11d
  __int128 v12; // xmm3
  __int128 v13; // xmm2
  __int64 v14; // xmm1_8
  int v15; // eax
  volatile signed __int32 *v16; // rdx
  const GUID *v18; // r9
  __int64 v19; // rcx
  int v20; // eax
  void (*v21)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void (*v22)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char v23; // bl
  int v24; // eax
  __int64 v25; // rdx
  void *v26; // rbx
  void *v27; // rbx
  HANDLE ProcessHeap; // rax
  void *v29; // rbx
  HANDLE v30; // rax
  void (*v31)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v33; // [rsp+34h] [rbp-CCh] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-C8h] BYREF
  int v35; // [rsp+3Ch] [rbp-C4h] BYREF
  WINBOOL v36; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID v38; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v39; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-98h] BYREF
  PSRWLOCK SRWLock; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  __int128 v44; // [rsp+88h] [rbp-78h] BYREF
  __int128 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  int v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  const WCHAR *v49; // [rsp+C0h] [rbp-40h]
  struct tagRECT rc; // [rsp+C8h] [rbp-38h] BYREF
  void **v51; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v52[3]; // [rsp+E8h] [rbp-18h] BYREF
  int v53; // [rsp+100h] [rbp+0h]
  int *v54; // [rsp+108h] [rbp+8h]
  int *v55; // [rsp+110h] [rbp+10h]
  int v56; // [rsp+118h] [rbp+18h] BYREF
  char v57; // [rsp+11Ch] [rbp+1Ch]
  GUID v58[2]; // [rsp+120h] [rbp+20h] BYREF
  int v59; // [rsp+140h] [rbp+40h] BYREF
  const char *v60; // [rsp+148h] [rbp+48h]
  LPVOID v61; // [rsp+150h] [rbp+50h]
  char v62; // [rsp+158h] [rbp+58h]
  __int64 v63; // [rsp+160h] [rbp+60h]
  __int128 v64; // [rsp+168h] [rbp+68h]
  __int128 v65; // [rsp+178h] [rbp+78h]
  __int128 v66; // [rsp+188h] [rbp+88h]
  __int128 v67; // [rsp+198h] [rbp+98h]
  __int128 v68; // [rsp+1A8h] [rbp+A8h]
  __int128 v69; // [rsp+1B8h] [rbp+B8h]
  __int128 v70; // [rsp+1C8h] [rbp+C8h]
  __int128 v71; // [rsp+1D8h] [rbp+D8h]
  __int128 v72; // [rsp+1E8h] [rbp+E8h]
  LPVOID lpMem; // [rsp+1F8h] [rbp+F8h]
  __int128 v74; // [rsp+200h] [rbp+100h]
  void *v75; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+220h] [rbp+120h] BYREF
  void *v77; // [rsp+230h] [rbp+130h]
  int v78; // [rsp+238h] [rbp+138h]
  int v79; // [rsp+23Ch] [rbp+13Ch]
  __int64 *v80; // [rsp+240h] [rbp+140h]
  __int64 v81; // [rsp+248h] [rbp+148h]
  DWORD *p_CurrentThreadId; // [rsp+250h] [rbp+150h]
  __int64 v83; // [rsp+258h] [rbp+158h]
  const WCHAR *v84; // [rsp+260h] [rbp+160h]
  int v85; // [rsp+268h] [rbp+168h]
  int v86; // [rsp+26Ch] [rbp+16Ch]

  *(_OWORD *)a2 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_OWORD *)a2 + 2) = 0LL;
  v52[0] = 0LL;
  v52[1] = &v51;
  v52[2] = 0LL;
  v53 = 0;
  v54 = &v59;
  v55 = &v56;
  v56 = 0;
  v57 = 0;
  v62 = 0;
  v59 = 0;
  v60 = "ReconcileApplicationViewState";
  v61 = 0LL;
  v63 = 1LL;
  lpMem = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v51 = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  v4 = (const WCHAR *)*((_QWORD *)this + 75);
  v48 = 0LL;
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
  if ( **((_DWORD **)Context + 1) > 5u )
    EventActivityIdControl(3u, v58);
  else
    v58[0] = 0LL;
  v56 = 1;
  v38 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v33, &v38) && v33 )
  {
    v38 = qword_1806504F0;
    qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v22);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
  }
  v5 = *((_QWORD *)v38 + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v49 = v4;
    CurrentThreadId = GetCurrentThreadId();
    v41 = 0LL;
    v18 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v51);
    if ( v4 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v4[v19] );
      v20 = 2 * v19 + 2;
    }
    else
    {
      v4 = &szAgent;
      v20 = 2;
    }
    v84 = v4;
    v85 = v20;
    v86 = 0;
    p_CurrentThreadId = &CurrentThreadId;
    v83 = 4LL;
    v80 = &v41;
    v81 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v77 = &unk_180573A51;
    v78 = 80;
    v79 = 1;
    v40 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, (LPCGUID)(v55 + 2), v18, 5u, &UserData);
  }
  if ( !v53 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v52);
  v6 = CFrameApplicationPresentation::_ComputeDesiredApplicationRect(this, &rc);
  if ( v6 >= 0 )
  {
    v6 = CFrameApplicationPresentation::_ComputeApplicationViewData(this, &rc, (struct APPLICATION_VIEW_DATA *)&v44);
    if ( v6 >= 0 )
    {
      if ( !ImmersiveApplicationLayout::AreAppViewDataEqual(
              (CFrameApplicationPresentation *)((char *)this + 168),
              (const struct APPLICATION_VIEW_DATA *)&v44,
              (const struct APPLICATION_VIEW_DATA *)(unsigned int)(*((_DWORD *)this + 36) - *((_DWORD *)this + 34)))
        && v9 == v8
        && v11 == v10 )
      {
        *((_DWORD *)a2 + 11) |= 1u;
      }
      v12 = v44;
      *(_OWORD *)v7 = v44;
      v13 = v45;
      *(_OWORD *)(v7 + 16) = v45;
      v14 = v46;
      *(_QWORD *)(v7 + 32) = v46;
      v15 = v47;
      *(_DWORD *)(v7 + 40) = v47;
      *(struct tagRECT *)((char *)this + 136) = rc;
      *(_OWORD *)a2 = v12;
      *((_OWORD *)a2 + 1) = v13;
      *((_QWORD *)a2 + 4) = v14;
      *((_DWORD *)a2 + 10) = v15;
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v51, (unsigned int)v6);
  v51 = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  v16 = (volatile signed __int32 *)v75;
  if ( !v75 )
    goto LABEL_17;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v51,
    &SRWLock);
  v16 = (volatile signed __int32 *)v75;
  if ( v75 && *(_DWORD *)v75 == 1 )
  {
    v23 = 1;
  }
  else
  {
    v23 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v75);
    v16 = (volatile signed __int32 *)v75;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v16 = (volatile signed __int32 *)v75;
  }
  if ( v23 )
  {
LABEL_17:
    if ( *v55 == 1 )
    {
      v24 = v55[21];
      v35 = v24;
      v25 = 2147942974LL;
      if ( v24 < 0 )
        v25 = (unsigned int)v24;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v55,
        v25,
        &v35);
      ((void (__fastcall *)(void ***))v51[1])(&v51);
      v16 = (volatile signed __int32 *)v75;
    }
  }
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16, 0xFFFFFFFF) == 1 )
    {
      v26 = v75;
      if ( v75 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)v75 + 2);
        operator delete(v26, (const struct std::nothrow_t *)0x100);
      }
    }
    v75 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v27 = lpMem;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v27);
    }
    lpMem = 0LL;
    *(_QWORD *)&v74 = 0LL;
  }
  if ( v62 )
  {
    v29 = v61;
    v30 = GetProcessHeap();
    HeapFree(v30, 0, v29);
    v62 = 0;
  }
  v61 = 0LL;
  if ( v56 == 1 )
  {
    v56 = 2;
    v39 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v36, &v39) && v36 )
    {
      v39 = qword_1806504F0;
      qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v31);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)v39 + 1), v58);
  }
  v56 = 3;
  if ( v53 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v52);
  return (unsigned int)v6;
}
