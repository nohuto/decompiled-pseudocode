/*
 * XREFs of ?ShellFeedsLauncher_NetworkStatusChangeListenerStarted@ShellFeedsTelemetry@@SAXXZ @ 0x180104F8C
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x180102E30 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_180102E30.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsAvailabilityToRegistry$_ResumeCoro$2 @ 0x1801051A0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Tr_ea_1801051A0.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011F50 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6964 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall ShellFeedsTelemetry::ShellFeedsLauncher_NetworkStatusChangeListenerStarted(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rcx
  int v2; // ecx
  __int64 v3; // r9
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = FeedsMicrosoftTelemetryProvider::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
    {
      v4 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v2,
        (int)&unk_18059FCF5,
        0,
        v3,
        (__int64)&v4);
    }
  }
}
