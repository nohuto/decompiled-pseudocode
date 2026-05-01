/*
 * XREFs of ?AddRef@?$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@UEAAKXZ @ 0x18011BF50
 * Callers:
 *     ?AddRef@?$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@W7EAAKXZ @ 0x1801716B0 (-AddRef@-$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt_ea_1801716B0.c)
 *     ?AddRef@?$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@WBA@EAAKXZ @ 0x1801716C0 (-AddRef@-$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt_ea_1801716C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::Windows::Internal::Shell::AppBackupListener,winrt::immersive_shell_component>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::AddRef(a1 + 32);
}
