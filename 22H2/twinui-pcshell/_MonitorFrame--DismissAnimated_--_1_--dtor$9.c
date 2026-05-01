/*
 * XREFs of _MonitorFrame::DismissAnimated_::_1_::dtor$9 @ 0x180370E73
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall MonitorFrame::DismissAnimated_::_1_::dtor_9(__int64 a1, __int64 a2, struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 40),
    (struct IServiceProvider *)0x130,
    a3);
}
