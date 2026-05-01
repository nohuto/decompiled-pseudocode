/*
 * XREFs of ?Release@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@UEAAKXZ @ 0x18013DD70
 * Callers:
 *     ?Release@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@WBA@EAAKXZ @ 0x180171770 (-Release@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U134_ea_180171770.c)
 *     ?Release@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@WBI@EAAKXZ @ 0x180171780 (-Release@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U134_ea_180171780.c)
 *     ?Release@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@WCA@EAAKXZ @ 0x180171790 (-Release@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U134_ea_180171790.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop,winrt::immersive_shell_component>::Release(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::Release(a1 + 48);
}
