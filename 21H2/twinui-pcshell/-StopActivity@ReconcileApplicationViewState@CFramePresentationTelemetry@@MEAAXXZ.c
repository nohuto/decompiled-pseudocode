/*
 * XREFs of ?StopActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@MEAAXXZ @ 0x18005E850
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180086D70 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1801B4C24 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801B4C24.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801BDB48 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall CFramePresentationTelemetry::ReconcileApplicationViewState::StopActivity(
        CFramePresentationTelemetry::ReconcileApplicationViewState *this)
{
  int *v2; // rax
  int v3; // ecx
  RTL_SRWLOCK *v4; // rax
  PSRWLOCK *p_SRWLock; // rax
  char v6; // di
  RTL_SRWLOCK *v7; // rsi
  __int64 v8; // rdi
  char *v9; // rbx
  __int64 *v10; // rcx
  __int64 v11; // rax
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  REGHANDLE v14; // rcx
  int *v15; // rsi
  void (*v16)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v17; // rcx
  __int64 v18; // r8
  void (*v19)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int UserDataCount; // [rsp+28h] [rbp-120h]
  unsigned int v21; // [rsp+C8h] [rbp-80h] BYREF
  int v22; // [rsp+CCh] [rbp-7Ch] BYREF
  WINBOOL v23; // [rsp+D0h] [rbp-78h] BYREF
  int v24; // [rsp+D4h] [rbp-74h] BYREF
  int v25; // [rsp+D8h] [rbp-70h] BYREF
  int v26; // [rsp+DCh] [rbp-6Ch] BYREF
  int v27; // [rsp+E0h] [rbp-68h] BYREF
  int v28; // [rsp+E4h] [rbp-64h] BYREF
  int v29; // [rsp+E8h] [rbp-60h] BYREF
  int v30; // [rsp+ECh] [rbp-5Ch] BYREF
  WINBOOL v31; // [rsp+F0h] [rbp-58h] BYREF
  DWORD v32; // [rsp+F4h] [rbp-54h] BYREF
  LPVOID v33; // [rsp+F8h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+100h] [rbp-48h] BYREF
  __int64 v35; // [rsp+108h] [rbp-40h] BYREF
  __int64 v36; // [rsp+110h] [rbp-38h] BYREF
  __int64 v37; // [rsp+118h] [rbp-30h] BYREF
  __int64 v38; // [rsp+120h] [rbp-28h] BYREF
  __int64 v39; // [rsp+128h] [rbp-20h] BYREF
  __int64 v40; // [rsp+130h] [rbp-18h] BYREF
  __int64 v41; // [rsp+138h] [rbp-10h] BYREF
  __int64 v42; // [rsp+140h] [rbp-8h] BYREF
  __int64 v43; // [rsp+148h] [rbp+0h] BYREF
  __int64 v44; // [rsp+150h] [rbp+8h] BYREF
  __int64 v45; // [rsp+158h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+160h] [rbp+18h] BYREF
  PSRWLOCK v47; // [rsp+168h] [rbp+20h] BYREF
  __int64 v48; // [rsp+170h] [rbp+28h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+178h] [rbp+30h] BYREF
  void (__stdcall *v50)(PSRWLOCK); // [rsp+188h] [rbp+40h]
  PSRWLOCK v51; // [rsp+190h] [rbp+48h]
  void (__stdcall *v52)(PSRWLOCK); // [rsp+198h] [rbp+50h]
  RTL_SRWLOCK *v53; // [rsp+1A0h] [rbp+58h]
  void (__stdcall *v54)(PSRWLOCK); // [rsp+1A8h] [rbp+60h]
  PSRWLOCK v55; // [rsp+1B0h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1B8h] [rbp+70h] BYREF
  void *v57; // [rsp+1C8h] [rbp+80h]
  int v58; // [rsp+1D0h] [rbp+88h]
  int v59; // [rsp+1D4h] [rbp+8Ch]
  __int64 *v60; // [rsp+1D8h] [rbp+90h]
  __int64 v61; // [rsp+1E0h] [rbp+98h]
  int *v62; // [rsp+1E8h] [rbp+A0h]
  __int64 v63; // [rsp+1F0h] [rbp+A8h]
  DWORD *v64; // [rsp+1F8h] [rbp+B0h]
  __int64 v65; // [rsp+200h] [rbp+B8h]
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+E8h]

  v22 = 0;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 >= 0 || v3 != v2[21] || (v15 = v2 + 20, v2 == (int *)-80LL) )
  {
    v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v4 )
    {
      v7 = v4 + 31;
      AcquireSRWLockExclusive(v4 + 31);
      p_SRWLock = &v47;
      v6 = 1;
    }
    else
    {
      p_SRWLock = &SRWLock;
      v6 = 2;
      v7 = 0LL;
    }
    *p_SRWLock = 0LL;
    if ( (v6 & 2) != 0 )
    {
      v6 &= ~2u;
      if ( SRWLock )
      {
        v50 = ReleaseSRWLockExclusive;
        v55 = SRWLock;
        ReleaseSRWLockExclusive(SRWLock);
      }
    }
    if ( (v6 & 1) != 0 && v47 )
    {
      v52 = ReleaseSRWLockExclusive;
      v51 = v47;
      ReleaseSRWLockExclusive(v47);
    }
    **((_DWORD **)this + 6) = 2;
    if ( v7 )
    {
      v54 = ReleaseSRWLockExclusive;
      v53 = v7;
      ReleaseSRWLockExclusive(v7);
    }
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v31, &Context) && v31 )
    {
      Context = qword_1806504F0;
      qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v19);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
    }
    v8 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v13 = *((_QWORD *)this + 6);
      v32 = CurrentThreadId;
      v65 = 4LL;
      v63 = 4LL;
      v22 = *(_DWORD *)(v13 + 76);
      v64 = &v32;
      v62 = &v22;
      v60 = &v48;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v8 + 8);
      v48 = 0LL;
      v61 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v57 = &unk_180573F0B;
      UserData.Reserved = 2;
      v14 = *(_QWORD *)(v8 + 32);
      v58 = 82;
      v59 = 1;
      v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v14, &EventDescriptor, (LPCGUID)(v13 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v33 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v23, &v33) && v23 )
    {
      v33 = qword_1806504F0;
      qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v16);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
    }
    v17 = (_DWORD *)*((_QWORD *)v33 + 1);
    if ( *v17 > 5u )
    {
      v35 = *((_QWORD *)v15 + 5);
      v24 = v15[15];
      v25 = v15[2];
      v36 = *((_QWORD *)v15 + 14);
      v37 = *((_QWORD *)v15 + 13);
      v18 = *((_QWORD *)this + 6);
      v26 = v15[24];
      v38 = *((_QWORD *)v15 + 11);
      v39 = *((_QWORD *)v15 + 10);
      v27 = v15[18];
      v40 = *((_QWORD *)v15 + 8);
      v28 = v15[6];
      v41 = *((_QWORD *)v15 + 2);
      v29 = *v15;
      v42 = *((_QWORD *)v15 + 15);
      v30 = v15[14];
      v43 = *((_QWORD *)v15 + 6);
      v21 = v15[1];
      v44 = 0x1000000LL;
      v45 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v17,
        (int)&dword_180573DA8,
        v18 + 8,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)&v21,
        (__int64)&v43,
        (__int64)&v30,
        (__int64)&v42,
        (__int64)&v29,
        (__int64)&v41,
        (__int64)&v28,
        (__int64)&v40,
        (__int64)&v27,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v26,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v35);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v9 = (char *)this + 8;
    if ( *((_DWORD *)v9 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B0,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        UserDataCount);
    v10 = *(__int64 **)v9;
    *((_DWORD *)v9 + 6) = 0;
    v11 = *v10;
    if ( *v10 )
    {
      while ( (char *)v11 != v9 )
      {
        v10 = (__int64 *)(v11 + 16);
        *(_QWORD *)v9 = v11 + 16;
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v11 )
          goto LABEL_21;
      }
      *v10 = *((_QWORD *)v9 + 2);
    }
LABEL_21:
    *(_QWORD *)v9 = 0LL;
  }
}
