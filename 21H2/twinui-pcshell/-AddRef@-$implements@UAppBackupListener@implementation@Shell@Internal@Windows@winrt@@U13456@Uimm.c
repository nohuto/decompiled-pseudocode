/*
 * XREFs of ?AddRef@?$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@UEAAKXZ @ 0x18011C0C0
 * Callers:
 *     ?AddRef@?$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@W7EAAKXZ @ 0x180171860 (-AddRef@-$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt_ea_180171860.c)
 *     ?AddRef@?$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@WBA@EAAKXZ @ 0x180171870 (-AddRef@-$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt_ea_180171870.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::Windows::Internal::Shell::AppBackupListener,winrt::immersive_shell_component>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::AddRef(a1 + 32);
}
