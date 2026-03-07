void __fastcall InputTraceLogging::Power::UpdateDisplayState(
        enum _MONITOR_DISPLAY_STATE a1,
        enum POWER_MONITOR_REQUEST_REASON a2)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // r9
  enum _MONITOR_DISPLAY_STATE v4; // r11d
  int v5; // r10d
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+44h] [rbp-24h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
  {
    v8 = v3;
    v9 = v2;
    v10 = (__int64)InputTraceLogging::MonitorDisplayStateToString(v4);
    v11 = (__int64)InputTraceLogging::MonitorRequestReasonToString(v5);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1C02CA7E0,
      (int)&dword_1C0294171,
      v6,
      v7,
      (void **)&v11,
      (void **)&v10,
      (__int64)&v9,
      (__int64)&v8);
  }
}
