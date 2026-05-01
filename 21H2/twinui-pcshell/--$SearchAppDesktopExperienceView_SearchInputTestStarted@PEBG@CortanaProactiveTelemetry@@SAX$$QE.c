/*
 * XREFs of ??$SearchAppDesktopExperienceView_SearchInputTestStarted@PEBG@CortanaProactiveTelemetry@@SAX$$QEAPEBG@Z @ 0x1800BECBC
 * Callers:
 *     ?StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0944 (-StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?StartSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0AC0 (-StartSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 * Callees:
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180011F00 (-Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180264C5C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

char __fastcall CortanaProactiveTelemetry::SearchAppDesktopExperienceView_SearchInputTestStarted<unsigned short const *>(
        __int64 *a1)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // r9d
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = CortanaProactiveLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v2, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v6 = *a1;
      v5 = 0x1000000LL;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v3,
                     (int)&dword_18057F067,
                     (__int64)&v6,
                     (__int64)&v5);
    }
  }
  return (char)v2;
}
