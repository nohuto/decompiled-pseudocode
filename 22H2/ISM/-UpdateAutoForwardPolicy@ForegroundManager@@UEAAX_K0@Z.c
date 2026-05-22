/*
 * XREFs of ?UpdateAutoForwardPolicy@ForegroundManager@@UEAAX_K0@Z @ 0x180013E60
 * Callers:
 *     ?UnregisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x180005110 (-UnregisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 *     ?RegisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800141B0 (-RegisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180036EB0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18003BC9C (atexit.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x180047070 (-find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA-AV-$com_ptr_t@VActivatableEntityBamoPri.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18008701C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ForegroundManager::UpdateAutoForwardPolicy(ForegroundManager *this, __int64 a2, __int64 a3)
{
  int v6; // r8d
  int v7; // r9d
  _QWORD *v8; // rdi
  __int64 i; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx
  DWORD CurrentThreadId; // eax
  const char *v14; // r9
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  void (__fastcall *v21)(__int64, __int64); // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp-69h] BYREF
  __int64 v25; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v26[8]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v27[14]; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  WINBOOL fPending; // [rsp+100h] [rbp+67h] BYREF
  __int64 v30; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v31; // [rsp+110h] [rbp+77h] BYREF
  LPVOID Context; // [rsp+118h] [rbp+7Fh] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180209518;
    qword_180209518[0] = &RawInputProvidersContinuousTracing::`vftable';
    qword_180209530 = (struct _tlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)qword_180209518,
      qword_180209530,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))InputTraceLogging::Callback);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_180209518);
  }
  if ( **((_DWORD **)Context + 1) > 4u && (unsigned __int8)tlgKeywordOn(*((_QWORD *)Context + 1), 0x8000LL) )
  {
    v24 = a3;
    v25 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v6,
      (unsigned int)&unk_1801CED4B,
      v6,
      v7,
      (__int64)&v25,
      (__int64)&v24);
  }
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 20) + 8LL) + 24LL))(*((_QWORD *)this + 20) + 8LL);
  for ( i = 0LL; (unsigned int)i < (unsigned int)((__int64)(v8[8] - v8[7]) >> 3); i = (unsigned int)(i + 1) )
  {
    v10 = *(_QWORD *)(v8[4] + 32LL);
    if ( *(int *)(v10 + 8) <= 0 )
      v11 = 0LL;
    else
      v11 = *(_QWORD *)(v10 + 16);
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
    CurrentThreadId = GetCurrentThreadId();
    if ( *(_DWORD *)(v12 + 168) != CurrentThreadId && *(_DWORD *)(v12 + 24) != CurrentThreadId )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x63D,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v14);
      JUMPOUT(0x18001419FLL);
    }
    v16 = v8[7];
    if ( (unsigned int)i >= (unsigned __int64)((v8[8] - v16) >> 3) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x49,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoList.inl",
        v14);
      __debugbreak();
    }
    v17 = *(_QWORD *)(v16 + 8 * i) + 8LL;
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17) != a3
      && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 40LL))(v17) == a2 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 48LL))(v17, 0LL);
    }
  }
  v26[0] = off_1801B3C40;
  v26[1] = a2;
  v26[7] = v26;
  ActivationWatcherBamoPrincipal::find_and_return_if(*((_QWORD *)this + 20), &v30, v26);
  v27[0] = off_1801B3C40;
  v27[1] = a3;
  v27[7] = v27;
  ActivationWatcherBamoPrincipal::find_and_return_if(*((_QWORD *)this + 20), &v31, v27);
  v18 = v31;
  v19 = v30;
  if ( v31 && v30 )
  {
    v20 = v31 + 8;
    v21 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v31 + 8) + 48LL);
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v30 + 8) + 24LL))(v30 + 8);
    v21(v20, v22);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v30 + 8) + 104LL))(v30 + 8) )
    {
      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v31 + 8) + 56LL))(v31 + 8);
      ConfigureActivationObject(v23, 0LL, 4LL);
    }
    v18 = v31;
    v19 = v30;
  }
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v19 = v30;
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
}
