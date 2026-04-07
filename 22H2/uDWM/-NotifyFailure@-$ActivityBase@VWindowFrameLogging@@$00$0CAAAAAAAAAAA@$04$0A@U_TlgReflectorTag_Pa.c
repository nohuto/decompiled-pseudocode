/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18008E8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002CC08 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x18007D33C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18007D5F4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_18007D5F4.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18008E7DC (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18008EE68 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

char __fastcall wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  _DWORD *v9; // rcx
  int v10; // eax
  int v12; // [rsp+B0h] [rbp-80h] BYREF
  int v13; // [rsp+B4h] [rbp-7Ch] BYREF
  const unsigned __int16 *v14; // [rsp+B8h] [rbp-78h] BYREF
  wchar_t *v15; // [rsp+C0h] [rbp-70h] BYREF
  wchar_t *v16; // [rsp+C8h] [rbp-68h] BYREF
  const unsigned __int16 *v17; // [rsp+D0h] [rbp-60h] BYREF
  const unsigned __int16 *v18; // [rsp+D8h] [rbp-58h] BYREF
  wchar_t *v19; // [rsp+E0h] [rbp-50h] BYREF
  const unsigned __int16 *v20; // [rsp+E8h] [rbp-48h] BYREF
  wchar_t *v21; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+F8h] [rbp-38h] BYREF
  const unsigned __int16 *v23; // [rsp+100h] [rbp-30h] BYREF
  const unsigned __int16 *v24; // [rsp+108h] [rbp-28h] BYREF
  __int64 v25[4]; // [rsp+110h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+140h] [rbp+10h] BYREF
  int v27; // [rsp+148h] [rbp+18h] BYREF
  int v28; // [rsp+150h] [rbp+20h] BYREF
  int v29; // [rsp+158h] [rbp+28h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    v7 = *((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get(
                       v4,
                       _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
         + 1);
    if ( *(_DWORD *)v7 > 2u
      && (*(_QWORD *)(v7 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v7 + 24) & 0x200000000000LL) == *(_QWORD *)(v7 + 24) )
    {
      v22 = *((_QWORD *)a2 + 5);
      LODWORD(SRWLock) = a2[15];
      v27 = a2[2];
      v21 = (wchar_t *)*((_QWORD *)a2 + 14);
      v8 = a1[6];
      v20 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v28 = a2[24];
      v19 = (wchar_t *)*((_QWORD *)a2 + 11);
      v18 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v29 = a2[18];
      v17 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v13 = a2[6];
      v16 = (wchar_t *)*((_QWORD *)a2 + 2);
      v12 = *a2;
      v23 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      LODWORD(v14) = a2[14];
      v24 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      LODWORD(v15) = a2[1];
      v25[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v7,
        byte_1800D0B4E,
        v8 + 8,
        v7,
        (__int64)v25,
        (__int64)&v15,
        &v24,
        (__int64)&v14,
        &v23,
        (__int64)&v12,
        &v16,
        (__int64)&v13,
        &v17,
        (__int64)&v29,
        &v18,
        &v19,
        (__int64)&v28,
        &v20,
        &v21,
        (__int64)&v27,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v22);
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
      v6 = a1[6];
      v15 = (wchar_t *)*((_QWORD *)a2 + 14);
      v14 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      LODWORD(SRWLock) = a2[24];
      v16 = (wchar_t *)*((_QWORD *)a2 + 11);
      v17 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v27 = a2[18];
      v18 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v28 = a2[6];
      v19 = (wchar_t *)*((_QWORD *)a2 + 2);
      v29 = *a2;
      v20 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      v12 = a2[14];
      v21 = (wchar_t *)*((_QWORD *)a2 + 6);
      v13 = a2[1];
      v22 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v5,
        byte_1800D0A39,
        v6 + 8,
        v5,
        (__int64)&v22,
        (__int64)&v13,
        (const unsigned __int16 **)&v21,
        (__int64)&v12,
        &v20,
        (__int64)&v29,
        &v19,
        (__int64)&v28,
        &v18,
        (__int64)&v27,
        &v17,
        &v16,
        (__int64)&SRWLock,
        &v14,
        &v15);
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v9 = (_DWORD *)a1[6];
  v10 = a2[1];
  if ( v10 != v9[21] && (v10 != v9[19] || (int)v9[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v9 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
