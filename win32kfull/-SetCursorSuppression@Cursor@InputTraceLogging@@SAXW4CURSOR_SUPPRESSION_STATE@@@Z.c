/*
 * XREFs of ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x1C01C2070
 * Callers:
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C01C2040 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01AA558 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x1C01ABE14 (-CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void InputTraceLogging::Cursor::SetCursorSuppression()
{
  __int64 v0; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1C035C080 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C035C080, 8LL) )
    {
      v0 = (__int64)InputTraceLogging::CursorSuppressionToString(gCursorSuppressionState);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)&dword_1C035C080,
        byte_1C031D00F,
        0LL,
        0LL,
        (void **)&v0);
    }
  }
}
