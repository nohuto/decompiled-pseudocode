/*
 * XREFs of _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$2 @ 0x18038A27D
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall XamlAllUpViewController::_IXamlMultitaskingViewController_::GetContextMenu_::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 144),
    (struct IServiceProvider *)0xB0,
    a3);
}
