/*
 * XREFs of ?HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z @ 0x18007BC74
 * Callers:
 *     HamRpcSrvTerminateIfSuspendedByProcess @ 0x180080E50 (HamRpcSrvTerminateIfSuspendedByProcess.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180031088 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180077478 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18007CAF8 (-HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_.c)
 */

__int64 __fastcall HamSrvTerminateIfSuspendedByProcess(struct _HAM_CLIENT_CONTEXT *a1, void *a2, unsigned __int8 *a3)
{
  DWORD ProcessId; // eax
  DWORD v7; // edi
  int ProcessPsmInfo; // ebx
  __int64 v9; // r8
  DWORD v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE v14[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v17[144]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t v18[280]; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+310h] [rbp+210h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_18009FEC5,
      0LL,
      0LL,
      2u,
      &v19);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  ProcessId = GetProcessId(a2);
  v7 = ProcessId;
  if ( ProcessId )
  {
    ProcessPsmInfo = RmpSystemGetProcessPsmInfo(ProcessId, v18);
    if ( ProcessPsmInfo >= 0 )
    {
      HampManagerTerminateHostIfSuspended(*(_QWORD *)a1, v7, v9, 4608LL, v14);
      ProcessPsmInfo = 0;
      *a3 = v14[0];
    }
  }
  else if ( (int)GetLastError() > 0 )
  {
    ProcessPsmInfo = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    ProcessPsmInfo = GetLastError();
  }
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    v15 = *((_DWORD *)a1 + 36);
    v16 = ProcessPsmInfo;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (__int64)&dword_1800B3218,
      byte_18009F722,
      v11,
      v12,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)v14);
  }
  return (unsigned int)ProcessPsmInfo;
}
