/*
 * XREFs of ?PowerOnMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z @ 0x1C00DD4F4
 * Callers:
 *     PowerOnMonitor @ 0x1C015BD90 (PowerOnMonitor.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapSz@D@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?MonitorRequestReasonToString@InputTraceLogging@@CAPEBDW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00DCE98 (-MonitorRequestReasonToString@InputTraceLogging@@CAPEBDW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOnLocToString@InputTraceLogging@@CAPEBDW4_POWERON_LOC@@@Z @ 0x1C00DD484 (-PowerOnLocToString@InputTraceLogging@@CAPEBDW4_POWERON_LOC@@@Z.c)
 */

void InputTraceLogging::Power::PowerOnMonitor()
{
  int v0; // r8d
  int v1; // r9d
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
  {
    v4 = (__int64)InputTraceLogging::PowerOnLocToString(v0);
    v5 = (__int64)InputTraceLogging::MonitorRequestReasonToString(v1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>>(
      (int)&dword_1C02CA7E0,
      (int)&dword_1C029410C,
      v2,
      v3,
      (void **)&v5,
      (void **)&v4);
  }
}
