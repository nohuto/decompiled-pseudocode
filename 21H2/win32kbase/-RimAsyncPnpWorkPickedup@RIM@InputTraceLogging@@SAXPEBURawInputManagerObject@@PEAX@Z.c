/*
 * XREFs of ?RimAsyncPnpWorkPickedup@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEAX@Z @ 0x1C017FA18
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0185330 (RIMOnAsyncPnpWorkNotification.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0167FBC (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall InputTraceLogging::RIM::RimAsyncPnpWorkPickedup(const struct RawInputManagerObject *a1, void *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 256LL) )
  {
    v4 = v2;
    v5 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C028EE70,
      byte_1C025D56E,
      v2,
      v3,
      (__int64)&v5,
      (__int64)&v4);
  }
}
