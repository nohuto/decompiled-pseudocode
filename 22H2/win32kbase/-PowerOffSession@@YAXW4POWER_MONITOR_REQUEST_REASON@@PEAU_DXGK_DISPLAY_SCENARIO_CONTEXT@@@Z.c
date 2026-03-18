/*
 * XREFs of ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01327E4
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?MonitorRequestReasonToString@InputTraceLogging@@CAPEBDW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00D0624 (-MonitorRequestReasonToString@InputTraceLogging@@CAPEBDW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01321D0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C01332D0 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 */

void __fastcall PowerOffSession(__int32 a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v3; // ebx
  __int64 v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = (__int64)a2;
  v3 = 0;
  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 2LL) )
  {
    v4 = (__int64)InputTraceLogging::MonitorRequestReasonToString(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_1C0289810,
      byte_1C02559D1,
      0LL,
      0LL,
      (void **)&v4);
  }
  if ( !gProtocolType )
  {
    LODWORD(v4) = 2;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v4, 4LL, 0LL, 0LL);
    v3 = 1;
  }
  UpdateSessionPowerState(0, (enum POWER_MONITOR_REQUEST_REASON)a1);
  if ( v3 )
  {
    LODWORD(v4) = 0;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v4, 4LL, 0LL, 0LL);
  }
}
