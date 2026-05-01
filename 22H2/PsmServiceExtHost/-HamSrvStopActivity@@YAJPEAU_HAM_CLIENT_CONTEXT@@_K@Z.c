/*
 * XREFs of ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180006A1C
 * Callers:
 *     HamRpcSrvStopActivity @ 0x180006A10 (HamRpcSrvStopActivity.c)
 * Callees:
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180006B44 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     CempLockTrackerIsSetForThread @ 0x18000B6B0 (CempLockTrackerIsSetForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800228C0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180064294 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall HamSrvStopActivity(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  int v4; // edi
  struct _HAM_ACTIVITY *v5; // rax
  struct _HAM_ACTIVITY *v6; // rsi
  int v7; // ebx
  DWORD v8; // edi
  int v9; // r8d
  int v10; // r9d
  int v12; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v14[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+D0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A03E3, 0, 0, 2u, &v15);
  if ( (unsigned int)CempLockTrackerIsSetForThread() )
  {
    v4 = 0;
  }
  else
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
    v4 = 1;
  }
  v5 = HampActFindForClient(a1, a2);
  v6 = v5;
  if ( v5 )
  {
    v7 = HampActStop(v5);
    if ( v7 >= 0 )
      v7 = 0;
    CemRcObjectDereference(v6);
  }
  else
  {
    v7 = -1073741275;
  }
  if ( v4 )
  {
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v8, 0LL);
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 8LL) )
  {
    v13 = a2;
    v12 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800B3218,
      (unsigned int)&unk_18009F115,
      v9,
      v10,
      (__int64)&v12,
      (__int64)&v13);
  }
  return (unsigned int)v7;
}
