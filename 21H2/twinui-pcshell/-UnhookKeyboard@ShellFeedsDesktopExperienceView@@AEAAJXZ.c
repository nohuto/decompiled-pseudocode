/*
 * XREFs of ?UnhookKeyboard@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C5D18
 * Callers:
 *     ?OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C42F8 (-OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewDestroyed@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C45CC (-OnViewDestroyed@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011F50 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6984 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::UnhookKeyboard(ShellFeedsDesktopExperienceView *this)
{
  const struct _tlgProvider_t *v1; // rcx
  int v2; // ecx
  __int64 v3; // r9
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = (__int64)this;
  if ( `anonymous namespace'::g_hKeyboardHook )
  {
    v1 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
    if ( *(_DWORD *)v1 > 5u && tlgKeywordOn((__int64)v1, 0x200000000000LL) )
    {
      v5 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v2,
        (int)&unk_1805805C9,
        0,
        v3,
        (__int64)&v5);
    }
    UnhookWindowsHookEx(`anonymous namespace'::g_hKeyboardHook);
    `anonymous namespace'::g_hKeyboardHook = 0LL;
  }
  return 0LL;
}
