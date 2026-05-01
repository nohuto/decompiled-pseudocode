/*
 * XREFs of ?_Uncloak@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B9C18
 * Callers:
 *     ?_OnAppRequestedUncloak@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B8AF8 (-_OnAppRequestedUncloak@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011F50 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ShellFeedsExperienceManagerImpl_FailureEvent@W4ShellFeedsExperienceManagerError@@J@ShellFeedsTelemetry@@SAX$$QEAW4ShellFeedsExperienceManagerError@@$$QEAJ@Z @ 0x1800B0564 (--$ShellFeedsExperienceManagerImpl_FailureEvent@W4ShellFeedsExperienceManagerError@@J@ShellFeeds.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6984 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_Uncloak(ShellFeedsExperienceManagerImpl *this)
{
  const struct _tlgProvider_t *v2; // rcx
  int v3; // ecx
  __int64 v4; // r9
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && tlgKeywordOn((__int64)v2, 0x400000000000LL) )
  {
    v8 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v3,
      (int)&unk_18057DE61,
      0,
      v4,
      (__int64)&v8);
  }
  LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 56LL))(*((_QWORD *)this + 9));
  v5 = v8;
  if ( (int)v8 >= 0 )
    return 0LL;
  v9 = 9;
  ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_FailureEvent<enum ShellFeedsExperienceManagerError,long>(
    &v9,
    (int *)&v8);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32D,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)v5);
  return v5;
}
