/*
 * XREFs of ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x180002AFC
 * Callers:
 *     HamRpcSrvRetrieveDynamicIdForHostId @ 0x180002AE0 (HamRpcSrvRetrieveDynamicIdForHostId.c)
 * Callees:
 *     ?HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z @ 0x180002C40 (-HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z.c)
 *     CempUtilValidateAndCaptureSid @ 0x180002CF4 (CempUtilValidateAndCaptureSid.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180079700 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_tlgWra.c)
 */

__int64 __fastcall HamSrvRetrieveDynamicIdForHostId(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        struct _GUID *a6)
{
  char *v9; // rsi
  int v10; // ebx
  DWORD v11; // edi
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  unsigned int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  struct _GUID *v18; // [rsp+58h] [rbp-A8h] BYREF
  char *v19; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  struct _GUID v21; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v23[144]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+160h] [rbp+60h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v23);
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A0550, 0, 0, 2u, &v24);
  v21 = 0LL;
  if ( (int)CempUtilValidateAndCaptureSid(a2) < 0 )
  {
    v10 = -1073741585;
    v9 = (char *)a1 + 876;
  }
  else
  {
    v9 = v22;
    v10 = HampHostIdStoreRetrieveDynamicId(
            (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 544),
            (union _RM_SID *)v22,
            a4,
            a5,
            &v21);
    if ( v10 >= 0 )
    {
      v10 = 0;
      *a6 = v21;
    }
  }
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 8LL) )
  {
    v16 = a4;
    v18 = &v21;
    v19 = v9;
    v20 = a5;
    v17 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v12,
      (unsigned int)&unk_18009F7EB,
      v13,
      v14,
      (__int64)&v17,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v16,
      (__int64)&v18);
  }
  return (unsigned int)v10;
}
