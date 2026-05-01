/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18021F570
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180019D40 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18001F638 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180020060 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 */

char __fastcall wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  __int64 v4; // r9
  void (*v5)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v6; // rcx
  __int64 v7; // r8
  _DWORD *v8; // rcx
  int v9; // eax
  int v11; // [rsp+B0h] [rbp-80h] BYREF
  int v12; // [rsp+B4h] [rbp-7Ch] BYREF
  int v13; // [rsp+B8h] [rbp-78h] BYREF
  int v14; // [rsp+BCh] [rbp-74h] BYREF
  int v15; // [rsp+C0h] [rbp-70h] BYREF
  LPVOID Context; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v17; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v18; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v19; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v20; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v21; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v23; // [rsp+100h] [rbp-30h] BYREF
  __int64 v24; // [rsp+108h] [rbp-28h] BYREF
  __int64 v25; // [rsp+110h] [rbp-20h] BYREF
  __int64 v26[5]; // [rsp+118h] [rbp-18h] BYREF
  RTL_SRWLOCK *fPending; // [rsp+150h] [rbp+20h] BYREF
  __int64 v28; // [rsp+158h] [rbp+28h] BYREF
  __int64 v29; // [rsp+160h] [rbp+30h] BYREF
  __int64 v30; // [rsp+168h] [rbp+38h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    Context = &qword_180650668;
    qword_180650668 = &ShellScreenClippingLogging::`vftable';
    qword_180650680 = (struct _tlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180650668, qword_180650680, v5);
    InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &qword_180650668);
  }
  v6 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v6 > 2u )
  {
    v17 = *((_QWORD *)a2 + 5);
    LODWORD(v28) = a2[15];
    LODWORD(v29) = a2[2];
    v18 = *((_QWORD *)a2 + 14);
    v7 = *(_QWORD *)(a1 + 48);
    v19 = *((_QWORD *)a2 + 13);
    LODWORD(v30) = a2[24];
    v20 = *((_QWORD *)a2 + 11);
    v21 = *((_QWORD *)a2 + 10);
    v11 = a2[18];
    v22 = *((_QWORD *)a2 + 8);
    v12 = a2[6];
    v23 = *((_QWORD *)a2 + 2);
    v13 = *a2;
    v24 = *((_QWORD *)a2 + 15);
    v14 = a2[14];
    v25 = *((_QWORD *)a2 + 6);
    v15 = a2[1];
    v26[0] = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)v6,
      (unsigned __int8 *)&unk_180570892,
      (const GUID *)(v7 + 8),
      v4,
      (__int64)v26,
      (__int64)&v15,
      (const wchar_t **)&v25,
      (__int64)&v14,
      (const wchar_t **)&v24,
      (__int64)&v13,
      (const WCHAR **)&v23,
      (__int64)&v12,
      (const wchar_t **)&v22,
      (__int64)&v11,
      (const wchar_t **)&v21,
      (const WCHAR **)&v20,
      (__int64)&v30,
      (const wchar_t **)&v19,
      (const WCHAR **)&v18,
      (__int64)&v29,
      (__int64)&v28,
      (const wchar_t **)&v17);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &fPending);
  v8 = *(_DWORD **)(a1 + 48);
  v9 = a2[1];
  if ( v9 != v8[21] && (v9 != v8[19] || (int)v8[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v8 + 20), (const struct wil::FailureInfo *)a2);
  if ( fPending )
    ReleaseSRWLockExclusive(fPending);
  return 1;
}
