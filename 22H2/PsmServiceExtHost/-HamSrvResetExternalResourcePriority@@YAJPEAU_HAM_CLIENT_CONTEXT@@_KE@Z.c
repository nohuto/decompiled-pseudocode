/*
 * XREFs of ?HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z @ 0x18007B450
 * Callers:
 *     HamRpcSrvResetExternalResourcePriority @ 0x180080E10 (HamRpcSrvResetExternalResourcePriority.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800228C0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180076F34 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 *     ?HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z @ 0x180081BE8 (-HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z.c)
 */

__int64 __fastcall HamSrvResetExternalResourcePriority(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2, unsigned __int8 a3)
{
  struct _HAM_ACTIVITY *v6; // rdi
  struct _HAM_ACTIVITY *v7; // rax
  int v8; // ebx
  DWORD v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v13[4]; // [rsp+40h] [rbp-E8h] BYREF
  int v14; // [rsp+44h] [rbp-E4h] BYREF
  __int64 v15; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v16[144]; // [rsp+50h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+E0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_18009F6EC,
      0LL,
      0LL,
      2u,
      &v17);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  v6 = 0LL;
  if ( a3 < 3u || a3 > 0x30u )
  {
    v8 = -1073741583;
  }
  else
  {
    v7 = HampActFindForClient(a1, a2);
    v6 = v7;
    if ( !v7 )
    {
      v8 = -1073741275;
      goto LABEL_13;
    }
    v8 = HampActResetExternalResourcePriority(v7, a3);
    if ( v8 >= 0 )
      v8 = 0;
  }
  if ( v6 )
    CemRcObjectDereference(v6);
LABEL_13:
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    v13[0] = a3;
    v15 = a2;
    v14 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (__int64)&dword_1800B3218,
      byte_18009FE13,
      v10,
      v11,
      (__int64)&v14,
      (__int64)&v15,
      (__int64)v13);
  }
  return (unsigned int)v8;
}
