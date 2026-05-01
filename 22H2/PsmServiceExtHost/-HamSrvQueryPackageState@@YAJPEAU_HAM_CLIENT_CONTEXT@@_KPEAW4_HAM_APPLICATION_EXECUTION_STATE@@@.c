/*
 * XREFs of ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007AD10
 * Callers:
 *     HamRpcSrvDebugQueryPackageState @ 0x180080F30 (HamRpcSrvDebugQueryPackageState.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18002A2E4 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180076F34 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180080948 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18008126C (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 */

__int64 __fastcall HamSrvQueryPackageState(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        enum _HAM_APPLICATION_EXECUTION_STATE *a3)
{
  int v3; // esi
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v7; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v8; // rbp
  unsigned int v9; // edi
  __int64 v10; // rbx
  DWORD v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v15[4]; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-F4h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-F0h] BYREF
  _BYTE v18[144]; // [rsp+50h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+E0h] [rbp-58h] BYREF

  LOBYTE(v3) = 4;
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_18009FB68,
      0LL,
      0LL,
      2u,
      &v19);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  v7 = HampClientPkgFindByPackageHandle(a1, a2);
  v8 = v7;
  if ( v7 )
  {
    v10 = *((_QWORD *)v7 + 7);
    HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v10);
    v3 = (*(_DWORD *)(v10 + 344) >> 5) & 7;
    HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v10);
    v9 = 0;
    *(_DWORD *)a3 = v3;
    CemRcObjectDereference(v8);
  }
  else
  {
    v9 = -1073741275;
  }
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    v15[0] = v3;
    v17 = a2;
    v16 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (__int64)&dword_1800B3218,
      byte_1800A0479,
      v12,
      v13,
      (__int64)&v16,
      (__int64)&v17,
      (__int64)v15);
  }
  return v9;
}
