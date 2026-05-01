/*
 * XREFs of ?UnhookKeyboard@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800C0BEC
 * Callers:
 *     ?OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800895A0 (-OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ??1SearchAppDesktopExperienceView@@UEAA@XZ @ 0x1802761E4 (--1SearchAppDesktopExperienceView@@UEAA@XZ.c)
 * Callees:
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180011F00 (-Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011F50 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::UnhookKeyboard(SearchAppDesktopExperienceView *this)
{
  const struct _tlgProvider_t *v1; // rcx
  int v2; // ecx
  __int64 v3; // r9
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = (__int64)this;
  if ( `anonymous namespace'::g_hKeyboardHook )
  {
    v1 = CortanaProactiveLogging::Provider();
    if ( *(_DWORD *)v1 > 5u && tlgKeywordOn((__int64)v1, 0x200000000000LL) )
    {
      v5 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v2,
        (int)&unk_18057F1A7,
        0,
        v3,
        (__int64)&v5);
    }
    UnhookWindowsHookEx(`anonymous namespace'::g_hKeyboardHook);
    `anonymous namespace'::g_hKeyboardHook = 0LL;
  }
  return 0LL;
}
