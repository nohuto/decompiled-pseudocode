/*
 * XREFs of ?RegisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800141B0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180036EB0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18003BC9C (atexit.c)
 *     ?FromCookie@ActivationControllerBamoProxy@@SA?AV?$com_ptr_t@VBamoActivationControllerProxy@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x180046F38 (-FromCookie@ActivationControllerBamoProxy@@SA-AV-$com_ptr_t@VBamoActivationControllerProxy@@Uerr.c)
 *     ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x180047070 (-find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA-AV-$com_ptr_t@VActivatableEntityBamoPri.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x180104640 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ForegroundManager::RegisterActivationController(
        ForegroundManager *this,
        struct ActivationControllerBamoProxy *a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // r13
  __int64 v8; // rbx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // [rsp+40h] [rbp-39h] BYREF
  __int64 v17; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v18[16]; // [rsp+50h] [rbp-29h] BYREF
  __int64 fPending; // [rsp+E0h] [rbp+67h] BYREF
  LPVOID Context; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int64 v21; // [rsp+F0h] [rbp+77h] BYREF
  unsigned __int64 v22; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 56LL))((char *)a2 + 8);
  v5 = *((unsigned int *)a2 + 10)
     + ((unsigned __int64)*(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 4) + 16LL)
                                                                              + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 4)
                                                                                                + 16LL))
                                          + 36) << 32);
  v6 = (__int64 *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 48LL))((char *)a2 + 8);
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 40LL))((char *)a2 + 8);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
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
    v21 = v4;
    v22 = v5;
    v16 = *v6;
    v17 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v14,
      (unsigned int)&unk_1801CEC65,
      v14,
      v15,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v22,
      (__int64)&v21);
  }
  v8 = *((_QWORD *)this + 20);
  v21 = *((unsigned int *)a2 + 10)
      + ((unsigned __int64)*(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 4) + 16LL)
                                                                               + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 4)
                                                                                                 + 16LL))
                                           + 36) << 32);
  v18[0] = off_1801B08B0;
  v18[1] = &v21;
  v18[7] = v18;
  ActivationWatcherBamoPrincipal::find_and_return_if(v8, &Context, v18);
  v9 = Context;
  if ( Context )
  {
    ActivationControllerBamoProxy::FromCookie(&fPending, v21);
    v10 = fPending;
    if ( fPending )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD *))(v9[1] + 104LL))(v9 + 1);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(fPending + 8) + 32LL))(fPending + 8, v11);
      v10 = fPending;
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v9 = Context;
  }
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
  v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 56LL))((char *)a2 + 8);
  v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 40LL))((char *)a2 + 8);
  ForegroundManager::UpdateAutoForwardPolicy(this, v13, v12);
}
