/*
 * XREFs of ?add@VirtualDesktopInvoked@__IVirtualDesktopBarElementViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVVirtualDesktopInvokedEventHandler@3456@@Z @ 0x18037DDC8
 * Callers:
 *     ?Initialize@MonitorFrame@@QEAAXPE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitcherControlBase@3456@PE$AAVWindow@Xaml@UI@Windows@@PEAUIXamlExplorerHostWindow@@@Z @ 0x1803725CC (-Initialize@MonitorFrame@@QEAAXPE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@Win.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BF80 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementViewModelPublicNonVirtuals::VirtualDesktopInvoked::add(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 176LL))(a1, a3, a2);
  if ( v4 < 0 )
  {
    __abi_WinRTraiseException(v4);
    __debugbreak();
  }
  return a2;
}
