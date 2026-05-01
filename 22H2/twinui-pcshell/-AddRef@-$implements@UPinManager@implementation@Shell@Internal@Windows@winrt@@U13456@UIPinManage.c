/*
 * XREFs of ?AddRef@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@UEAAKXZ @ 0x1801372B0
 * Callers:
 *     ?AddRef@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@WBA@EAAKXZ @ 0x180171710 (-AddRef@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U1345_ea_180171710.c)
 *     ?AddRef@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@WBI@EAAKXZ @ 0x180171720 (-AddRef@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U1345_ea_180171720.c)
 *     ?AddRef@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@WCA@EAAKXZ @ 0x180171730 (-AddRef@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U1345_ea_180171730.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop,winrt::immersive_shell_component>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::AddRef(a1 + 48);
}
