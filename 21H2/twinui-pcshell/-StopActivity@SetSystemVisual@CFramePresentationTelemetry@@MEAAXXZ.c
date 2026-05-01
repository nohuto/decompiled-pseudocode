/*
 * XREFs of ?StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ @ 0x1800692A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18001DE3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x1801B495C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801B495C.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801C9D04 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall CFramePresentationTelemetry::SetSystemVisual::StopActivity(
        CFramePresentationTelemetry::SetSystemVisual *this)
{
  int *v2; // rdi
  int v3; // eax
  int *v4; // rdi
  RTL_SRWLOCK *v5; // rsi
  RTL_SRWLOCK *v6; // rsi
  PSRWLOCK *p_SRWLock; // rax
  char v8; // di
  __int64 v9; // rdi
  void (*v10)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v11; // rcx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // r8
  void (*v15)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  DWORD CurrentThreadId; // eax
  __int64 v17; // r8
  int v18; // eax
  int v19; // [rsp+A0h] [rbp-80h] BYREF
  int v20; // [rsp+A4h] [rbp-7Ch] BYREF
  __int64 v21; // [rsp+A8h] [rbp-78h] BYREF
  LPVOID v22; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v32[6]; // [rsp+100h] [rbp-20h] BYREF
  PSRWLOCK fPending; // [rsp+140h] [rbp+20h] BYREF
  PSRWLOCK SRWLock; // [rsp+148h] [rbp+28h] BYREF
  __int64 v35; // [rsp+150h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+158h] [rbp+38h] BYREF

  LODWORD(fPending) = 0;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v22 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &v22)
      && (_DWORD)fPending )
    {
      v22 = qword_1806504F0;
      qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v10);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
    }
    v11 = (_DWORD *)*((_QWORD *)v22 + 1);
    if ( *v11 > 5u && tlgKeywordOn((__int64)v11, 0x200000000000LL) )
    {
      v13 = *((_QWORD *)v4 + 14);
      v14 = *((_QWORD *)this + 6);
      v23 = 0LL;
      v24 = v13;
      v25 = *((_QWORD *)v4 + 13);
      LODWORD(SRWLock) = v4[24];
      v26 = *((_QWORD *)v4 + 11);
      v27 = *((_QWORD *)v4 + 10);
      LODWORD(v35) = v4[18];
      v28 = *((_QWORD *)v4 + 8);
      LODWORD(Context) = v4[6];
      v29 = *((_QWORD *)v4 + 2);
      v19 = *v4;
      v30 = *((_QWORD *)v4 + 15);
      v20 = v4[14];
      v31 = *((_QWORD *)v4 + 6);
      LODWORD(v21) = v4[1];
      v32[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v12,
        (int)&dword_180573F5E,
        v14 + 8,
        (__int64)&v23,
        (__int64)v32,
        (__int64)&v21,
        (__int64)&v31,
        (__int64)&v20,
        (__int64)&v30,
        (__int64)&v19,
        (__int64)&v29,
        (__int64)&Context,
        (__int64)&v28,
        (__int64)&v35,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&SRWLock,
        (__int64)&v25,
        (__int64)&v24);
    }
  }
  else
  {
    v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v5 )
    {
      v6 = v5 + 31;
      AcquireSRWLockExclusive(v6);
      p_SRWLock = &SRWLock;
      v8 = 1;
    }
    else
    {
      p_SRWLock = &fPending;
      v8 = 2;
      v6 = 0LL;
    }
    *p_SRWLock = 0LL;
    if ( (v8 & 2) != 0 )
    {
      v8 &= ~2u;
      if ( fPending )
        ReleaseSRWLockExclusive(fPending);
    }
    if ( (v8 & 1) != 0 && SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    **((_DWORD **)this + 6) = 2;
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      Context = qword_1806504F0;
      qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v15);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
    }
    v9 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u
      && (*(_QWORD *)(v9 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v9 + 24) & 0x200000000000LL) == *(_QWORD *)(v9 + 24) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v17 = *((_QWORD *)this + 6);
      LODWORD(SRWLock) = CurrentThreadId;
      v18 = *(_DWORD *)(v17 + 76);
      v23 = 0LL;
      LODWORD(v35) = v18;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        byte_180574085,
        (const GUID *)(v17 + 8),
        0LL,
        (__int64)&v23,
        (__int64)&v35,
        (__int64)&SRWLock);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CFramePresentationTelemetry::SetSystemVisual *)((char *)this + 8));
}
