/*
 * XREFs of ?HampPdcControlCallback@@YAJPEAXK@Z @ 0x180082AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180082DE0 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampPdcControlCallback(struct _HAM_PDC_CONTEXT *a1, int a2)
{
  DWORD v4; // ebx
  int v6; // [rsp+30h] [rbp-E8h] BYREF
  char v7[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+D0h] [rbp-48h] BYREF
  int *v9; // [rsp+F0h] [rbp-28h]
  int v10; // [rsp+F8h] [rbp-20h]
  int v11; // [rsp+FCh] [rbp-1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v7);
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A2218,
      0LL,
      0LL,
      2u,
      &v8);
  if ( a2 < 0 )
    HampPdcExitPlmPhase(a1);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    v11 = 0;
    v9 = &v6;
    v6 = a2;
    v10 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A2193,
      0LL,
      0LL,
      3u,
      &v8);
  }
  return 0LL;
}
