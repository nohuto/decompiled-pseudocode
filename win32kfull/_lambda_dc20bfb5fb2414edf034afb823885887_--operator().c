/*
 * XREFs of _lambda_dc20bfb5fb2414edf034afb823885887_::operator() @ 0x1C012DEB8
 * Callers:
 *     _lambda_dc20bfb5fb2414edf034afb823885887_::_lambda_invoker_cdecl_ @ 0x1C012DEA0 (_lambda_dc20bfb5fb2414edf034afb823885887_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     W32GetCurrentThread @ 0x1C0050918 (W32GetCurrentThread.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01AA558 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     xxxClientEnableMMCSS @ 0x1C0214C30 (xxxClientEnableMMCSS.c)
 */

__int64 __fastcall lambda_dc20bfb5fb2414edf034afb823885887_::operator()(__int64 a1)
{
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( W32GetCurrentThread() != gTermIO[2] )
  {
    LODWORD(v2) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 919LL);
  }
  if ( (unsigned int)dword_1C035C080 > 4 && tlgKeywordOn((__int64)&dword_1C035C080, 2LL) )
  {
    v2 = (__int64)"EnableMMCSS";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_1C035C080,
      (__int64)&v2);
  }
  return xxxClientEnableMMCSS((*gpsi >> 12) & 1);
}
