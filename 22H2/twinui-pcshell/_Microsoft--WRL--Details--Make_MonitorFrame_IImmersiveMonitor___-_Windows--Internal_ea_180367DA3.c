/*
 * XREFs of _Microsoft::WRL::Details::Make_MonitorFrame_IImmersiveMonitor___&_Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl___&_IXamlMultitaskingViewController___&_IXamlSwitcherWindowInteractionEvents____::_1_::dtor$2 @ 0x180367DA3
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Microsoft::WRL::Details::Make_MonitorFrame_IImmersiveMonitor_____Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl_____IXamlMultitaskingViewController_____IXamlSwitcherWindowInteractionEvents____::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 72),
    *(struct IServiceProvider **)(a2 + 64),
    a3);
}
