/*
 * XREFs of ?__abi_IXamlMultitaskingViewController____abi_GetContextMenu@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAJPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x18038C454
 * Callers:
 *     ?__abi_IXamlMultitaskingViewController____abi_GetContextMenu@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAJPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x18016CF90 (-__abi_IXamlMultitaskingViewController____abi_GetContextMenu@-QIXamlMultitaskingViewController@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_IXamlMultitaskingViewController____abi_GetContextMenu__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAJPE_AAVSwitchItemContextMenuArgs_Switcher_Experiences_ComposableShell_WindowsInternal__PE_AAUISwitcherViewModel_4567__Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 128) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 104LL))(a1 + 8);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
