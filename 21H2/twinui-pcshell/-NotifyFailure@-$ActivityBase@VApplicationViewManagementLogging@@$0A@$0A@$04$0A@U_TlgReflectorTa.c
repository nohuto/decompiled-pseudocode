/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18001F580
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18001F638 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180020060 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020544 (-LockExclusive@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTa.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 */

char __fastcall wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  int v6; // eax
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v9; // r8
  int v10; // [rsp+B0h] [rbp-80h] BYREF
  int v11; // [rsp+B4h] [rbp-7Ch] BYREF
  int v12; // [rsp+B8h] [rbp-78h] BYREF
  int v13; // [rsp+BCh] [rbp-74h] BYREF
  int v14; // [rsp+C0h] [rbp-70h] BYREF
  LPVOID Context; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v16; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v18; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v19; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v21; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v22; // [rsp+100h] [rbp-30h] BYREF
  __int64 v23; // [rsp+108h] [rbp-28h] BYREF
  __int64 v24; // [rsp+110h] [rbp-20h] BYREF
  __int64 v25[5]; // [rsp+118h] [rbp-18h] BYREF
  PSRWLOCK fPending; // [rsp+150h] [rbp+20h] BYREF
  __int64 v27; // [rsp+158h] [rbp+28h] BYREF
  __int64 v28; // [rsp+160h] [rbp+30h] BYREF
  __int64 v29; // [rsp+168h] [rbp+38h] BYREF

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
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650598, qword_1806505B0, v8);
    InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180650598);
  }
  v4 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v4 > 2u )
  {
    v16 = *((_QWORD *)a2 + 5);
    LODWORD(v27) = a2[15];
    LODWORD(v28) = a2[2];
    v17 = *((_QWORD *)a2 + 14);
    v9 = *(_QWORD *)(a1 + 48);
    v18 = *((_QWORD *)a2 + 13);
    LODWORD(v29) = a2[24];
    v19 = *((_QWORD *)a2 + 11);
    v20 = *((_QWORD *)a2 + 10);
    v10 = a2[18];
    v21 = *((_QWORD *)a2 + 8);
    v11 = a2[6];
    v22 = *((_QWORD *)a2 + 2);
    v12 = *a2;
    v23 = *((_QWORD *)a2 + 15);
    v13 = a2[14];
    v24 = *((_QWORD *)a2 + 6);
    v14 = a2[1];
    v25[0] = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (int)v4,
      (int)&unk_180570892,
      v9 + 8,
      (__int64)v25,
      (__int64)&v14,
      (__int64)&v24,
      (__int64)&v13,
      (__int64)&v23,
      (__int64)&v12,
      (__int64)&v22,
      (__int64)&v11,
      (__int64)&v21,
      (__int64)&v10,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v29,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v16);
  }
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &fPending);
  v5 = *(_DWORD **)(a1 + 48);
  v6 = a2[1];
  if ( v6 != v5[21] && (v6 != v5[19] || (int)v5[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v5 + 20), (const struct wil::FailureInfo *)a2);
  if ( fPending )
    ReleaseSRWLockExclusive(fPending);
  return 1;
}
