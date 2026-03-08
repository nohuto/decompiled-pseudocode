/*
 * XREFs of ?TraceLoggingGlobalDCsInUse@@YAXK@Z @ 0x1C017D92C
 * Callers:
 *     UpdateDCEInUseCount @ 0x1C003D02C (UpdateDCEInUseCount.c)
 *     ReleaseCacheDC @ 0x1C003F210 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C017D8AC (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall TraceLoggingGlobalDCsInUse()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 Lock; // [rsp+48h] [rbp+10h] BYREF
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
  {
    Lock = (unsigned int)WPP_MAIN_CB.DeviceLock.Header.Lock;
    v3 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C02C92F8,
      byte_1C0294FD6,
      v0,
      v1,
      (__int64)&v3,
      (__int64)&Lock);
  }
}
