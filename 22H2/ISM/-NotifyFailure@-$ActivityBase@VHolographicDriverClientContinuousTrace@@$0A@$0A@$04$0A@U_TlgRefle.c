/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180160D50
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456445@Z @ 0x1800640E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1800640E4.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800678C0 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180094064 (-LockExclusive@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167E4C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

char __fastcall wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  _DWORD *v7; // rcx
  int v8; // eax
  int v10; // [rsp+B0h] [rbp-80h] BYREF
  int v11; // [rsp+B4h] [rbp-7Ch] BYREF
  int v12; // [rsp+B8h] [rbp-78h] BYREF
  int v13; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v14; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v15; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v16; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v18; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v19; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v21; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v22; // [rsp+100h] [rbp-30h] BYREF
  __int64 v23[3]; // [rsp+108h] [rbp-28h] BYREF
  PSRWLOCK SRWLock; // [rsp+130h] [rbp+0h] BYREF
  __int64 v25; // [rsp+138h] [rbp+8h] BYREF
  __int64 v26; // [rsp+140h] [rbp+10h] BYREF
  __int64 v27; // [rsp+148h] [rbp+18h] BYREF

  v4 = *(_DWORD **)(wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
                      a1,
                      _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v4 > 2u )
  {
    v14 = *((_QWORD *)a2 + 5);
    LODWORD(SRWLock) = a2[15];
    LODWORD(v25) = a2[2];
    v15 = *((_QWORD *)a2 + 14);
    v6 = *(_QWORD *)(a1 + 48);
    v16 = *((_QWORD *)a2 + 13);
    LODWORD(v26) = a2[24];
    v17 = *((_QWORD *)a2 + 11);
    v18 = *((_QWORD *)a2 + 10);
    LODWORD(v27) = a2[18];
    v19 = *((_QWORD *)a2 + 8);
    v10 = a2[6];
    v20 = *((_QWORD *)a2 + 2);
    v11 = *a2;
    v21 = *((_QWORD *)a2 + 15);
    v12 = a2[14];
    v22 = *((_QWORD *)a2 + 6);
    v13 = a2[1];
    v23[0] = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)v4,
      (unsigned __int8 *)dword_1801CC06D,
      (const GUID *)(v6 + 8),
      v5,
      (__int64)v23,
      (__int64)&v13,
      (const unsigned __int16 **)&v22,
      (__int64)&v12,
      (const unsigned __int16 **)&v21,
      (__int64)&v11,
      (const wchar_t **)&v20,
      (__int64)&v10,
      (const unsigned __int16 **)&v19,
      (__int64)&v27,
      (const unsigned __int16 **)&v18,
      (const wchar_t **)&v17,
      (__int64)&v26,
      (const unsigned __int16 **)&v16,
      (const wchar_t **)&v15,
      (__int64)&v25,
      (__int64)&SRWLock,
      (const unsigned __int16 **)&v14);
  }
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v7 = *(_DWORD **)(a1 + 48);
  v8 = a2[1];
  if ( v8 != v7[21] && (v8 != v7[19] || (int)v7[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v7 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
