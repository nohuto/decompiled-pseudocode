/*
 * XREFs of _XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem_::_1_::dtor$0_0 @ 0x1803893C3
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem_::_1_::dtor_0_0(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a2 + 48), 0LL, a3);
}
