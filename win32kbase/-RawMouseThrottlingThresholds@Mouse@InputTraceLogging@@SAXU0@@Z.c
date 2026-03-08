/*
 * XREFs of ?RawMouseThrottlingThresholds@Mouse@InputTraceLogging@@SAXU0@@Z @ 0x1C0214E68
 * Callers:
 *     TraceRawMouseThrottlingThresholds @ 0x1C0218C28 (TraceRawMouseThrottlingThresholds.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x1C020A2C0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

void InputTraceLogging::Mouse::RawMouseThrottlingThresholds()
{
  _DWORD *v0; // r8
  __int64 v1; // r9
  int v2; // [rsp+50h] [rbp-18h] BYREF
  _DWORD v3[5]; // [rsp+54h] [rbp-14h] BYREF
  int v4; // [rsp+78h] [rbp+10h] BYREF
  int v5; // [rsp+80h] [rbp+18h] BYREF
  int v6; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
  {
    v4 = v0[24];
    v5 = v0[20];
    v6 = v0[14];
    v2 = v0[8];
    v3[0] = v0[2];
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029CA07,
      (__int64)v0,
      v1,
      (__int64)v3,
      (__int64)&v2,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4);
  }
}
