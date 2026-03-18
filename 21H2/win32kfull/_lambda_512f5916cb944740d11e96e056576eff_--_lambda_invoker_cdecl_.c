/*
 * XREFs of _lambda_512f5916cb944740d11e96e056576eff_::_lambda_invoker_cdecl_ @ 0x1C011CB10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     xxxClientEnableMMCSS @ 0x1C011CB68 (xxxClientEnableMMCSS.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D08A8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

__int64 lambda_512f5916cb944740d11e96e056576eff_::_lambda_invoker_cdecl_()
{
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) != gTermIO[2] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(gTermIO[0]);
  if ( (unsigned int)dword_1C032BE20 > 4 && tlgKeywordOn((__int64)&dword_1C032BE20, 2LL) )
  {
    v1 = (__int64)"EnableMMCSS";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_1C032BE20,
      (__int64)&v1);
  }
  return xxxClientEnableMMCSS((*gpsi >> 12) & 1);
}
