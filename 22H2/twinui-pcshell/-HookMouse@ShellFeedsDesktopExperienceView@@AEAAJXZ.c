/*
 * XREFs of ?HookMouse@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C3690
 * Callers:
 *     ?OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C4B98 (-OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011F50 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6964 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

signed int __fastcall ShellFeedsDesktopExperienceView::HookMouse(ShellFeedsDesktopExperienceView *this)
{
  const struct _tlgProvider_t *v1; // rcx
  int v2; // ecx
  __int64 v3; // r9
  signed int result; // eax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = (__int64)this;
  if ( `anonymous namespace'::g_hMouseHook )
    return 0;
  v1 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v1 > 5u && tlgKeywordOn((__int64)v1, 0x200000000000LL) )
  {
    v5 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v2,
      (int)&unk_1805804F0,
      0,
      v3,
      (__int64)&v5);
  }
  `anonymous namespace'::g_hMouseHook = SetWindowsHookExW(
                                          14,
                                          ShellFeedsDesktopExperienceView::LowLevelMouseHookProc,
                                          &_ImageBase,
                                          0);
  if ( `anonymous namespace'::g_hMouseHook )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
