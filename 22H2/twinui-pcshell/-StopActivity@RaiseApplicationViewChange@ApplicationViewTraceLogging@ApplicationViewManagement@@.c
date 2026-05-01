/*
 * XREFs of ?StopActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@MEAAXXZ @ 0x180061530
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18001DE3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1801B4A74 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801B4A74.c)
 *     ?zInternalStop@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801FFDA8 (-zInternalStop@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTa.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StopActivity(
        ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rsi
  RTL_SRWLOCK *v6; // rsi
  PSRWLOCK *p_SRWLock; // rax
  char v8; // di
  _DWORD *v9; // rdi
  void (*v10)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  int v17; // edx
  int v18; // [rsp+C0h] [rbp-80h] BYREF
  int v19; // [rsp+C4h] [rbp-7Ch] BYREF
  int v20; // [rsp+C8h] [rbp-78h] BYREF
  int v21; // [rsp+CCh] [rbp-74h] BYREF
  int v22; // [rsp+D0h] [rbp-70h] BYREF
  LPVOID v23; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+100h] [rbp-40h] BYREF
  __int64 v29; // [rsp+108h] [rbp-38h] BYREF
  __int64 v30; // [rsp+110h] [rbp-30h] BYREF
  __int64 v31; // [rsp+118h] [rbp-28h] BYREF
  __int64 v32; // [rsp+120h] [rbp-20h] BYREF
  __int64 v33; // [rsp+128h] [rbp-18h] BYREF
  __int64 v34[6]; // [rsp+130h] [rbp-10h] BYREF
  PSRWLOCK fPending; // [rsp+170h] [rbp+30h] BYREF
  PSRWLOCK SRWLock; // [rsp+178h] [rbp+38h] BYREF
  __int64 v37; // [rsp+180h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+188h] [rbp+48h] BYREF

  LODWORD(fPending) = 0;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v23 = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &v23)
      && (_DWORD)fPending )
    {
      v23 = qword_180650598;
      qword_180650598[0] = &ShellScreenClippingLogging::`vftable';
      qword_1806505B0 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650598, qword_1806505B0, v10);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180650598);
    }
    v11 = (_DWORD *)*((_QWORD *)v23 + 1);
    if ( *v11 > 5u )
    {
      v25 = *((_QWORD *)v4 + 5);
      LODWORD(SRWLock) = v4[15];
      LODWORD(v37) = v4[2];
      v26 = *((_QWORD *)v4 + 14);
      v27 = *((_QWORD *)v4 + 13);
      v12 = *((_QWORD *)this + 6);
      LODWORD(Context) = v4[24];
      v13 = *((_QWORD *)v4 + 11);
      v24 = 0LL;
      v28 = v13;
      v29 = *((_QWORD *)v4 + 10);
      v18 = v4[18];
      v30 = *((_QWORD *)v4 + 8);
      v19 = v4[6];
      v31 = *((_QWORD *)v4 + 2);
      v20 = *v4;
      v32 = *((_QWORD *)v4 + 15);
      v21 = v4[14];
      v33 = *((_QWORD *)v4 + 6);
      v22 = v4[1];
      v34[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v11,
        (int)&dword_180574721,
        v12 + 8,
        (__int64)&v24,
        (__int64)v34,
        (__int64)&v22,
        (__int64)&v33,
        (__int64)&v21,
        (__int64)&v32,
        (__int64)&v20,
        (__int64)&v31,
        (__int64)&v19,
        (__int64)&v30,
        (__int64)&v18,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&Context,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v37,
        (__int64)&SRWLock,
        (__int64)&v25);
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
    if ( InitOnceBeginInitialize(
           &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
           0,
           (PBOOL)&fPending,
           &Context)
      && (_DWORD)fPending )
    {
      Context = qword_180650598;
      qword_180650598[0] = &ShellScreenClippingLogging::`vftable';
      qword_1806505B0 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650598, qword_1806505B0, v14);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180650598);
    }
    v9 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v9 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 6);
      v17 = *(_DWORD *)(v16 + 76);
      v24 = 0LL;
      LODWORD(SRWLock) = CurrentThreadId;
      LODWORD(v37) = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v9,
        byte_180574876,
        (const GUID *)(v16 + 8),
        0LL,
        (__int64)&v24,
        (__int64)&v37,
        (__int64)&SRWLock);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)((char *)this + 8));
}
