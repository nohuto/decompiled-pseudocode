/*
 * XREFs of _lambda_e277e00ef720cdd7e05078d97cf7089b_::operator() @ 0x1C013A878
 * Callers:
 *     _lambda_e277e00ef720cdd7e05078d97cf7089b_::_lambda_invoker_cdecl_ @ 0x1C013A860 (_lambda_e277e00ef720cdd7e05078d97cf7089b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     W32GetCurrentThread @ 0x1C011CF20 (W32GetCurrentThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01A9358 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     xxxClientEnableMMCSS @ 0x1C0212068 (xxxClientEnableMMCSS.c)
 */

__int64 __fastcall lambda_e277e00ef720cdd7e05078d97cf7089b_::operator()(__int64 a1)
{
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( W32GetCurrentThread() != gTermIO[2] )
  {
    LODWORD(v2) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 920LL);
  }
  if ( (unsigned int)dword_1C0359080 > 4 && tlgKeywordOn((__int64)&dword_1C0359080, 2LL) )
  {
    v2 = (__int64)"EnableMMCSS";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_1C0359080,
      (__int64)&v2);
  }
  return xxxClientEnableMMCSS((*gpsi >> 12) & 1);
}
