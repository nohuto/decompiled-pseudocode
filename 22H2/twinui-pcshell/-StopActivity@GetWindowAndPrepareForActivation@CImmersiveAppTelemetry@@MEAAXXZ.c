/*
 * XREFs of ?StopActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180034FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180019D40 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180086D70 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1801B4A74 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801B4A74.c)
 */

void __fastcall CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::StopActivity(
        CImmersiveAppTelemetry::GetWindowAndPrepareForActivation *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rcx
  _DWORD *v6; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v8; // r8
  int v9; // eax
  void (*v10)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v15; // [rsp+C8h] [rbp-80h] BYREF
  DWORD v16; // [rsp+CCh] [rbp-7Ch] BYREF
  __int64 v17; // [rsp+D0h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+D8h] [rbp-70h] BYREF
  PSRWLOCK SRWLock; // [rsp+E0h] [rbp-68h] BYREF
  WINBOOL v20; // [rsp+E8h] [rbp-60h] BYREF
  int v21; // [rsp+ECh] [rbp-5Ch] BYREF
  int v22; // [rsp+F0h] [rbp-58h] BYREF
  int v23; // [rsp+F4h] [rbp-54h] BYREF
  int v24; // [rsp+F8h] [rbp-50h] BYREF
  int v25; // [rsp+FCh] [rbp-4Ch] BYREF
  __int64 v26; // [rsp+100h] [rbp-48h] BYREF
  __int64 v27; // [rsp+108h] [rbp-40h] BYREF
  __int64 v28; // [rsp+110h] [rbp-38h] BYREF
  __int64 v29; // [rsp+118h] [rbp-30h] BYREF
  __int64 v30; // [rsp+120h] [rbp-28h] BYREF
  __int64 v31; // [rsp+128h] [rbp-20h] BYREF
  __int64 v32; // [rsp+130h] [rbp-18h] BYREF
  __int64 v33; // [rsp+138h] [rbp-10h] BYREF
  __int64 v34; // [rsp+140h] [rbp-8h] BYREF
  __int64 v35; // [rsp+148h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+158h] [rbp+10h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+178h] [rbp+30h]
  int v38; // [rsp+180h] [rbp+38h]
  int v39; // [rsp+184h] [rbp+3Ch]
  int *v40; // [rsp+188h] [rbp+40h]
  int v41; // [rsp+190h] [rbp+48h]
  int v42; // [rsp+194h] [rbp+4Ch]
  DWORD *v43; // [rsp+198h] [rbp+50h]
  int v44; // [rsp+1A0h] [rbp+58h]
  int v45; // [rsp+1A4h] [rbp+5Ch]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v20, &Context) && v20 )
    {
      Context = qword_1806504F0;
      qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v10);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
    }
    v11 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v11 > 5u )
    {
      v26 = *((_QWORD *)v4 + 5);
      v21 = v4[15];
      v22 = v4[2];
      v27 = *((_QWORD *)v4 + 14);
      v28 = *((_QWORD *)v4 + 13);
      v12 = *((_QWORD *)this + 6);
      v23 = v4[24];
      v13 = *((_QWORD *)v4 + 11);
      SRWLock = 0LL;
      v29 = v13;
      v30 = *((_QWORD *)v4 + 10);
      v24 = v4[18];
      v31 = *((_QWORD *)v4 + 8);
      v25 = v4[6];
      v32 = *((_QWORD *)v4 + 2);
      v15 = *v4;
      v33 = *((_QWORD *)v4 + 15);
      v16 = v4[14];
      v34 = *((_QWORD *)v4 + 6);
      LODWORD(v17) = v4[1];
      v35 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v11,
        (int)&dword_1805732EF,
        v12 + 8,
        (__int64)&SRWLock,
        (__int64)&v35,
        (__int64)&v17,
        (__int64)&v34,
        (__int64)&v16,
        (__int64)&v33,
        (__int64)&v15,
        (__int64)&v32,
        (__int64)&v25,
        (__int64)&v31,
        (__int64)&v24,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v23,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v26);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    v5 = SRWLock;
    **((_DWORD **)this + 6) = 2;
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v17, &Context) && (_DWORD)v17 )
    {
      Context = qword_1806504F0;
      qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v14);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
    }
    v6 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v6 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = *((_QWORD *)this + 6);
      v45 = 0;
      v42 = 0;
      v39 = 0;
      v16 = CurrentThreadId;
      v9 = *(_DWORD *)(v8 + 76);
      SRWLock = 0LL;
      v15 = v9;
      v43 = &v16;
      v40 = &v15;
      p_SRWLock = &SRWLock;
      v44 = 4;
      v41 = 4;
      v38 = 8;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)v6,
        (unsigned __int8 *)dword_18057344A,
        (const GUID *)(v8 + 8),
        0LL,
        5u,
        &v36);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CImmersiveAppTelemetry::GetWindowAndPrepareForActivation *)((char *)this + 8));
}
