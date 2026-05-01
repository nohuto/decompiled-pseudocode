/*
 * XREFs of ?StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002BB08
 * Callers:
 *     ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002B7F0 (-ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180020CE8 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?GetActivationId@VoiceAssistantPositionerTelemetry@@CA_KPEAUIUnknown@@@Z @ 0x18007F6C0 (-GetActivationId@VoiceAssistantPositionerTelemetry@@CA_KPEAUIUnknown@@@Z.c)
 *     ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x1800837AC (-GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008EE40 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1801AD14C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::StartActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  RTL_SRWLOCK *v6; // rdi
  PSRWLOCK *p_SRWLock; // rax
  char v8; // bl
  RTL_SRWLOCK *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdi
  char *v12; // rbx
  __int64 v13; // rdi
  DWORD v14; // r14d
  unsigned __int64 v15; // rsi
  __int64 i; // rcx
  _QWORD *v17; // rcx
  const WCHAR *CensoredAumidFromView; // rbx
  const GUID *v19; // r9
  const GUID *v20; // r8
  __int64 v21; // rax
  int v22; // ecx
  void (*v23)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void (*v24)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _QWORD *v25; // rax
  signed __int64 v26; // rdx
  signed __int64 v27; // rax
  bool v28; // [rsp+30h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v31; // [rsp+3Ch] [rbp-C4h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v33; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v34; // [rsp+50h] [rbp-B0h]
  PSRWLOCK SRWLock; // [rsp+58h] [rbp-A8h] BYREF
  PSRWLOCK v36; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 ActivationId; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  PSRWLOCK v40; // [rsp+88h] [rbp-78h]
  void (__stdcall *v41)(PSRWLOCK); // [rsp+90h] [rbp-70h]
  PSRWLOCK v42; // [rsp+98h] [rbp-68h]
  void (__stdcall *v43)(PSRWLOCK); // [rsp+A0h] [rbp-60h]
  RTL_SRWLOCK *v44; // [rsp+A8h] [rbp-58h]
  void (__stdcall *v45)(PSRWLOCK); // [rsp+B0h] [rbp-50h]
  const WCHAR *v46; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+50h] BYREF
  void *v48; // [rsp+160h] [rbp+60h]
  int v49; // [rsp+168h] [rbp+68h]
  int v50; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  DWORD *p_CurrentThreadId; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h]
  const WCHAR *v55; // [rsp+190h] [rbp+90h]
  int v56; // [rsp+198h] [rbp+98h]
  int v57; // [rsp+19Ch] [rbp+9Ch]
  bool *v58; // [rsp+1A0h] [rbp+A0h]
  __int64 v59; // [rsp+1A8h] [rbp+A8h]
  unsigned __int64 *p_ActivationId; // [rsp+1B0h] [rbp+B0h]
  __int64 v61; // [rsp+1B8h] [rbp+B8h]

  CurrentThreadId = 0;
  v6 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
  if ( v6 )
  {
    v9 = v6 + 31;
    AcquireSRWLockExclusive(v9);
    p_SRWLock = &v36;
    v8 = 1;
  }
  else
  {
    p_SRWLock = &SRWLock;
    v8 = 2;
    v9 = 0LL;
  }
  *p_SRWLock = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( SRWLock )
    {
      v40 = SRWLock;
      v41 = ReleaseSRWLockExclusive;
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  if ( (v8 & 1) != 0 && v36 )
  {
    v42 = v36;
    v43 = ReleaseSRWLockExclusive;
    ReleaseSRWLockExclusive(v36);
  }
  v10 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180650618;
    qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
    qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v23);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
    EventActivityIdControl(3u, (LPGUID)(v10 + 8));
  else
    *(_OWORD *)(v10 + 8) = 0LL;
  *(_DWORD *)v10 = 1;
  if ( v9 )
  {
    v44 = v9;
    v45 = ReleaseSRWLockExclusive;
    ReleaseSRWLockExclusive(v9);
  }
  v33 = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v31, &v33) && v31 )
  {
    v33 = qword_180650618;
    qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
    qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v24);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
  }
  v11 = *((_QWORD *)v33 + 1);
  if ( *(_DWORD *)v11 > 5u )
  {
    ActivationId = VoiceAssistantPositionerTelemetry::GetActivationId(a3);
    v28 = a3 != 0LL;
    CensoredAumidFromView = VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(a2);
    v46 = CensoredAumidFromView;
    CurrentThreadId = GetCurrentThreadId();
    v38 = 50331648LL;
    v19 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v20 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    p_ActivationId = &ActivationId;
    v61 = 8LL;
    v58 = &v28;
    v59 = 1LL;
    if ( CensoredAumidFromView )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( CensoredAumidFromView[v21] );
      v22 = 2 * v21 + 2;
    }
    else
    {
      CensoredAumidFromView = &szAgent;
      v22 = 2;
    }
    v55 = CensoredAumidFromView;
    v56 = v22;
    v57 = 0;
    p_CurrentThreadId = &CurrentThreadId;
    v54 = 4LL;
    v51 = &v38;
    v52 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v11 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v48 = &unk_180599746;
    v49 = 121;
    v50 = 1;
    v34 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v11 + 32), &EventDescriptor, v20, v19, 7u, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v12 = (char *)this + 8;
    v13 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_44;
    v14 = GetCurrentThreadId();
    v15 = v14 % 0xAuLL;
    for ( i = *(_QWORD *)(v13 + 8 * v15); i; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)i == v14 )
      {
        v17 = (_QWORD *)(i + 16);
        goto LABEL_26;
      }
    }
    v25 = wil::details::ProcessHeapAlloc(0, 0x18uLL);
    v26 = (signed __int64)v25;
    if ( v25 )
    {
      *(_DWORD *)v25 = v14;
      v25[1] = 0LL;
      v17 = v25 + 2;
      v25[2] = 0LL;
      _m_prefetchw((const void *)(v13 + 8 * v15));
      do
      {
        v27 = *(_QWORD *)(v13 + 8 * v15);
        *(_QWORD *)(v26 + 8) = v27;
      }
      while ( v27 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8 * v15), v26, v27) );
    }
    else
    {
LABEL_44:
      v17 = 0LL;
    }
LABEL_26:
    *(_QWORD *)v12 = v17;
    if ( v17 )
    {
      *((_QWORD *)v12 + 2) = *v17;
      *v17 = v12;
      *((_DWORD *)v12 + 6) = GetCurrentThreadId();
    }
  }
}
