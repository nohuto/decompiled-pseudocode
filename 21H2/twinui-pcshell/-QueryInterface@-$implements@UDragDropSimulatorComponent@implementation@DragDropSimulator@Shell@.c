/*
 * XREFs of ?QueryInterface@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180124800
 * Callers:
 *     ?QueryInterface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801715B0 (-QueryInterface@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvid.c)
 *     ?QueryInterface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801715C0 (-QueryInterface@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UI_ea_1801715C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(a1 + 32);
}
