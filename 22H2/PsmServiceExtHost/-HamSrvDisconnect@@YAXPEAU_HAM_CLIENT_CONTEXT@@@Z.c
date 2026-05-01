/*
 * XREFs of ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000863C
 * Callers:
 *     HamRpcSrvDisconnectServicing @ 0x180006D90 (HamRpcSrvDisconnectServicing.c)
 *     HamRpcSrvConnectExtendedExecution @ 0x180008A70 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnect @ 0x180036AD0 (HamRpcSrvConnect.c)
 *     HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x18003C150 (HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x18003D7B0 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectDebugging @ 0x18003D8D0 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectServicing @ 0x18003DA10 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectSessionState @ 0x18003DB10 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectFullTrust @ 0x180080BB0 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180008734 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180079510 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall HamSrvDisconnect(struct _HAM_CLIENT_CONTEXT *a1)
{
  int v2; // edi
  char v3; // si
  int v4; // ebp
  DWORD v5; // ebx
  int v6; // r8d
  int v7; // r9d
  _BYTE v8[4]; // [rsp+40h] [rbp-D8h] BYREF
  int v9; // [rsp+44h] [rbp-D4h] BYREF
  int v10; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE v11[144]; // [rsp+50h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+E0h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A03C5, 0, 0, 2u, &v12);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  v2 = *((_DWORD *)a1 + 35);
  v3 = *((_BYTE *)a1 + 136);
  v4 = *((_DWORD *)a1 + 37);
  HampClientDestroy(a1);
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v5, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 8LL) )
    {
      v9 = v4;
      v8[0] = v3;
      v10 = v2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1800B3218,
        (unsigned int)&unk_18009F984,
        v6,
        v7,
        (__int64)&v10,
        (__int64)v8,
        (__int64)&v9);
    }
  }
}
