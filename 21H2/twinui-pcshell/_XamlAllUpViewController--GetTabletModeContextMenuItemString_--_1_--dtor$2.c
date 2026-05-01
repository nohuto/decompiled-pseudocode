/*
 * XREFs of _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$2 @ 0x18038A99D
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 88),
    (struct IServiceProvider *)0x38,
    0LL);
}
