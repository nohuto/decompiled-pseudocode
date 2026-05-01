/*
 * XREFs of ?HandleShellRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1803D8000
 * Callers:
 *     ?OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x1803D0200 (-OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 * Callees:
 *     ?IsPrimaryViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x1803D851C (-IsPrimaryViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedHide(
        KeyboardHosting::TabTipAdapterPolicy *this,
        enum Windows::Internal::Shell::Text::ShellRequestType *a2)
{
  *(_DWORD *)a2 = 0;
  if ( KeyboardHosting::TabTipAdapterPolicy::IsPrimaryViewShown((KeyboardHosting::TabTipAdapterPolicy *)((char *)this - 16)) )
  {
    *(_DWORD *)a2 = 2;
    *((_BYTE *)this + 496) = 0;
  }
  return 0LL;
}
