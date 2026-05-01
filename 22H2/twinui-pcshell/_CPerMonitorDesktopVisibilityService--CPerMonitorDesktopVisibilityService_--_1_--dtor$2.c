/*
 * XREFs of _CPerMonitorDesktopVisibilityService::CPerMonitorDesktopVisibilityService_::_1_::dtor$2 @ 0x18043C8DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPerMonitorDesktopVisibilityService::CPerMonitorDesktopVisibilityService_::_1_::dtor_2(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)&a2[6].lpVtbl[7], a2, a3);
}
