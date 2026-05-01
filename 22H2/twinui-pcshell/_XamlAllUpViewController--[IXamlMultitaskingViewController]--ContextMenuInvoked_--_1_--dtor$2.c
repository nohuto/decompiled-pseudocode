/*
 * XREFs of _XamlAllUpViewController::[IXamlMultitaskingViewController]::ContextMenuInvoked_::_1_::dtor$2 @ 0x180388F85
 * Callers:
 *     <none>
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18035B438 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 */

__int64 __fastcall XamlAllUpViewController::_IXamlMultitaskingViewController_::ContextMenuInvoked_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 152) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 152) &= ~4u;
    return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(*(_QWORD *)(a2 + 32));
  }
  return result;
}
