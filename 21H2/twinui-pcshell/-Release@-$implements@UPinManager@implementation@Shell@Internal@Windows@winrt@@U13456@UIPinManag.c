/*
 * XREFs of ?Release@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@UEAAKXZ @ 0x18013DEE0
 * Callers:
 *     ?Release@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@WBA@EAAKXZ @ 0x180171920 (-Release@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U134_ea_180171920.c)
 *     ?Release@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@WBI@EAAKXZ @ 0x180171930 (-Release@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U134_ea_180171930.c)
 *     ?Release@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@WCA@EAAKXZ @ 0x180171940 (-Release@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U134_ea_180171940.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop,winrt::immersive_shell_component>::Release(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::Release(a1 + 48);
}
