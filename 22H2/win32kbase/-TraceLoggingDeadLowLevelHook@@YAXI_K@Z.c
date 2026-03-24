/*
 * XREFs of ?TraceLoggingDeadLowLevelHook@@YAXI_K@Z @ 0x1C013AC30
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C013AB1C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall TraceLoggingDeadLowLevelHook()
{
  __int64 v0; // r8
  __int64 v1; // r9
  int v2; // [rsp+50h] [rbp+18h] BYREF
  __int64 v3; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C0249250 > 5 && tlgKeywordOn((__int64)&dword_1C0249250, 0x400000000000LL) )
  {
    v3 = v0;
    v2 = v1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C0249250,
      byte_1C0218D2E,
      v0,
      v1,
      (__int64)&v2,
      (__int64)&v3);
  }
}
