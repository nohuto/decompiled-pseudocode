/*
 * XREFs of ?HandleEditControlEmbeddedHandwritingViewEnabledSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1803D7D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlEmbeddedHandwritingViewEnabledSettingChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  *(_DWORD *)a3 = 0;
  *((_BYTE *)this + 502) = a2 != 0;
  return 0LL;
}
