/*
 * XREFs of ?StopActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1800321C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18001DE3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180031E38 (-zInternalStop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180031E80 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x1801B495C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801B495C.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnPropertyChanged::StopActivity(
        SingleViewExperienceTelemetry::OnPropertyChanged *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  RTL_SRWLOCK *v5; // rcx
  _DWORD *v6; // rdi
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v8; // rcx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r8
  void (*v12)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  int v15; // edx
  int v16; // [rsp+A0h] [rbp-80h] BYREF
  int v17; // [rsp+A4h] [rbp-7Ch] BYREF
  __int64 v18; // [rsp+A8h] [rbp-78h] BYREF
  LPVOID v19; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v29[6]; // [rsp+100h] [rbp-20h] BYREF
  RTL_SRWLOCK *fPending; // [rsp+140h] [rbp+20h] BYREF
  __int64 v31; // [rsp+148h] [rbp+28h] BYREF
  __int64 v32; // [rsp+150h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+158h] [rbp+38h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v19 = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &v19)
      && (_DWORD)fPending )
    {
      v19 = qword_180650690;
      qword_180650690[0] = &ShellScreenClippingLogging::`vftable';
      qword_1806506A8 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650690, qword_1806506A8, v7);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180650690);
    }
    v8 = (_DWORD *)*((_QWORD *)v19 + 1);
    if ( *v8 > 5u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
    {
      v10 = *((_QWORD *)v4 + 14);
      v11 = *((_QWORD *)this + 6);
      v20 = 0LL;
      v21 = v10;
      v22 = *((_QWORD *)v4 + 13);
      LODWORD(v31) = v4[24];
      v23 = *((_QWORD *)v4 + 11);
      v24 = *((_QWORD *)v4 + 10);
      LODWORD(v32) = v4[18];
      v25 = *((_QWORD *)v4 + 8);
      LODWORD(Context) = v4[6];
      v26 = *((_QWORD *)v4 + 2);
      v16 = *v4;
      v27 = *((_QWORD *)v4 + 15);
      v17 = v4[14];
      v28 = *((_QWORD *)v4 + 6);
      LODWORD(v18) = v4[1];
      v29[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v9,
        (int)&dword_1805A3F9E,
        v11 + 8,
        (__int64)&v20,
        (__int64)v29,
        (__int64)&v18,
        (__int64)&v28,
        (__int64)&v17,
        (__int64)&v27,
        (__int64)&v16,
        (__int64)&v26,
        (__int64)&Context,
        (__int64)&v25,
        (__int64)&v32,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v31,
        (__int64)&v22,
        (__int64)&v21);
    }
  }
  else
  {
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &fPending);
    v5 = fPending;
    **((_DWORD **)this + 6) = 2;
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      Context = qword_180650690;
      qword_180650690[0] = &ShellScreenClippingLogging::`vftable';
      qword_1806506A8 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650690, qword_1806506A8, v12);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180650690);
    }
    v6 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v6 > 5u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x200000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 6);
      v15 = *(_DWORD *)(v14 + 76);
      v20 = 0LL;
      LODWORD(v31) = CurrentThreadId;
      LODWORD(v32) = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v6,
        byte_1805A3F4C,
        (const GUID *)(v14 + 8),
        0LL,
        (__int64)&v20,
        (__int64)&v32,
        (__int64)&v31);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SingleViewExperienceTelemetry::OnPropertyChanged *)((char *)this + 8));
}
