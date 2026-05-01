/*
 * XREFs of ?OnHidden@ShellFeedsExperienceManagerNotification@@UEAAXXZ @ 0x1800B6660
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011F50 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6984 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall ShellFeedsExperienceManagerNotification::OnHidden(ShellFeedsExperienceManagerNotification *this)
{
  __int64 v1; // rbx
  const struct _tlgProvider_t *v2; // rcx
  int v3; // ecx
  __int64 v4; // r9
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
  {
    v2 = FeedsMicrosoftTelemetryProvider::Provider();
    if ( *(_DWORD *)v2 > 5u )
    {
      if ( tlgKeywordOn((__int64)v2, 0x200000000000LL) )
      {
        v5 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          v3,
          (int)&unk_18057DB6A,
          0,
          v4,
          (__int64)&v5);
      }
    }
    *(_WORD *)(v1 + 216) = 0;
  }
}
