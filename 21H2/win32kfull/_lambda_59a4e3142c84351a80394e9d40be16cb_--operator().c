/*
 * XREFs of _lambda_59a4e3142c84351a80394e9d40be16cb_::operator() @ 0x1C01685D8
 * Callers:
 *     _lambda_59a4e3142c84351a80394e9d40be16cb_::_lambda_invoker_cdecl_ @ 0x1C01685C0 (_lambda_59a4e3142c84351a80394e9d40be16cb_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     xxxClientEnableMMCSS @ 0x1C000A59C (xxxClientEnableMMCSS.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D4BD8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

__int64 __fastcall lambda_59a4e3142c84351a80394e9d40be16cb_::operator()(__int64 a1)
{
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) != gTermIO[2] )
  {
    LODWORD(v2) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 925LL);
  }
  if ( (unsigned int)dword_1C0330B20 > 4 && (qword_1C0330B30 & 2) != 0 && (qword_1C0330B38 & 2) == qword_1C0330B38 )
  {
    v2 = (__int64)"EnableMMCSS";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_1C0330B20,
      (__int64)&v2);
  }
  return xxxClientEnableMMCSS((*gpsi >> 12) & 1);
}
