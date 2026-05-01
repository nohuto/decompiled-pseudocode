/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1801BDD00
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18001F638 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180020060 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002E99C (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1801A85E8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1801A85E8.c)
 */

char __fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  _DWORD *v14; // rcx
  int v15; // eax
  int v17; // [rsp+B0h] [rbp-80h] BYREF
  int v18; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v19; // [rsp+B8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+C0h] [rbp-70h] BYREF
  LPVOID v21; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v28; // [rsp+100h] [rbp-30h] BYREF
  __int64 v29; // [rsp+108h] [rbp-28h] BYREF
  __int64 v30; // [rsp+110h] [rbp-20h] BYREF
  __int64 v31; // [rsp+118h] [rbp-18h] BYREF
  __int64 v32[6]; // [rsp+120h] [rbp-10h] BYREF
  RTL_SRWLOCK *fPending; // [rsp+160h] [rbp+30h] BYREF
  __int64 v34; // [rsp+168h] [rbp+38h] BYREF
  __int64 v35; // [rsp+170h] [rbp+40h] BYREF
  __int64 v36; // [rsp+178h] [rbp+48h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    v21 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &v21)
      && (_DWORD)fPending )
    {
      v21 = qword_1806504F0;
      qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v9);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
    }
    v10 = (_DWORD *)*((_QWORD *)v21 + 1);
    if ( *v10 > 2u && tlgKeywordOn((__int64)v10, 0x200000000000LL) )
    {
      v29 = *((_QWORD *)a2 + 5);
      LODWORD(v34) = a2[15];
      LODWORD(v35) = a2[2];
      v28 = *((_QWORD *)a2 + 14);
      v13 = a1[6];
      v27 = *((_QWORD *)a2 + 13);
      LODWORD(v36) = a2[24];
      v26 = *((_QWORD *)a2 + 11);
      v25 = *((_QWORD *)a2 + 10);
      LODWORD(v19) = a2[18];
      v24 = *((_QWORD *)a2 + 8);
      v18 = a2[6];
      v23 = *((_QWORD *)a2 + 2);
      v17 = *a2;
      v30 = *((_QWORD *)a2 + 15);
      LODWORD(v22) = a2[14];
      v31 = *((_QWORD *)a2 + 6);
      LODWORD(Context) = a2[1];
      v32[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v11,
        (unsigned __int8 *)dword_180570172,
        (const GUID *)(v13 + 8),
        v12,
        (__int64)v32,
        (__int64)&Context,
        (const wchar_t **)&v31,
        (__int64)&v22,
        (const wchar_t **)&v30,
        (__int64)&v17,
        (const WCHAR **)&v23,
        (__int64)&v18,
        (const wchar_t **)&v24,
        (__int64)&v19,
        (const wchar_t **)&v25,
        (const WCHAR **)&v26,
        (__int64)&v36,
        (const wchar_t **)&v27,
        (const WCHAR **)&v28,
        (__int64)&v35,
        (__int64)&v34,
        (const wchar_t **)&v29);
    }
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      Context = qword_1806504F0;
      qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v4);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
    }
    v5 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v5 > 2u && tlgKeywordOn((__int64)v5, 0x200000000000LL) )
    {
      v8 = a1[6];
      v21 = (LPVOID)*((_QWORD *)a2 + 14);
      v22 = *((_QWORD *)a2 + 13);
      LODWORD(v34) = a2[24];
      v23 = *((_QWORD *)a2 + 11);
      v24 = *((_QWORD *)a2 + 10);
      LODWORD(v35) = a2[18];
      v25 = *((_QWORD *)a2 + 8);
      LODWORD(v36) = a2[6];
      v26 = *((_QWORD *)a2 + 2);
      v17 = *a2;
      v27 = *((_QWORD *)a2 + 15);
      v18 = a2[14];
      v28 = *((_QWORD *)a2 + 6);
      LODWORD(v19) = a2[1];
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        v6,
        (unsigned __int8 *)dword_18057005D,
        (const GUID *)(v8 + 8),
        v7,
        (__int64)&v29,
        (__int64)&v19,
        (const wchar_t **)&v28,
        (__int64)&v18,
        (const wchar_t **)&v27,
        (__int64)&v17,
        (const WCHAR **)&v26,
        (__int64)&v36,
        (const wchar_t **)&v25,
        (__int64)&v35,
        (const wchar_t **)&v24,
        (const WCHAR **)&v23,
        (__int64)&v34,
        (const wchar_t **)&v22,
        (const WCHAR **)&v21);
    }
  }
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &fPending);
  v14 = (_DWORD *)a1[6];
  v15 = a2[1];
  if ( v15 != v14[21] && (v15 != v14[19] || (int)v14[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v14 + 20), (const struct wil::FailureInfo *)a2);
  if ( fPending )
    ReleaseSRWLockExclusive(fPending);
  return 1;
}
