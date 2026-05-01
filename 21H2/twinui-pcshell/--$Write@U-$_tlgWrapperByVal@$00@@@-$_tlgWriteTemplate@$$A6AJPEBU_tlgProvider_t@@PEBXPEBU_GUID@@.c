/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18024B064
 * Callers:
 *     ??$LockScreenStateChanged@AEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N@Z @ 0x1800CDE28 (--$LockScreenStateChanged@AEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N@Z.c)
 *     ??$ImmersiveAppInstalled@AEA_N@CanPinToTaskbar@TaskbarPinningTelemetry@@QEAAXAEA_N@Z @ 0x180131DE0 (--$ImmersiveAppInstalled@AEA_N@CanPinToTaskbar@TaskbarPinningTelemetry@@QEAAXAEA_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v9 = 0;
  v7 = a5;
  v8 = 1;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 3u, &v6);
}
