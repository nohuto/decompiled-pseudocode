/*
 * XREFs of ?QueryInterface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013DC80
 * Callers:
 *     ?QueryInterface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801718F0 (-QueryInterface@-$implements@UPinManager@implementation@Shell@Internal@Windows@winr_ea_1801718F0.c)
 *     ?QueryInterface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180171900 (-QueryInterface@-$implements@UPinManager@implementation@Shell@Internal@Windows@winr_ea_180171900.c)
 *     ?QueryInterface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180171910 (-QueryInterface@-$implements@UPinManager@implementation@Shell@Internal@Windows@winr_ea_180171910.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop,winrt::immersive_shell_component>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(a1 + 48);
}
