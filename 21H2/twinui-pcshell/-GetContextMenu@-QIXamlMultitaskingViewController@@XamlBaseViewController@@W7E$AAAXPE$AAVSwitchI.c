/*
 * XREFs of ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x18016D520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _GetContextMenu__QIXamlMultitaskingViewController__XamlBaseViewController__W7E_AAAXPE_AAVSwitchItemContextMenuArgs_Switcher_Experiences_ComposableShell_WindowsInternal__PE_AAUISwitcherViewModel_4567__Z(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)(a1 - 8), a2, a3);
}
