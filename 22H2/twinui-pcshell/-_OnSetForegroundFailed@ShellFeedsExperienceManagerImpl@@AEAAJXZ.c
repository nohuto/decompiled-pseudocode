/*
 * XREFs of ?_OnSetForegroundFailed@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B8DCC
 * Callers:
 *     ?OnSetForegroundFailed@ShellFeedsExperienceManagerNotification@@UEAAXXZ @ 0x1800B66B0 (-OnSetForegroundFailed@ShellFeedsExperienceManagerNotification@@UEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011F50 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ??$ShellFeedsExperienceManagerImpl_FailureEvent@W4ShellFeedsExperienceManagerError@@J@ShellFeedsTelemetry@@SAX$$QEAW4ShellFeedsExperienceManagerError@@$$QEAJ@Z @ 0x1800B0544 (--$ShellFeedsExperienceManagerImpl_FailureEvent@W4ShellFeedsExperienceManagerError@@J@ShellFeeds.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6964 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_Hide@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B868C (-_Hide@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnSetForegroundFailed(ShellFeedsExperienceManagerImpl *this)
{
  const struct _tlgProvider_t *v2; // rcx
  int v3; // ecx
  __int64 v4; // r9
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && tlgKeywordOn((__int64)v2, 0x200000000000LL) )
  {
    v6 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v3,
      (int)&unk_18057E2A1,
      0,
      v4,
      (__int64)&v6);
  }
  if ( (int)ShellFeedsExperienceManagerImpl::_Hide(this) < 0 )
  {
    LODWORD(v6) = ShellFeedsExperienceManagerImpl::_Hide(this);
    v7 = 7;
    ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_FailureEvent<enum ShellFeedsExperienceManagerError,long>(
      &v7,
      (int *)&v6);
  }
  return 0LL;
}
