/*
 * XREFs of ?PowerDisplayBurst@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00DD1E8
 * Callers:
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0159EA0 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?MonitorRequestReasonToString@InputTraceLogging@@CAPEBDW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00DCE98 (-MonitorRequestReasonToString@InputTraceLogging@@CAPEBDW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0159B5C (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::Power::PowerDisplayBurst(enum POWER_MONITOR_REQUEST_REASON a1)
{
  int v1; // r8d
  __int64 v2; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
  {
    v2 = (__int64)InputTraceLogging::MonitorRequestReasonToString(v1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_1C02CA7E0,
      (__int64)&v2);
  }
}
