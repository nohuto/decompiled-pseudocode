/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180094C00
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002CC08 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002D738 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x18007D33C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18007D5F4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_18007D5F4.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18008EE68 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

char __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // r8
  _DWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  _DWORD *v11; // rcx
  int v12; // eax
  int v14; // [rsp+B0h] [rbp-80h] BYREF
  int v15; // [rsp+B4h] [rbp-7Ch] BYREF
  const unsigned __int16 *v16; // [rsp+B8h] [rbp-78h] BYREF
  wchar_t *v17; // [rsp+C0h] [rbp-70h] BYREF
  wchar_t *v18; // [rsp+C8h] [rbp-68h] BYREF
  const unsigned __int16 *v19; // [rsp+D0h] [rbp-60h] BYREF
  const unsigned __int16 *v20; // [rsp+D8h] [rbp-58h] BYREF
  wchar_t *v21; // [rsp+E0h] [rbp-50h] BYREF
  const unsigned __int16 *v22; // [rsp+E8h] [rbp-48h] BYREF
  wchar_t *v23; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-38h] BYREF
  const unsigned __int16 *v25; // [rsp+100h] [rbp-30h] BYREF
  const unsigned __int16 *v26; // [rsp+108h] [rbp-28h] BYREF
  __int64 v27[4]; // [rsp+110h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+140h] [rbp+10h] BYREF
  int v29; // [rsp+148h] [rbp+18h] BYREF
  int v30; // [rsp+150h] [rbp+20h] BYREF
  int v31; // [rsp+158h] [rbp+28h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    v8 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get(
                                 v4,
                                 _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                   + 1);
    if ( *v8 > 2u )
    {
      v24 = *((_QWORD *)a2 + 5);
      LODWORD(SRWLock) = a2[15];
      v29 = a2[2];
      v23 = (wchar_t *)*((_QWORD *)a2 + 14);
      v10 = a1[6];
      v22 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v30 = a2[24];
      v21 = (wchar_t *)*((_QWORD *)a2 + 11);
      v20 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v31 = a2[18];
      v19 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v15 = a2[6];
      v18 = (wchar_t *)*((_QWORD *)a2 + 2);
      v14 = *a2;
      v25 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      LODWORD(v16) = a2[14];
      v26 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      LODWORD(v17) = a2[1];
      v27[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v8,
        byte_1800D0F84,
        v10 + 8,
        v9,
        (__int64)v27,
        (__int64)&v17,
        &v26,
        (__int64)&v16,
        &v25,
        (__int64)&v14,
        &v18,
        (__int64)&v15,
        &v19,
        (__int64)&v31,
        &v20,
        &v21,
        (__int64)&v30,
        &v22,
        &v23,
        (__int64)&v29,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v24);
    }
  }
  else
  {
    v5 = *((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get(
                       v4,
                       _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
         + 1);
    if ( *(_DWORD *)v5 > 2u
      && (*(_QWORD *)(v5 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v5 + 24) & 0x200000000000LL) == *(_QWORD *)(v5 + 24) )
    {
      v7 = a1[6];
      v17 = (wchar_t *)*((_QWORD *)a2 + 14);
      v16 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      LODWORD(SRWLock) = a2[24];
      v18 = (wchar_t *)*((_QWORD *)a2 + 11);
      v19 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v29 = a2[18];
      v20 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v30 = a2[6];
      v21 = (wchar_t *)*((_QWORD *)a2 + 2);
      v31 = *a2;
      v22 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      v14 = a2[14];
      v23 = (wchar_t *)*((_QWORD *)a2 + 6);
      v15 = a2[1];
      v24 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v5,
        byte_1800D0A39,
        v7 + 8,
        v6,
        (__int64)&v24,
        (__int64)&v15,
        (const unsigned __int16 **)&v23,
        (__int64)&v14,
        &v22,
        (__int64)&v31,
        &v21,
        (__int64)&v30,
        &v20,
        (__int64)&v29,
        &v19,
        &v18,
        (__int64)&SRWLock,
        &v16,
        &v17);
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v11 = (_DWORD *)a1[6];
  v12 = a2[1];
  if ( v12 != v11[21] && (v12 != v11[19] || (int)v11[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v11 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
